// adding two two numbers using friend function
#include <iostream>
using namespace std;
class NumberAdd{
    friend float Add(NumberAdd);
    private:
          float a,b;
    public:
    void Read(){
        cout<<"Enter two numbers : ";
        cin>> a >> b;
    }      
};
float Add(NumberAdd obj){
    return obj.a + obj.b ;
}
int main(){
    NumberAdd AB;
    AB.Read();
    float res = Add(AB);
    cout << "The res = " <<  res ;
    return 0;
}