// gives TLE  

class Solution {
public:
bool ls(vector<int>nums,int x)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==x)
                return true;
            }
            return false;
        }
    int longestConsecutive(vector<int>& nums) {
        int longest  = 1;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            int cnt = 1;
            while(ls(nums,x+1)== true)
            {
                x++;
                cnt++;
            }
            longest = max(longest,cnt);
        }
        if(n==0)
        return 0;
        return longest;
    }
};
// 
better approach
#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
// ------------------------------------------------------------------
optima;
class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
    }
};