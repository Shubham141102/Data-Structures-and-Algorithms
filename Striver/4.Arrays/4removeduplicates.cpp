// with the use of the second array
int removeDuplicates(vector<int> &arr, int n) {
	vector<int> ans;
	int i=1;
	ans.push_back(arr[0]);
	while(i<n)
	{
		if(arr[i-1]!=arr[i])
		{
			ans.push_back(arr[i-1]);
			i++;
		}
		else
		{
			i++;
		}
	}
	int m = ans.size();
	
	return m;
}


// --------------------------------------------------------------
// without the use of the second array
// Two pointer appraoch
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};