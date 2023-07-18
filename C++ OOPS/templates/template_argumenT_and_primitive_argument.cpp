// passing template argument one time and one another time passing primitive argument
// template argument - We do not know what argument int or char float anything could be.
// primitive argument - specifying exactly what data type is going to passed as input
#include <iostream>
using namespace std;
// passing only one argument
template <class T>
void Print(T input){
    cout << input << endl;
}

// passing two arguments in the same function -> overriding the previous function
// template<class T>
// void Print(T a, int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << a << endl;
//     }
// }

void Print(int a){
    cout << "Hello I am Satya -> primitive " << endl;
    for (int i = 1; i <= a; i++)
    {
        cout << i<<" " ;
    }
    cout<< endl;
}
int main(){
    // Print('A');
    // Print("Satya",7);
    // Print(67,2);
    // Print(7.98);
    // Print('a',3);
    Print(8);
    return 0;
}