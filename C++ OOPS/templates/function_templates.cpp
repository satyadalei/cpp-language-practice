#include <iostream>
using namespace std;
template <class T>
void Show(T a){
    cout << "Input value is : " << a << endl;
}
int main(){
    Show(5);
    Show("Hello");
    Show(7.8);
    Show('A');
    return 0;
}