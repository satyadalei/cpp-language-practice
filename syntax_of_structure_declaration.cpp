#include <iostream>
#include<string.h>
using namespace std;

/*Example of a structure using both variables and functions*/
struct student
{
   char n[20];
   int roll;
   char branch[20];
   int marks;

   void assign(char p[],int q, char r[],int s){
        strcpy(n,p);
        roll = q;
        strcpy(branch,r);
        marks = s;
   }
};

struct student2
{
    int r;
    char n[10];
    int mark;
    
    void Assign(int a,char *p,int b)
    {
        r = a;
        strcpy(n,p);
        mark = b;
    }
    void show()
    {
        cout<<n<<""<<r<<""<<mark<<endl;
    }
}s;
