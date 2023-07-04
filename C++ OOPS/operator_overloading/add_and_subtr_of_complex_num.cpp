#include <iostream>
using namespace std;
class Complex{
    int real, img;
    public:
        void Assign(int a,int b){
           real = a;
           img = b;
        }
        void Show(){
          cout<< real <<" + " << img << "i" << endl;
        }
        Complex friend operator +(Complex com1,Complex com2){
            Complex Demo;
            Demo.real = com1.real + com2.real;
            Demo.img = com1.img + com2.img ;

            return Demo;
        }
         Complex friend operator -(Complex com1,Complex com2){
            Complex Demo;
            Demo.real = com1.real - com2.real;
            Demo.img = com1.img - com2.img ;

            return Demo;
        }

};

int main(){
    Complex A,B,C;
    A.Assign(3,7);
    B.Assign(6,9);
    A.Show();
    B.Show();
    C = A + B;
    cout<< " Summation " << endl;
    C.Show();
    cout<< " Difference " << endl;
    C = B - A ;
    C.Show();
    return 0;
}