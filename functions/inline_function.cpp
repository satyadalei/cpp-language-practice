#include <iostream>
using namespace std;

 inline int findLargest(int a, int b, int c){
    int largest;
    a>b && a>c ? largest =  a: b > c ? largest =  b : largest =  c ;
    return largest;
}
int main(){
    cout<<"Largest among 5,6,9 is " << findLargest(9,5,6)<<endl; // everytime you call the function it goes and executes logic
    cout<<"Largest among 12,23,7 is " << findLargest(12,23,7)<<endl;
    cout<<"Largest among 22,63,17 is " <<  findLargest(22,63,17)<<endl;
    return 0;
}