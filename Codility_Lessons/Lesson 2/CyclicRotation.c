//
//  CyclicRotation.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "CyclicRotation.h"
#include <stdlib.h>
#include <string.h>

void one_move(int A[], int N) {
	int last_elem = A[N-1];
	memmove(A+1, A, sizeof(int) * (N-1));
	A[0] = last_elem;
}

struct Results solution(int A[], int N, int K) {
	struct Results result;
	if (N > 0) {
		for (int i=0; i<K; i++) {
			one_move(A, N);
		}
	}
	result.A = A;
	result.N = N;
	return result;
}
