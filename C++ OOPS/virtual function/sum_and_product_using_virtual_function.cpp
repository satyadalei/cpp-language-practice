#include <iostream>
using namespace std;
class Sum{
    private:
          float a,b;
    public:
          // adding virtual means saying pointer that if this class pointer is pointing to its derived class then run the correspoinding function of derrived class not here in base class
         virtual void ReadNum(){
            cout << "Enter two numbers for summation : " ;
            cin >> a >> b;
          }
          virtual void Result(){
            cout << "sum result is = " << a+b << endl;
          }
};
class Product : public Sum{
    private:
          float c,d;
    public:
          void ReadNum(){
            cout << "Enter two numbers for product : " ;
            cin >> c >> d;
          }
          void Result(){
            cout << "Product result is = " << c*d << endl;
          }
};
int main(){
    Sum *sum_class_pointer,sum_obj;
    Product product_obj;
    sum_class_pointer = &sum_obj;
    sum_class_pointer->ReadNum();
    sum_class_pointer->Result();

    sum_class_pointer = &product_obj; //now the same base class pointer pointing to derrived class pointer
    sum_class_pointer->ReadNum();
    sum_class_pointer->Result();
    return 0;
}