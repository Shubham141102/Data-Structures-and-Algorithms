class Solution
{
public:
    int count = 1;
    // Complete this function
    void printNos(int N)
    {

        if (count > N)
            return;
        cout << count << " ";
        count++;
        printNos(N);
    }
};

// ------------------------------------------------------------------------------
// without using the counter variable

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printNos(int N)
    {

        if (N < 1)
            return;

        printNos(N - 1);
        cout << N << " ";
    }
};

int main()
{
    int T;

    cin >> T;

    while (T--)
    {
        int N;

        cin >> N;
        Solution ob;

        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}
