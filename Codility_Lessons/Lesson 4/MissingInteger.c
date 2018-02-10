//
//  MissingInteger.c
//  Lesson 4
//  Codility_Lessons
//
//  Created by Givi Pataridze on 09.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "MissingInteger.h"
#define maxSize (1000001)

int solution(int A[], int N) {
	int B[maxSize] = {0};
	
	for (int i=0; i<N ; i++) {
		int num = A[i];
		if (num > 0)
			B[num] = 1;
	}
	
	for (int i=1; i<maxSize; i++) {
		if (B[i] == 0)
			return i;
	}
	return 1;
}
