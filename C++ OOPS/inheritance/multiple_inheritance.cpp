#include <iostream>
using namespace std;

class Base1{
    protected:
             char name[20];
             int roll;
    public:
    void Accept(){
        cout<<"Enter name : " ;
        cin >> name ;
        cout << "Enter roll number : ";
        cin>> roll;
    }         
};
class Base2{
    
}
int main(){
    
    return 0;
}