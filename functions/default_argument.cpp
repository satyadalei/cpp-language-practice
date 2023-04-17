#include <iostream>
using namespace std;

int sum(int a, int b, int c=5 ){
  int sumOfNum = a + b +c;
  return sumOfNum;
}
int main(){
   // int num1,num2,num3;
    int summation = sum(6,8);
    cout<< " The summation is : " <<summation;
    return 0;
}