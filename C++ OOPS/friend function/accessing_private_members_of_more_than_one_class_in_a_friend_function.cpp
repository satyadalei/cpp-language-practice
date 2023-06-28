#include <iostream>
using namespace std;

class One;
class Two;
class Three;

class One{
    friend float SumOfNums(One, Two, Three);
    private:
        int num1;
    public:
        void GetNum(){
           cout<<" Enter One class num1 : " ;
           cin>>num1;
           cout << endl;
        }    
};
class Two{
    friend float SumOfNums(One, Two, Three);
    private:
        int num2;
    public:
        void GetNum(){
           cout<<" Enter One class num2 : " ;
           cin>>num2;
           cout << endl;
        } 
};
class Three{
    friend float SumOfNums(One, Two, Three);
    private:
        int num3;
    public:
        void GetNum(){
           cout<<" Enter Three class num3 : " ;
           cin>>num3;
           cout << endl;
        } 
};
float SumOfNums(One one, Two two, Three three){
    return one.num1 + two.num2 + three.num3; 
}
int main(){
    One one;
    Two two;
    Three three;

    one.GetNum();
    two.GetNum();
    three.GetNum();
    
    float res =  SumOfNums(one,two,three);
    cout << " The res = " << res ;
    return 0;
}