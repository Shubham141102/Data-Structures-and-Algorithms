//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    vector<int>v(2,-1); //vector to return friest and last index of element.
        int lo=0,hi=n-1;
        while(lo<=hi){  // Find first Position
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){   //mid==target we think its first Position
                                    //And change to find left so hi=mid-1;
                v[0]=mid;   
                hi=mid-1;
            }
            else if(arr[mid]<x)lo=mid+1;
            else hi=mid-1;
        }
        lo=0;hi=n-1;   //resate lo and hi.
        while(lo<=hi){  // Find last Position
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){   //mid==target we think its last side Position
                                    //And change to find right side so lo=mid+1;
                v[1]=mid;
                lo=mid+1;
            }
            else if(arr[mid]<x)lo=mid+1;
            else hi=mid-1;
        }
        if (v[0]==-1) return 0;
        int ans = v[1]-v[0] +1;
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends