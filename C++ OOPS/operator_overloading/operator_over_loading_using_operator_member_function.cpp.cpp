#include <iostream>
using namespace std;
class IncDec{
         int a;
    public:
        void Assign(int b){
            a = b;
        }
        void Show(){
            cout<< " A = " << a << endl;
        }
        void operator ++(){ // pre increment
           ++a; // first increase the a value then assign to a;
           // if a = 6 initially then ++a = 7    
        }
        void operator ++(int){ //post increment
           a++;
        }
        void operator --(){ //pre decrement
           --a;
        }
        void operator --(int){ // post decrement
           a--;
        }
};
int main(){
    // int a = 7;
    // cout<<" a = " << a  << endl;
    //a ++; 
    // increment operator used for integer type here only
    // but I can not use this operator other than integer. for example if I want to use ++ operator on object. I have to mannualy tell compiler to do what when ++ operator used in object
    //cout<< " After increment a = " << a << endl;
     IncDec obj1;
     obj1.Assign(9);
     obj1.Show();
     obj1 ++;
     obj1.Show();
     obj1 --;
     obj1.Show();
     --obj1;
     obj1.Show();
    return 0;
}