//
//  CountDiv.c
//  Lesson 5
//  Codility_Lessons
//
//  Created by Givi Pataridze on 10.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "CountDiv.h"
#include <math.h>

int solution(int A, int B, int K) {
	if (A == B && A % K == 0)
		return 1;
	
	int total = (B - A) / K;
	
	if (A % K == 0 || B % K < A % K)
		return ++total;
	
	return total;
}
