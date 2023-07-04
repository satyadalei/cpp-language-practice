#include <iostream>
using namespace std;

class BinaryOperatorOverLoading{
    private:
            float num;
    public:
           void Assign(int a){
              num = a;
           }
           void Show(){
             cout<<" Num is a = " << num << endl;
           }       
           BinaryOperatorOverLoading operator +(BinaryOperatorOverLoading obj){
              BinaryOperatorOverLoading Demo;
              Demo.num = num + obj.num;
              return Demo;
           }
           BinaryOperatorOverLoading operator -(BinaryOperatorOverLoading obj){
              BinaryOperatorOverLoading Demo;
              Demo.num = num - obj.num;
              return Demo;
           }
           BinaryOperatorOverLoading operator *(BinaryOperatorOverLoading obj){
              BinaryOperatorOverLoading Demo;
              Demo.num = num * obj.num;
              return Demo;
           }
            BinaryOperatorOverLoading operator /(BinaryOperatorOverLoading obj){
              BinaryOperatorOverLoading Demo;
              Demo.num = num / obj.num;
              return Demo;
           }
};
int main(){
    BinaryOperatorOverLoading obj1,obj2,obj3,obj4,obj5,obj6;
    obj1.Assign(20);
    obj2.Assign(5);
    obj1.Show();
    obj2.Show();
    obj3 = obj1 + obj2; // using + operator between two objects
    obj4 = obj1 - obj2;
    obj5 = obj1 * obj2;
    obj6 = obj1 / obj2;
    cout<<"Object operations " << endl;
    cout<<" Sum " << endl;
    obj3.Show();
    cout<<" Difference " << endl;
    obj4.Show();
    cout<<" Multiplication " << endl;
    obj5.Show();
    cout<<" Division " << endl;
    obj6.Show();
    return 0;
}