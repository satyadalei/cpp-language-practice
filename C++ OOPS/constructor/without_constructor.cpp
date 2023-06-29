// without constructor -- Assigning general value without automatic constructor;
#include <iostream>
using namespace std;

class Number{
    private:
          int a;
    public:
         void Assign(){
            a = 10;
         }      
         void Show(){
            cout<< a << endl;
         }
};

int main(){
    Number A;
    A.Assign();
    A.Show();
    return 0;
}