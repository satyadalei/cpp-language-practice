#include<iostream>
using namespace std; // cout // cin //

int main()
{
    int n = -2 ;
    // if (n>3)
    // {
    //     cout << "n is greater than three";
    // }
    // else{
    //     cout << "n is less than 3";
    // }
    //using ternary operator 
    //expression ? statement1 : statement2
     n>3 ? cout << "n is greater than three" : n>0 ? cout << "n is positive" : cout << "n is negative" ;
    int a = 24,b = 24, c =24 ;
    int largest ;
    cout <<" a = 4, b = 7, c = 9 "<< endl;
    a>b && a>c ? cout << "a is largest" : b > c ? cout << "b is largest" : cout << "c is largest" ;
    return 0;
}