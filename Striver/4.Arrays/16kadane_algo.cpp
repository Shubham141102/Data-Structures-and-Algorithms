// method 1
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum2=0;
                for(int k=i;k<=j;k++)
                {
                    sum2 = sum2+nums[k];
                }
                sum = max(sum,sum2);
            }
        }
        return sum;
    }
};
// --------------------------------------------------------------------
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        
        for(int i=0;i<n;i++)
        {
            int sum2=0;
            for(int j=i;j<n;j++)
            {
                
                
                    sum2 = sum2+nums[j];
                
                sum = max(sum,sum2);
            }
        }
        return sum;
    }
};
// --------------------------------------------------------------
// kadanes algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            if(sum>maxi)
            {
                maxi = sum;
            }
            if(sum<0)
            {sum =0;}
        }
        return maxi;
    }
};