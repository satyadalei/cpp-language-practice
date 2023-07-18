// Write a C++ program to find largest and smallest of ‘n’ numbers using function template
#include <iostream>
using namespace std;
template<class T>
void findLargest(T *nums,int n){
   T largest = nums[0]; // taking first element as largest
   for (int i = 0; i < n; i++)
   {
     if (largest < nums[i])
     {
        largest = nums[i];
     }
   }
   cout << "The largest num is " << largest << endl;
}
template<class T>
void findSmallest(T *nums,int n){
   T smallest = nums[0]; // taking first element as smallest
   for (int i = 0; i < n; i++)
   {
     if (smallest > nums[i])
     {
        smallest = nums[i];
     }
   }
   cout << "The smallest num is " << smallest << endl;
}
template<class T>
void showNums(T *nums, int n){
    cout << "The numbers are : " ;
    for (int i = 0; i < n; i++)
    {
       cout <<  nums[i] << "  "  ;
    }
    cout << endl;
}
int main(){
    int n,whatNum;
    cout<< "Enter how many numbers you want to enter " << endl;
    cin >> n;
    cout << "Enter 1 to put integer or 0 to put float numbers" << endl;
    cin >> whatNum;
    int *arrInt = new int[n];
    float *arrFlt = new float[n];

    if (whatNum == 1)
    {
        cout << "Enter " << n << " integers : " ; 
        for (int i = 0; i < n; i++)
        {
            cin >> arrInt[i] ;
        }
        showNums(arrInt,n);
        findLargest(arrInt,n);
        findSmallest(arrInt,n);
    }else{
        cout << "Enter " << n << " float numbers : " ; 
        for (int i = 0; i < n; i++)
        {
            cin >> arrFlt[i] ;
        };
        showNums(arrFlt,n);
        findLargest(arrFlt,n);
        findSmallest(arrFlt,n);
    }
    

    //delete arrays
    delete arrFlt;
    delete arrInt;
    return 0;
}