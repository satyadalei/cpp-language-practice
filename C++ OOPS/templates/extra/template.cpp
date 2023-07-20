#include <iostream>
using namespace std;
template<class T>
void Show(T a){
   //the *p is for string & a is for actual a value
   cout << a << endl;
}
int main(){
    cout<< " Integer : " << endl;
    Show( 5);
    cout<< " Flaot : " << endl;
    Show( 5.6);
    cout<< " Char : " << endl;
    Show('a');
    cout<< " String : " << endl;
    Show("askme something");
    return 0;
}