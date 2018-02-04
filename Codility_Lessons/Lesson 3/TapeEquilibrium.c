//
//  TapeEquilibrium.c
//  Lesson 3
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "TapeEquilibrium.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int N) {
	long total_sum = 0;
	for (int i=0; i<N; i++) {
		total_sum += A[i];
	}
	
	long cur_sum = A[0];
	long result = __INT_MAX__;
	for (int i=1; i<N; i++) {
		long diff = labs(total_sum - 2 * cur_sum);
		if (diff < result)
			result = diff;
	}
	
	return (int)result;
}
