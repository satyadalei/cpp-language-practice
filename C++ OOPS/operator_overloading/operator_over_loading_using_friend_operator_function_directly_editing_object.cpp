#include <iostream>
using namespace std;

class Negate{
    private:
          int a;
    public:
         void Assign(int b){
            a = b;
         }   
         void Show(){
            cout<<" A=" << a << endl;
         }   
         friend Negate operator -(Negate &obj){ // passing direct object
            // if (obj.a < 0)
            // {
            //     obj.a = -obj.a;
            // }

            //just make negative
            obj.a = -obj.a;
         }
};
int main(){
    Negate obj1,obj2;
    obj1.Assign(-7);
    obj2.Assign(67);
    obj1.Show();
    obj2.Show();
    -obj1;
    -obj2;
    obj1.Show();
    obj2.Show();
    return 0;
}