#include<iostream>
using namespace std;
void pattern1(){
// ****
// ****
// ****
// ****
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// --------------------------------------------------------------
void pattern2()
{
    // *
    // **
    // ***
    // ****
    // *****
    for (int rows = 1; rows <= 5; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// --------------------------------------------------------------
void pattern3()
{
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int rows = 1; rows <= 5; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout<<cols;
        }
        cout<<endl;
    }
}
// --------------------------------------------------------------
void pattern4()
{
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int rows = 1; rows <= 5; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout<<rows;
        }
        cout<<endl;
    }
}
// --------------------------------------------------------------
void pattern5()
{
    // *****
    // ****
    // ***
    // **
    // *
    for (int rows = 5; rows >= 1; rows--)
    {
        for (int cols = 0; cols <rows; cols++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
// -----------------------------------------------------------
void pattern6()
{
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int rows = 0; rows <5; rows++)
    {
        for (int cols = 1; cols <=5-rows; cols++)
        {
            cout<<cols;
        }
        cout<<endl;
        
    }
}
// -------------------------------------------------------------
void pattern7()
{
//     *    
//    ***   
//   *****  
//  ******* 
// *********
    for (int rows = 0; rows <= 4; rows++)
    {
        for (int cols = 1; cols <=5-rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = 1; cols <=2*rows+1; cols++)
        {
            cout<<"*";
        }
        for (int cols = 1; cols <=5-rows-1; cols++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
// -----------------------------------------
void pattern8()
{
// *********
//  ******* 
//   *****  
//    ***   
//     *  
    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < 2*3 - (2*rows+1); cols++)
        {
            cout<<"*";
        }
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
// -------------------------------------------------------------------
void pattern9()
{
// *********
//  ******* 
//   *****  
//    ***   
//     *  
    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        for (int cols = 0; cols < 2*3 - (2*rows+1); cols++)
        {
            cout<<"*";
        }
        for (int cols = 0; cols < rows; cols++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
void pattern10(int n)
{
  
    for (int rows = 1; rows <= 2*n-1; rows++)
    {
        int stars = rows;
        if (rows>n)
        {
            stars = 2*n - rows;
        }
        
        for (int col = 0; col < stars; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}
int main()
{
    pattern10(5);
    
}