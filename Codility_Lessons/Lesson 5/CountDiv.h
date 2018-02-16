//
//  CountDiv.h
//  Lesson 5
//  Codility_Lessons
//
//  Created by Givi Pataridze on 10.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#ifndef CountDiv_h
#define CountDiv_h

#include <stdio.h>

/*
 Write a function:
 
 int solution(int A, int B, int K);
 that, given three integers A, B and K, returns the number of integers within the range [A..B] that are divisible by K, i.e.:
 
 { i : A ≤ i ≤ B, i mod K = 0 }
 For example, for A = 6, B = 11 and K = 2, your function should return 3, because there are three numbers divisible by 2 within the range [6..11], namely 6, 8 and 10.
 
 Assume that:
 
 A and B are integers within the range [0..2,000,000,000];
 K is an integer within the range [1..2,000,000,000];
 A ≤ B.
 Complexity:
 
 expected worst-case time complexity is O(1);
 expected worst-case space complexity is O(1).
 
 Copyright 2009–2018 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
 */

int solution(int A, int B, int K);

#endif /* CountDiv_h */