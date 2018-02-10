//
//  MissingInteger.h
//  Lesson 4
//  Codility_Lessons
//
//  Created by Givi Pataridze on 09.02.2018.
//  Copyright © 2018 TestProject. All rights reserved.
//

#ifndef MissingInteger_h
#define MissingInteger_h

#include <stdio.h>

/*
 This is a demo task.
 
 Write a function:
 
 int solution(int A[], int N);
 that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
 
 For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
 
 Given A = [1, 2, 3], the function should return 4.
 
 Given A = [−1, −3], the function should return 1.
 
 Assume that:
 
 N is an integer within the range [1..100,000];
 each element of array A is an integer within the range [−1,000,000..1,000,000].
 Complexity:
 
 expected worst-case time complexity is O(N);
 expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).
 
 Copyright 2009–2018 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.
 */

int solution(int A[], int N);

#endif /* MissingInteger_h */
