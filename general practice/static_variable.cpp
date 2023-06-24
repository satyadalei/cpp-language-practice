#include <iostream>
using namespace std;

int main(){
    int i,p;
    for ( i = 1; i < 5; i++)
    {
        static int c = 3; // this line of code executes only once
        int p = c;
        cout<< p ;
    }
    //first - 4 - c->4    p - 5
    //second -5  c->5   p - 7
    //third - 6 c->6   p-9
    //fourth - 7 c ->7 p-11
    
    return 0;
}