//dynamic objcet
#include<iostream>
#include <string.h>
using namespace std;

class PTO
{
    char name[20];
    int id;
    public:
         void Get(char a[], int b)
         {
            strcpy(name, a);
            id = b;
         }
         void Put(){
            cout<<"Name : " << name << endl;
            cout << "Id : " << id << endl;
         }
};
int main(){
 PTO *pobj = new PTO;
 pobj->Get("Satya", 1437);
 pobj->Put();

 delete pobj;
 return 0;
}