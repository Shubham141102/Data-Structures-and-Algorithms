class Solution{
    public:
    int count=1;
    //Complete this function
    void printNos(int N)
    {
        
        if(count>N)
            return;
        cout<<count<<" ";
        count++;
        printNos(N);
    }
};



