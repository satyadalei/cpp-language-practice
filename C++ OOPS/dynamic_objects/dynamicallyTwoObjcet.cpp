#include <iostream>
using namespace std;
class PTO
{
    char name[20];
    int id;
    public:
    void Get(char *a, int b){
      strcpy(name, a);
      id = a;
    }
    void Put()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
    }
}
int main(){
   PTO *pobj = new PTO[4];
   char n[20];
   int id;
   for(int i=0, i < 4 ; i++)
   {
    cout <<" Enter Name and Id : ";
    cin>> n >> id;
    pobj[i].Get(n,id);
   }
   cout << "Details \n";
   for (int i = 0; i < 4; i++)
   {
     pobj[i].Put();
   }
   
   delete pobj;
    return 0;
}