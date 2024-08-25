class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long r;
        long long sum = 0;
        long long temp =x;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum*10 +r;
            temp=temp/10;
            
        }
        
        
        return (sum == x);
    }
};