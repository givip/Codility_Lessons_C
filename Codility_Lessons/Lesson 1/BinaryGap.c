//
//  BinaryGap.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "BinaryGap.h"

int solution(int N) {
	int x = N;

	while (!(x & 1)) {
		x = x >> 1;
	}
	
	int gap_max = 0;
	int gap_count = 0;
	
	while (x > 0) {
		if (x & 1) {
			if (gap_count > gap_max) gap_max = gap_count;
			gap_count = 0;
		} else {
			gap_count++;
		}
		x = x >> 1;
	}
	return gap_max;
}
