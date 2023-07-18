#include <iostream>
using namespace std;

class Base{
    // private:
    protected:
            int a = 9;
    public:
            void Assign(int b){
               a = b;
            }  
            void read(){
               cout << " Base 1 class " << a << endl; 
            }      
};
class Derived : public Base{
     int d = 90;
     public:
            void sayHello(){
                cout << "Say hello ! I am Derived class" ;
            }
            void assignAgain(){
                a = 156;
            }
};
int main(){
    Derived obj;
    obj.assignAgain();
    obj.read();
    return 0;
}