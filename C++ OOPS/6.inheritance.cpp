#include <iostream>
#include<string>
using namespace std;

//base class
class Vehicle{
    private :
          int cost = 100000;
    public: 
          string brand = "Ford";
          void honk(){
            cout << "Tuut, tuut! \n";
          }
          void setCost(int i){
            cost = i;
          }
          int getCost(){
            return cost;
          }
};

//derived class
class Car :public Vehicle {
    public :
    string model = "Mustang";
    int getSallaryAmount(){
      cout << "this is cost :" << getCost();
    };
};
// now car class has all the public properties of Vehicle

int main(){
    //using Car class and accessing all propertie inherited from Vehicle
    Car car1Obj;
    //cout<<car1Obj.brand << endl;
    cout<<car1Obj.model << endl;
    // car1Obj.honk();
    car1Obj.getSallaryAmount();
    cout << "After setting changes : " << endl;
    car1Obj.setCost(200000);
    car1Obj.getSallaryAmount();
    //cout<< car1Obj.getCost() << endl;
    return 0;
}