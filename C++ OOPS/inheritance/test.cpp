#include <iostream>
using namespace std;
class base1{
    int a = 6;
    public:
         void SayHello1(){
            cout<< "Hello base 1 " << endl;
         }
         void Show1(){
            cout << "The number is : " << a << endl;
         }
};
class base2{
    int b = 7 ;
    public :
         void SayHello2(){
            cout << " Hello base 2 " << endl;
         }
         void Show2(){
            cout << "The number is : " << b << endl;
         }
};
class base3{
    int num = 7;
    public:
          void AssignNum(int a){
            num = a;
          }
          void ShowNum(){
            cout << "The num is " << num << endl; 
          }
};
class derived : public base2, public base1, public base3{
 
};
int main(){
    derived obj1, obj2;
    cout<< "obj 1" << endl;
    obj1.ShowNum();
    cout<< "obj 2" << endl;
    obj2.ShowNum();

    cout << "Assigning different num to obj1 : 34" << endl;
    obj1.AssignNum(34);
    obj1.ShowNum();

    cout << "Assigning different num to obj2 : 67" << endl;
    obj2.AssignNum(76);
    obj2.ShowNum();

    return 0;
}