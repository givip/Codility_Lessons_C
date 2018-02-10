//
//  FrogRiverOne.c
//  Lesson 4
//  Codility_Lessons
//
//  Created by Givi Pataridze on 07.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "FrogRiverOne.h"

int solution(int X, int A[], int N) {
	int B[X+1];
	for (int i=1; i<=X; i++)
		B[i] = 0;
	
	int counter = 0;
	for (int i=0; i<N; i++) {
		if (B[A[i]] == 0) {
			B[A[i]] = 1;
			counter++;
		}
		if (counter == X)
			return i;
	}
	return -1;
}
