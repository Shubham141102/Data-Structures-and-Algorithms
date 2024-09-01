// #include <bits/stdc++.h>
#include<iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         // size of the array.

        int len = 0;
        for (int i = 0; i < N; i++) { // starting index
            for (int j = i; j < N; j++) { // ending index
                // add all the elements of
                // subarray = a[i...j]:
                long long s = 0;
                for (int k = i; k <= j; k++) {
                    s += A[k];
                }
    
                if (s == K)
                    len = max(len, j - i + 1);
            }
        }
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}