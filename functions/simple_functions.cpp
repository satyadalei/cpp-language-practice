#include<iostream>
using namespace std;

int sum(int , int );
void wish();
int main()
{
    int num1, num2, sumOfNums;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    sumOfNums =  sum(num1,num2);
    cout<<"The sum of two number is :" << sumOfNums <<endl;
    wish();
    return 0;
}

int sum(int a, int b){ 
  int c = a+b;
  return c;
}
void wish(){
    cout<<"Hello God Morning!";
}