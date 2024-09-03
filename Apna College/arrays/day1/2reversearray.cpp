#include <iostream>;
using namespace std;

void reverseArrayExtraArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int originalArr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    reverseArrayExtraArray(originalArr, size);
}
