#include<iostream>
using namespace std;

class ARS{
    public:
        // destructor --> it will not execute first though written first.
         ~ARS(){
            // this will execute only at the end objects all process.
            cout<<"Destructor invoked \n";
         }

         ARS(){
            cout<<"Constructor invoved \n";
         } 
};
class Hello{
    public:
         Hello(){
            cout << " This is a hello constructor" << endl;
         }
         ~Hello(){
            cout<< " hello destructor \n";
         }
};
void Wish(){
    cout << "Hey there! Good afternoon." << endl;
};
int main(){
    ARS A;
    Hello H;
    ARS B;
    Wish();
    return 0;
}