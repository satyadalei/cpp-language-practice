#include <iostream>
#include<cstdlib>
using namespace std;


int randomNumGenerator();
int main(){
    int num ;
    num = randomNumGenerator();
    cout<<"The random number is : "<< num << endl;
    return 0;
}

int randomNumGenerator(){
    int randomNum = rand();
    return randomNum;
}
