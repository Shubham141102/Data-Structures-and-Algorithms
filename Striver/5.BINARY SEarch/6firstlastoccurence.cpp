// with llinear search
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int n = nums.size();
        vector<int>ans;
        // if(n==0)
        // {
        //     ans.push_back(first);
        // ans.push_back(last);
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target && first == -1)
            {
                first = i;
                last = i;
            }
            else if(nums[i]==target)
            {
                last = i;
            }

        }
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;


    }
};
// ===================================================================================
optimal approach
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>v(2,-1); //vector to return friest and last index of element.
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){  // Find first Position
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){   //mid==target we think its first Position
                                    //And change to find left so hi=mid-1;
                v[0]=mid;   
                hi=mid-1;
            }
            else if(nums[mid]<target)lo=mid+1;
            else hi=mid-1;
        }
        lo=0;hi=nums.size()-1;   //resate lo and hi.
        while(lo<=hi){  // Find last Position
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){   //mid==target we think its last side Position
                                    //And change to find right side so lo=mid+1;
                v[1]=mid;
                lo=mid+1;
            }
            else if(nums[mid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return v;


    }
};