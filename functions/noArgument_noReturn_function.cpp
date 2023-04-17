//example of void return and void input
#include <iostream>
using namespace std;
void greet();
int main(){
    greet();
    return 0;
}
void greet(){
    cout<<"Hello Good afternoon!"<<endl;
}