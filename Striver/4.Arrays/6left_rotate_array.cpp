#include<iostream>
using namespace std;
void rotateArray(int* arr)
{
    k=k%arr.size();
        int n=nums.size();
        int temp[n];
        for(int i=0;i<k;i++)
        {
            temp[i] = nums[i];
        }
        // shifting
        for(int i=k;i<nums.size()-1;i++)
        {
            nums[i-k]=nums[i];
        }
        int j=0;
        for(int i=n-k;i<nums.size()-1;i++)
        {
            nums[i]=temp[j];
            j++;
        }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    rotateArray(arr);
}