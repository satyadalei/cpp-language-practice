//printing any input using class template
#include <iostream>
using namespace std;

template <class T>
class DisplayInput{
    private:
            T a;
    public: 
          void Assign(T input){
             a = input;
          }   
          void Show(){
            cout << "The value is = " << a << endl;
          }     
};
int main(){
    DisplayInput<int> intObj;
    DisplayInput<float> fltObj;
    DisplayInput<char> charObj;

    cout << " Integer object" << endl;
    intObj.Assign(4);
    intObj.Show();

    cout << " float object" << endl;
    fltObj.Assign(4.890);
    fltObj.Show();

    cout << " char object" << endl;
    charObj.Assign('a');
    charObj.Show();
    cout << "Size of intObj = " << sizeof(intObj) << endl;
    cout << "Size of fltObj = " << sizeof(fltObj) << endl;
    cout << "Size of charObj = " << sizeof(charObj) << endl;
    return 0;
}