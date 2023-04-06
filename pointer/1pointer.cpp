#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int *ptr = &a ;
    cout<<ptr<< endl;
    cout<< &a << endl;
    ptr = new int ;
    cout << "After new -- adsress is:" << ptr << endl;
    cout << "After new -- value at that adsress is:" << *ptr << endl; //expectation - garbage value

    //what if i chnage new type to float

    /* int b = 7;
    int *ptr2 = &b;
    cout<< "Initial address is : " << ptr2 << endl;
    cout << "After new -- adsress is:" << ptr2 << endl;
    cout << "After new -- value at that adsress is:" << *ptr2 << endl;
    //ptr2 = new float; //--Will give error because ptr2 is integer storing address
    */

    //sequential memory block using new operator
    int *dyPtr = new int     [3]; // it will reserve 3 memory blocks but returns base address
    dyPtr[0] = 23 ; // value directly assigned
    dyPtr[1] = 33 ;
    dyPtr[2] = 43;
    cout << "Base address is :" <<dyPtr << endl; // expect --> dyptr[0]
    cout << "Value at base address is :" <<*dyPtr << endl; // expect --> dyptr[0]
    cout << "0th Address is  :" <<dyPtr[0] << endl; // same as above

    cout << "Value at 0th Address is  :" <<dyPtr[0] << endl;
    cout << "Value at 1th Address is  :" <<dyPtr[1] << endl;
    cout << "Value at 2th Address is  :" <<dyPtr[2] << endl;

    cout << "0th Address is  :" << &dyPtr[0] << endl; // contigious address
    cout << "1th Address is  :" << &dyPtr[1] << endl;  // contigious address
    cout << "2th Address is  :" << &dyPtr[2] << endl;  // contigious address


    return 0;
}