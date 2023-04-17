#include <iostream>
using namespace std;
   class myClass
   {
     public:
    /**/
    // method sysntax inside a class
    // function_return_type function_name(parameter){
    //     // /-- All function logics
    // }
    void myMethod(){
        cout<<"Hello Good Evening! it's great to see You.";
    }
     
   };
   
int main(){
    myClass myObj;
    myObj.myMethod();
    return 0;
}