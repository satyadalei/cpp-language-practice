#include <iostream>
using namespace std;

class Static_Member_Function{
        int num;
        static int count; //static data member declaration
    public:
       void Assign(){
        num = ++ count;
       }
       void Display(){
        cout<<num << " Object is created \n";
       }
       static void Total(){
         cout<<"Total objects : " << count << endl;
       }
};
int Static_Member_Function::count; //static data member definition(default value = 0)
int main(){
    Static_Member_Function obj1,obj2;
    obj1.Assign();
    obj2.Assign();
    obj1.Display();
    obj2.Display();
    Static_Member_Function::Total(); // static function calling
    Static_Member_Function obj3;
    obj3.Assign();
    obj3.Display();
    Static_Member_Function::Total(); // static function calling
    return 0;
}