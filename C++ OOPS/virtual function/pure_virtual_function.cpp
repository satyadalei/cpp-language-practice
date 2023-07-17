#include <iostream>
using namespace std;
class Number{
    public:
         virtual void ReadNum() = 0 ;
         virtual void Result() = 0 ;
};
class Sum : public Number{
    int a,b;
   public:
         void ReadNum(){
            cout<<" Enter two number for summation " ;
            cin >> a >> b;
         }
         void Result(){
            cout << "The result of sum of "<< a << " and " << b << " = " << a + b << endl ;
         }
};
class Product : public Number{
    int a,b;
    public:
          void ReadNum(){
            cout<<" Enter two number for Product " ;
            cin >> a >> b;
          }
          void Result(){
            cout << "The result of product of "<< a << " and " << b << " = " << a * b << endl ;
          }
};
int main(){
    Sum sumObj;
    Product productObj;
    sumObj.ReadNum();
    sumObj.Result();

    productObj.ReadNum();
    productObj.Result();
    return 0;
}