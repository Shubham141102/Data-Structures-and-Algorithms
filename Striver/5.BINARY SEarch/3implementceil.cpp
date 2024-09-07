int upperBound(vector<int> &arr, int x, int n){
	long long low=0;
        
        long long  high = n-1;
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(arr[mid] == x)
            {
                low = mid+1;
            }
            
            else if(arr[mid]>x)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }
        }
        if(x<arr[0])
        {
            return 0;
        }
        if(x>arr[n-1])
        return n;
        return low;	
}