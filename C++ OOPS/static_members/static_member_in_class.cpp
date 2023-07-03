#include <iostream>
using namespace std;
class StaticDataMember{
        int num;
        static int a; // this variable is class property that will be shared among all objects.
        // object will not have these variable
    public:
          StaticDataMember(){
            num = ++a; // first increment in a value then assign to num variable.
          }
          void ShowNumber(){
            cout<<" Static member a = " << a << endl;
            cout << " Object's num = " << num << endl;
          }
};
// to be declared outside of class
int StaticDataMember::a; // static data member definition (default value = 0)
int main(){
    cout << "Size of class is = " << sizeof(StaticDataMember) << endl;
    StaticDataMember Obj1, Obj2, Obj3;
    Obj1.ShowNumber();
    Obj2.ShowNumber();
    Obj3.ShowNumber();
    StaticDataMember Obj4;
    Obj4.ShowNumber();
    return 0;
}