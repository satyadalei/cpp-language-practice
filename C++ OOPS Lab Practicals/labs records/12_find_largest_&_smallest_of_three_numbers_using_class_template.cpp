//Write a C++ program to find largest and smallest of three numbers using class template
#include <iostream>
using namespace std;

template<class T>
// class finds largest and smallest number
class FindLargAndSmall{
    T num1,num2,num3;
    public:
          // Assign three numbers
          void Assign(T a, T b, T c){
             num1 = a;
             num2 = b;
             num3 = c;
          }
          void ShowNumbers(){
            cout << "The numbers are " << num1 << ","<< num2 << ","<< num3 << endl;
          }
          // Fnding the largest number
          void FindLargest(){
            T largest;
            largest = num1 ;
            if (largest < num2)
            {
                largest = num2;
                if (largest < num3 )
                {
                    largest = num3 ;
                }
                
            }else{
                // check with third num
                if (largest < num3)
                {
                    largest = num3;
                }
            }
            cout << "The largest number is " << largest << endl;
          }
          // finding smallest number
          void FindSmallest(){
            T smallest;
            smallest = num1 ;
            if (smallest > num2)
            {
               smallest = num2;
               if (smallest > num3){
                  smallest = num3;
               }
            }else{
                if (smallest > num3)
                {
                    smallest = num3;
                }
            }
            cout << "The smallest number is " << smallest << endl;
          }
};
int main(){
    FindLargAndSmall<int> intObj;
    FindLargAndSmall<float> fltObj;
    // obj.Assign(4,6,8);
    // obj.FindLargest();
    // obj.FindSmallest();

     intObj.Assign(4,8,6);
     intObj.ShowNumbers();
     intObj.FindLargest();
     intObj.FindSmallest();

     fltObj.Assign(6.89,2.67,2.66);
     fltObj.ShowNumbers();
     fltObj.FindLargest();
     fltObj.FindSmallest();
    return 0;
}