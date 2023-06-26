#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Satyanarayan";
    string& s1 = name;  
    cout<<name<<endl;
    cout<<s1<<endl;
    return 0;
}
