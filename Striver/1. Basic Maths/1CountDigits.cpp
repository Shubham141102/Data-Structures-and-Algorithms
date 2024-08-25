class Solution{
public:
    int evenlyDivides(int N){
        int rem;
        int n=N;
        int count=0;
        while(N>0)
        {
            rem = N%10;
            if(rem>0 && n%rem==0)
                count++;
            N=N/10;
        }
        return count;
    }
};