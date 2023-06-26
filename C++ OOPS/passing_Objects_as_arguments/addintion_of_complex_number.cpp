// this program adds two complex number by passing objects as arguements in function
#include<iostream>
using namespace std;
class ComplexNumber{
    private:
        int real,img;
    public:
         // way -1 of assigning numbers
        //  void GetNumbers(){
        //     cout<<"Enter real part of complex number : ";
        //     cin>>real;
        //     cout<<endl<<"Enter imaginary part of complex number : ";
        //     cin>>img;
        //  } 
         // way - 2 of assigning numbers
         void AssignNum(int a, int b){
           real = a;
           img = b;
         } 
         void ShowComplexNum(){
            cout<<real<<" + "<< img << "i"  <<endl;
         }
         void AddComplexNum(ComplexNumber A, ComplexNumber B){
            real = A.real + B.real;
            img = A.img + B.img;
         }    
};
int main(){
    ComplexNumber complexNum1,complexNum2, complexNum3;
    complexNum1.AssignNum(3,4);
    complexNum1.ShowComplexNum();
    complexNum2.AssignNum(7,5);
    complexNum2.ShowComplexNum();
    complexNum3.AddComplexNum(complexNum1,complexNum2);
    complexNum3.ShowComplexNum();
    return 0;
}