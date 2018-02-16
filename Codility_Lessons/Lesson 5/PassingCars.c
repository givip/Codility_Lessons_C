//
//  PassingCars.c
//  Lesson 5
//  Codility_Lessons
//
//  Created by Givi Pataridze on 13.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "PassingCars.h"

int solution(int A[], int N) {
	int sum = 0;
	int step = (A[0] == 0);
	int result = 0;
	
	for (int i=1; i<N; i++) {
		int new_sum = sum + A[i];
		
		if (new_sum == sum)
			step++;
		else
			result += step;
		
		if (result > 1000000000)
			return -1;
		
		sum = new_sum;
	}
	
	if (sum == 0 || sum == N)
		return 0;
	
	return result;
}
