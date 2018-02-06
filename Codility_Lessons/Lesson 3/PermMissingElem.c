//
//  PermMissingElem.c
//  Lesson 3
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "PermMissingElem.h"

int solution(int A[], int N) {
	int sum = N + 1;
	for (int i=0; i<N; i++) {
		sum = sum + (i+1) - A[i];
	}
	return sum;
}
