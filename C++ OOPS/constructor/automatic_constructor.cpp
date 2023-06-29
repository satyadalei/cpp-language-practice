//example of automatic constructor
#include<iostream>
using namespace std;
class Number{
    private:
           int a;
    public:
          Number(){
            a = 0;
          }
          void Show(){
            cout << "A = " << a << endl;
          }
};
int main(){
    Number A,B,C;
    A.Show();
    B.Show();
    C.Show();
    return 0;
}