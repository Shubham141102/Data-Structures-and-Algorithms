// Solve Me First
// Simple Array Sum
// Compare the Triplets
// A Very Big Sum

// question 1 link = https://www.hackerrank.com/challenges/solve-me-first/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b)
{
  // Hint: Type return a+b; below:
  return a + b;
}

int main()
{
  int num1, num2;
  int sum;
  cin >> num1 >> num2;
  sum = solveMeFirst(num1, num2);
  cout << sum;
  return 0;
}
// --------------------------------------------------------------------------------

// Question - 02 = Simple Array Sum Question link - https://www.hackerrank.com/challenges/simple-array-sum/problem

int simpleArraySum(vector<int> ar)
{
  int sum = 0;
  for (int i = 0; i < ar.size(); i++)
  {
    sum = sum + ar[i];
  }
  return sum;
}
// --------------------------------------------------------------------------------
// question link => https://www.hackerrank.com/challenges/compare-the-triplets/problem
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
  int count_a = 0, count_b = 0;
  for (int i = 0; i <= a.size() - 1; i++)
  {
    if (a[i] > b[i])
    {
      count_a++;
    }
    else if (a[i] == b[i])
    {
      count_a = count_a + 0;
      count_b = count_b + 0;
    }
    else
    {
      count_b++;
    }
  }

  vector<int> ans;
  ans.push_back(count_a);
  ans.push_back(count_b);
  return ans;
}
// -----------------------------------------------------------------------------------------
// wuestion link =>https://www.hackerrank.com/challenges/a-very-big-sum/problem
long aVeryBigSum(vector<long> ar)
{
  long long sum = 0;
  for (int i = 0; i < ar.size(); i++)
  {
    sum = sum + ar[i];
  }
  return sum;
}