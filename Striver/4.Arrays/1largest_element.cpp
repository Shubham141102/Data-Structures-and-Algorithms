#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}