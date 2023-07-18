#include <iostream>
using namespace std;

template<class T>
void PrintAnyInput(T a){
  cout << "Enterd input is = " << a << " & size = " << sizeof(a) << endl ;
}
int main(){
    PrintAnyInput(2);
    PrintAnyInput(2.8976);
    PrintAnyInput('A');
    PrintAnyInput('c');
    PrintAnyInput("Hello I am Satya");
    return 0;
}