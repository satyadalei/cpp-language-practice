#include <iostream>
using namespace std;
class Number{
    private:
          int a;
    public:
          Number(int);
          void Show(){
            cout<<"a = " << a ;
          }      
};
Number::Number(int b){
    a = b;
}
int main(){
    // Number num(7); // implicit call
     Number num = Number(8); // explicit call
     
    num.Show();
    return 0;
}