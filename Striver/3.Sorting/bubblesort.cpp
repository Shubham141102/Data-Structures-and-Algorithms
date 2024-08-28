#include <iostream>
using namespace std;
int main()
{
    int array[6] = {1,2,3,4,5,6};
    cout<<"before sorting=>";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
    cout<<endl;
    for (int i = 6; i >0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                didswap=1;
            }
        }
        if(didswap == 0)
        break;
        cout<<"runs"; 
    }
    cout<<"bubble sort:";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
    return 0;
}
