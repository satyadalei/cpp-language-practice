// summation and showing array of integers or float numbers using class template 
#include <iostream>
using namespace std;
template<class T> // first you need to declare T as template exactly before the T Sum() function
//here we are returning the same data type we are getting initially
T Sum(T *nums, int n){ // make sum of any array of numbers that comes in
    T s = 0 ; // asume initial value is 0 to a T type datatype
    for (int i = 0; i < n; i++)
    {
       s =  s + nums[i];
    }
    return s;
}
template<class T> //
void Show(T *nums, int n){
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "," ;
    }
    cout << endl;
}
int main(){
    int numbers[4] = {1,2,3,4}, intSumRes;
    float fNumbers[5] = {6.8,9.87,1.34,2.0034,1.890}, floatSumRes;
    intSumRes = Sum(numbers,4);
    floatSumRes = Sum(fNumbers,5);

    cout << "The integer numbers are : ";
    Show(numbers,4);
    cout << "The sum = " << intSumRes <<endl;
    
    cout << "The float numbers are : ";
    Show(fNumbers,5);
    cout << "The sum = " << floatSumRes;
    return 0;
}