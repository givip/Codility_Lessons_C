//
//  helpers.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 10.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "helpers.h"

void print_array(int *A, int N) {
	for (int i=0; i<N; i++) {
		printf("%d", A[i]);
	}
	printf("\n");
}

int str_count(char *S) {
    int i = 0;
    while (S[i] != '\0') { i++; };
    return i;
}
