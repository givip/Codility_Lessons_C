//
//  FrogJmp.c
//  Codility_Lessons
//
//  Created by Givi Pataridze on 04.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#include "FrogJmp.h"
#include <math.h>

int solution(int X, int Y, int D) {
	int way = Y - X;
	if (way % D == 0) {
		return way / D;
	} else {
		return way / D + 1;
	}
}
