class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        long long low=0;
        
        long long  high = n-1;
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(v[mid] == x)
            {
                return mid;
            }
            
            else if(v[mid]>x)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }
        }
        if(x<v[0])
        {
            return -1;
        }
        if(x>v[n-1])
        return n-1;
        return high;
        
    }
};