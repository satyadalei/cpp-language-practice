//function template overloading
#include <iostream>
using namespace std;
// passing only one argument
template <class T>
void Print(T input){
    cout << input << endl;
}

// passing multiple arguments in the same function -> overriding the previous function
template<class T>
void Print(T a, int n){
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
    }
}
int main(){
    Print('A');
    Print("Satya",7);
    Print(67,2);
    Print(7.98);
    Print('a',3);
    return 0;
}