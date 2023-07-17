// virtual function
#include <iostream>
using namespace std;
class BaseClass{
    public:
          int base_var = 9;
          virtual void display(){
            cout<<"Base class var = " << base_var << endl;
          }
};
class DerivedClass : public BaseClass{
    public:
           int derived_var = 8;
           void display(){
             cout<<"derived class var = " << derived_var << endl;
           }
           void sayHello(){
             cout <<" Derived class pointer saying Hello" << endl;
           }
};
int main(){
    BaseClass * base_class_pointer; // base class pointer
    BaseClass obj_base, obj_base2; // base object
    DerivedClass obj_derived; // derived object
    base_class_pointer = &obj_derived; //base class pointer pointing to derived class
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived; // derived class pointer
    // base_class_pointer only works for base class properties that are being inherited;
    cout << "After adding virtual keyword " << endl;
    base_class_pointer->display(); 
    //base_class_pointer->sayHello(); // will give error you can not call derived class variable through base class pointer
     derived_class_pointer->display(); //will run function of derived class --> this pointer will also be able to run inherited function ;
     derived_class_pointer->sayHello();
    return 0;
}