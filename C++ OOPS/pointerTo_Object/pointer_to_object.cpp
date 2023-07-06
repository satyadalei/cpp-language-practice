#include <iostream>
#include<string.h>
using namespace std;
class Pto{
    char name[20];
    int id ;
    public:
        void Get(char namePointer[20], int a){
           strcpy(name, namePointer);
           id = a;
        };
        void Show(){
            cout<< " Name " << name << endl; 
            cout<< " Id " << id << endl; 
        }
};

int main(){
    Pto pointerObject1;
    pointerObject1.Get("Satya",7);
    Pto *pointingToObject;
    pointingToObject = &pointerObject1;
    // pointingToObject->Get("Satya",7);
    pointingToObject->Show();
    return 0;
}