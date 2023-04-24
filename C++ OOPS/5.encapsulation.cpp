#include <iostream>
using namespace std;
// encapsulation means setting data as private
class employee{
    private :
           int salary = 40000 ;
           string location;
    public :
           string name;
           // modifying private value using public method
           void setSallary(int s){
             salary = s ;
           }
           int getSallary(){
             return salary;
           }
};
int main(){
   employee e1;
   e1.name = "Satya";
   cout<< e1.getSallary() << endl; // returns 40000
   e1.setSallary(100000);
   cout<< e1.getSallary() << endl; // returns 100000
    return 0;
}