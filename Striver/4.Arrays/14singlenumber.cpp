class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int num;
        for(int i=0;i<n;i++)
        {
             num = nums[i];
            int count =0;
           
            for(int j=0;j<n;j++)
            {
                if(num == nums[j])
                {
                    count++;
                }
            }
            if(count == 1)
            {
                return num;
                
            }
        }
        return -1;
    }
};