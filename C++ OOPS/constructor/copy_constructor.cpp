#include <iostream>
using namespace std;
class ARS{
    private:
         int a;
    public:
         ARS(){
            a = 7;
         }     
         ARS(int b){
            a = b;
         }
         ARS(ARS &c){ // copy constructor
            a = c.a;
         }
        void Show(){
            cout << "A= " << a << endl;
        }
};
int main(){
    ARS A;
    ARS B(80);
    ARS C(B);
    // ARS D = C ;

    A.Show();
    B.Show();
    C.Show();
    return 0;
}