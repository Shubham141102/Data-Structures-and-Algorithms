// question 1 link = https://www.hackerrank.com/challenges/solve-me-first/problem
// Complete the function solveMeFirst to compute the sum of two integers.
// Example
// a=7
// b=3

// Return 10.

// Function Description

// Complete the solveMeFirst function in the editor below.

// solveMeFirst has the following parameters:

// int a: the first value
// int b: the second value
// Returns
// - int: the sum of  a and b 
// Constraints
// Sample Input
// a = 2
// b = 3
// Sample Output
// 5
// solution =>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
  return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
// --------------------------------------------------------------------------------

// Question - 02 = Simple Array Sum
// Given an array of integers, find the sum of its elements.

// For example, if the array , , so return .

// Function Description

// Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

// simpleArraySum has the following parameter(s):

// ar: an array of integers
// Input Format

// The first line contains an integer, , denoting the size of the array.
// The second line contains  space-separated integers representing the array's elements.



// Print the sum of the array's elements as a single integer.

// Sample Input

// 6
// 1 2 3 4 10 11
// Sample Output

// 31

