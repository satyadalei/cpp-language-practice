// pointers to derived class : How can a pointer of a base class can point to its derived class
#include <iostream>
using namespace std;
//base class
class BaseClass{
    public:
          int base_var = 9;
          void disply(){
            cout<<"Base class var = " << base_var << endl;
          }
};
//derived class
class DerivedClass : public BaseClass{
    public:
           int derived_var = 8;
           void display(){
            cout<<"derived class var = " << derived_var << endl;
           }
};
int main(){
    BaseClass * base_class_pointer; // base class pointer
    BaseClass obj_base, obj_base2; // base object
    DerivedClass obj_derived; // derived object
    base_class_pointer = &obj_derived; //base class pointer pointing to derived class
    base_class_pointer->base_var = 87; // it directly manipulates the class value not in the object
    BaseClass obj_base3;
    cout<<"base class 3 obj" << endl;
    obj_base3.disply();
    base_class_pointer->disply();
    base_class_pointer->base_var = 56;
    BaseClass obj_base4;
    cout<<"base class 4 obj" << endl;
    cout<<"base class pinter" << endl;
    base_class_pointer->disply();
    obj_base2.disply();
    return 0;
}