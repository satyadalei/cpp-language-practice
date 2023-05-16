#include <iostream>
using namespace std;
class Matrix{
    private:
         int a[2][3];
    public:        
           void Assign(int [][3]);
           void Show();
};
void Matrix::Assign(int b[][3]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           a[i][j] = b[i][j];
        }
    }
}
void Matrix::Show(){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a[i][j] ;
        }
        cout<<endl;
    }
}
int main(){
    Matrix Obj;
    int num[][3] = {{1, 4, 3},{7, 66, 67}};
    Obj.Assign(num);
    Obj.Show();
    return 0;
}