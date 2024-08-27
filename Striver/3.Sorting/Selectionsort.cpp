#include <iostream>
using namespace std;
int main()
{

    int mini;
    int array[6] = {5, 7, 1, 9, 6, 3};
    for (int i = 0; i <= 4; i++)
    {
        mini = i;
        for (int j = i; j <= 5; j++)
        {
            if (array[j] < array[mini])
            {
                mini = j;
            }
        }
        int temp = array[mini];
        array[mini] = array[i];
        array[i] = temp;
        cout << array[i]<<endl;;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
}