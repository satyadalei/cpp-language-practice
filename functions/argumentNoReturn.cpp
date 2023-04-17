#include <iostream>
using namespace std;

void printSum(int ,int ,int ,int );
int main(){
    int num1, num2, num3,num4;
    cout<<"Enter 4 numbers " << endl;
    cin>> num1 >> num2 >> num3 >>num4 ;
    printSum(num1,num2,num3,num4);
    
    return 0;
}
void printSum(int a,int b,int c,int d){
  int sum = a+b+c+d;
  cout<<"The sum of numbers is : " << sum;
}