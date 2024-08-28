#include <iostream>
using namespace std;
int main()
{

    int n=6;
    int array[6] = {5, 7, 1, 9, 6, 3};
    for (int i = 0; i <=n-1; i++)
    {
        int j=i;
        while(j>0 && array[j-1]>array[j])
        {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
        for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
    cout<<endl;
        
    }

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
}