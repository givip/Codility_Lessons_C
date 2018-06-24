//
//  GenomicRangeQuery.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 24/06/2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "GenomicRangeQuery.h"
#include <stdlib.h>

enum { A = 'A', C = 'C', G = 'G', T = 'T' };

struct Cluster {
    long A, C, G, T;
};

#define maxSize (100000)

struct Cluster* new_cluster(char c) {
    struct Cluster* cluster = malloc(sizeof(struct Cluster));
    cluster->A = (c == A);
    cluster->C = (c == C);
    cluster->G = (c == G);
    cluster->T = (c == T);
    return cluster;
}

int impact_factor(struct Cluster *cluster) {
    if (cluster->A > 0) {
        return 1;
    } else if (cluster->C > 0) {
        return 2;
    } else if (cluster->G > 0) {
        return 3;
    } else if (cluster->T > 0) {
        return 4;
    }
    return 0;
}

struct Cluster* diff(struct Cluster *c1, struct Cluster *c2) {
    struct Cluster* newCluster = malloc(sizeof(struct Cluster));
    newCluster->A = c2->A - c1->A;
    newCluster->C = c2->C - c1->C;
    newCluster->G = c2->G - c1->G;
    newCluster->T = c2->T - c1->T;
    return newCluster;
}

struct Cluster* sum(struct Cluster *c1, struct Cluster *c2) {
    struct Cluster* newCluster = malloc(sizeof(struct Cluster));
    newCluster->A = c1->A + c2->A;
    newCluster->C = c1->C + c2->C;
    newCluster->G = c1->G + c2->G;
    newCluster->T = c1->T + c2->T;
    return newCluster;
}

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Cluster **weights = malloc(sizeof(struct Cluster*) * maxSize);
    
    weights[0] = new_cluster(S[0]);
    
    int i = 1;
    while (S[i] != '\0') {
        struct Cluster *cluster = new_cluster(S[i]);
        weights[i] = sum(cluster, weights[i-1]);
        free(cluster);
        i++;
    }
        

    int *arr = malloc(sizeof(int) * M);
    
    for (int i=0; i<M; i++) {
        int start = P[i];
        int finish = Q[i];
        if (start == finish) {
            arr[i] = impact_factor(new_cluster(S[finish]));
        } else if (start == 0) {
            arr[i] = impact_factor(weights[finish]);
        } else {
            struct Cluster *cluster = diff(weights[start-1], weights[finish]);
            arr[i] = impact_factor(cluster);
            free(cluster);
        }
    }
    
    for (int y=0; y<i; y++) {
        free(weights[y]);
    }
    
    struct Results result;
    result.M = M;
    result.A = arr;
    
    return result;
}
