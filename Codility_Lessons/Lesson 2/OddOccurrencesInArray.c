//
//  OddOccurrencesInArray.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "OddOccurrencesInArray.h"

int solution(int A[], int N) {
	if (N < 1)
		return 0;
	int result = A[0];
	for (int i=1; i<N; i++) {
		result = result ^ A[i];
	}
	return result;
}
