#include <iostream>
using namespace std;
class Array{
    private:
          int a[7];
    public:
          void Assign(int []);
          void Show();      
};
void Array::Assign(int b[]){
    for (int i = 0; i < 7; i++)
    {
       a[i] = b[i];
    }
}
void Array::Show(){
    for (int i = 0; i < 7; i++)
    {
       cout<<a[i]<< endl;  
    }
}
int main(){
    Array Obj;
    int num[] = {7,1,4,3,10,66,67};
    Obj.Assign(num);
    Obj.Show();
    return 0;
}