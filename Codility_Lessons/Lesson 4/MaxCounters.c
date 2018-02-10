//
//  MaxCounters.c
//  Lesson 4
//  Codility_Lessons
//
//  Created by Givi Pataridze on 10.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "MaxCounters.h"
#include "helpers.h"
#include <stdlib.h>

void set_array_value(int y, int *A, int N) {
	for (int i=0; i<N; i++)
		A[i] = y;
}

struct Results solution(int N, int A[], int M) {
	struct Results result;
	int *B = malloc(sizeof(int) * N);
	set_array_value(0, B, N);
	
	int max = 0;
	int maxCounter = 0;

	for (int i=0; i<M; i++) {
		int num = A[i];
		
		if (B[num-1] < maxCounter)
			B[num-1] = maxCounter;
		
		if (num == N+1) {
			maxCounter = max;
		} else {
			if (++B[num-1] > max)
				max = B[num-1];
		}
	}
	
	for (int i=0; i<N; i++) {
		if (B[i] < maxCounter)
			B[i] = maxCounter;
	}
	
	result.C = B;
	result.L = N;
	return result;
}
