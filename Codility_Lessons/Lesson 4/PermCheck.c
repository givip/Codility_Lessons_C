//
//  PermCheck.c
//  Lesson 4
//  Codility_Lessons
//
//  Created by Givi Pataridze on 06.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "PermCheck.h"

int solution(int A[], int N) {
	int result = 0;
	for (int i=0; i<N; i++) {
		result = result ^ (i + 1) ^ A[i];
	}
	return (result == 0);
}
