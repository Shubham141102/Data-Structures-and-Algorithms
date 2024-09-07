pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	long long low=0;
        
        long long  high = n-1;
		pair<int,int>ans;
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(a[mid] == x)
            {
                ans.first =x;
				ans.second = x;
				return ans;
            }
            
            else if(a[mid]>x)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }
        }
        if(x<a[0])
        {
            ans.first = -1;
			ans.second = a[0];
			return ans;
        }
		if(x>a[n-1])
        {
            ans.first = a[n-1];
			ans.second =-1 ;
			return ans;
        }
        
        ans.first = a[high];
		ans.second = a[low];
        return ans;	
}