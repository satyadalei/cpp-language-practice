#include <iostream>
using namespace std;

class Number{
    private:   
            int a;
    public:
        // default constructor
         Number(){
            a = 0;
         }; 
        //customised constructor
        Number(int b){
           a = b;
        }
        void Show(){
            cout<<"A = " << a << endl;
        }    
};
int main(){
    Number A; // default constructor will be called
    Number B(4); // implicit call
    Number C = Number(5); // explicit call
    Number D = 6; // explicit call
    
    A.Show();
    B.Show();
    C.Show();
    D.Show();
    return 0;
}