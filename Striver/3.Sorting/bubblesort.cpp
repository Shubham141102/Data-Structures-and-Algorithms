#include <iostream>
using namespace std;
int main()
{
    int array[6] = {5, 7, 1, 9, 6, 3};
    cout<<"before sorting=>";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
    cout<<endl;
    for (int i = 6; i >0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        
    }
    cout<<"bubble sort:";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
    return 0;
}
