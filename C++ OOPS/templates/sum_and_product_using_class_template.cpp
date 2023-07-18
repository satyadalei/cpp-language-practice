// sum and product of two numbers using class template
#include <iostream>
using namespace std;

template<class T>
class SumAndProduct{
    T a,b;
    public:
            void Assign(T c, T d){
                a = c;
                b = d;
            }
            void Show(){
                cout << "a = " << a << " & b = " << b << endl;
            }
            T Sum(){
                return a + b;
            }
            T Product(){
                return a*b;
            }
};
int main(){
    SumAndProduct<int> intObj;
    SumAndProduct<float> fltObj;
    
    int intSum,intProduct;
    float floatSum,floatProduct;
    cout<< "interger " << endl;
    intObj.Assign(4,5);
    intObj.Show();
    intProduct = intObj.Product();
    cout << "Product = " << intProduct << endl; 
    intSum = intObj.Sum();
    cout << "sum = " << intSum << endl; 

    cout<< "Float " << endl;
    fltObj.Assign(2.3,4.5);
    fltObj.Show();
     floatProduct = fltObj.Product();
    cout << "Product = " << floatProduct << endl; 
     floatSum = fltObj.Sum();
    cout << "sum = " << floatSum << endl; 

    cout<< "Float " << endl;
    return 0;
}