#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private :
        char name[20],branch[20],sec;
        int roll;
    public :
        void Assign(char n[],char b[],char c,int d){
          strcpy(name,n);
          strcpy(branch,b);
          sec = c ;
          roll = d;
        };
};

int main()
{
    cout<<"Hello World!"<<endl;
    return 0;
}