#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[] = "satya";
    char str2[] = "buny";
    char str3[20];
    
    strcpy(str3,str2);
    cout<<endl<<"str1 : "<<str1<<endl<<"str2 : "<<str2<<endl<<"str3 : "<<str3;
    return 0;
}