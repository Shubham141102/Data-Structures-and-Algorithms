class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long low=0;
        int n= nums.size();
        
        long long  high = n-1;
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            
            else if(nums[mid]>target)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }
        }
        
        return low;
        
    }
};