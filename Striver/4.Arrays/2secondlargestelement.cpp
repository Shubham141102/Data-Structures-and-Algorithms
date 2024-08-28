// // By sorting method
// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int print2largest(vector<int> &arr) {
//         int secondmax;
//         sort(arr.begin(),arr.end());
//         int n = arr.size()-1;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(arr[i]!=arr[n])
//             {
//                 secondmax = arr[i];
//                 break;
//             }
//         }
//         if(secondmax==arr[n] || secondmax==0){
//             return -1;
//         }
//         return secondmax;
//     }
// };

// achaa solution hai
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int maxi= 0;
        int n = arr.size()-1;
        for(int i=0;i<=arr.size()-1;i++)
        {
            if(arr[i]>maxi)
            {
                maxi = arr[i];
            }
        }
        int second = 0;
        for(int i=0;i<=arr.size()-1;i++)
        {
            if(arr[i]<maxi && arr[i]>second )
            {
                second = arr[i];
            }
        }
        if(second == 0 || second == maxi)
            return -1;
            
            
        return second;
    }
};