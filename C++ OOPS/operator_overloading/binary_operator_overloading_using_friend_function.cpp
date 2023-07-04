#include <iostream>
using namespace std;

class Number{
    int num;
    public:
    void Assign(int a){
      num = a;
    }
    void ShowNum(){
        cout << " The num is : " << num << endl;
    }
    Number friend operator +(Number obj1,Number obj2){
        Number Demo;
        Demo.num = obj1.num + obj2.num;
        return Demo;
    }
    Number friend operator +(Number obj, int a){
        Number Demo;
        Demo.num = obj.num + a;
        return Demo;
    }
};
int main(){
    Number n1,n2,n3,n4;

    n1.Assign(7);
    n2.Assign(34);
    cout<<" n1 " << endl;
    n1.ShowNum();
    cout<<"n2" << endl;
    n2.ShowNum();

    n3 = n1 + n2 ;
    cout<<"n3" << endl;
    n3.ShowNum();
    n4 = n2 + 24 ;
    cout<<"n4" << endl;
    n4.ShowNum();
    return 0;
}