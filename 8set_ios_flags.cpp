#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n = 15.76833123;
    cout <<" n value is :";
    cout << n << endl;
    // set precision -- total no of digits to be displayed starting form left most number
    cout<< "4:" << setprecision(4)<< n << endl ;
    cout<< "5:" << setprecision(5)<< n << endl ;
    cout<< "1:" << setprecision(1)<< n << endl ;
    cout<< "7:" << setprecision(7)<< n << endl ;
    cout<< "11:" << setprecision(11)<< n << endl ;
    cout<< "15:" << setprecision(15)<< n << endl ;

    cout<< endl ;
    cout<< endl ;
    // fixes the no of digits there will be just after the decimal point
    cout<< "20 : " << fixed << setprecision(20)<< n << endl ;
    cout<< "10 : " << fixed << setprecision(10)<< n << endl ;
    cout<< "9 : " << fixed << setprecision(9)<< n << endl ;
    cout<< "8 : " << fixed << setprecision(8)<< n << endl ;
    cout<< "7 : " << fixed << setprecision(7)<< n << endl ;
    cout<< "6 : " << fixed << setprecision(6)<< n << endl ;
    cout<< "5 : " << fixed << setprecision(5)<< n << endl ;
    cout<< "4 : " << fixed << setprecision(4)<< n << endl ;
    cout<< "3 : " << fixed << setprecision(3)<< n << endl ;
    cout<< "2 : " << fixed << setprecision(2)<< n << endl ;
    cout<< "1 : " << fixed << setprecision(1)<< n << endl ;
    
    return 0;
}