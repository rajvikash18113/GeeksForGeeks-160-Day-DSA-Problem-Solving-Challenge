Minimize the Heights II
Difficulty: Medium
Accuracy: 15.06%
Submissions: 643K+
Points: 4

Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once:

Increase the height of the tower by K.
Decrease the height of the tower by K.
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

Note:

It is compulsory to increase or decrease the height by K for each tower.
After the operation, the resultant array should not contain any negative integers.
Examples:

Input: K = 2, arr[] = {1, 5, 8, 10}
Output: 5
Explanation:
The array can be modified as {1+K, 5-K, 8-K, 10-K} = {3, 3, 6, 8}.
The difference between the largest and the smallest is 8-3 = 5.

Input: K = 3, arr[] = {3, 9, 12, 16, 20}
Output: 11
Explanation:
The array can be modified as {3+K, 9+K, 12-K, 16-K, 20-K} -> {6, 12, 9, 13, 17}.
The difference between the largest and the smallest is 17-6 = 11.

Expected Time Complexity: O(n * log n)
Expected Auxiliary Space: O(n)






