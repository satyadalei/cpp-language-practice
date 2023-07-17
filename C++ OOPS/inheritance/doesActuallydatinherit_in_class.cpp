#include <iostream>
using namespace std;
class base1{
    private:
         int a;
    public:
          void Get_int_A(int b){
             a = b;
          }
};
class base2 : public base1{
    private:
        int b;
    public:
          void Get_int_B(int c){
             b = c;
          }   
};
int main(){
    base2 obj_base2;
    base1 obj_base1;
    int i = 7;
    char c = 'g';
    float f ;
    // cout << "size of int = " << sizeof(i) << endl;
    // cout << "size of char = " << sizeof(c) << endl;
    // cout << "size of float = " << sizeof(f) << endl;
    cout << "size of base2 " << sizeof(obj_base2) << endl;
    cout << "size of base1 " << sizeof(obj_base1) << endl;
    return 0;
}