#include <iostream>
using namespace std;

class Matrix{
    float mat[2][2] ;
    public:
            void readMatrix();
            void showMatrix();
            void operator = (Matrix);
};
void Matrix::readMatrix(){
    cout << "Enter 2X2 matrix" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout << "Enter matrix[" << i << "][" << j << "] element :" ;
           cin >> mat[i][j] ;
        }
    } 
}
void Matrix::showMatrix(){
    cout << "Enter 2X2 matrix" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          cout << mat[i][j] << "  " ;
        }
        cout<< endl;
    } 
}
void Matrix::operator=(Matrix M){
   for (int i = 0; i < 2; i++)
   {
     for (int j = 0; j < 2; j++)
     {
       mat[i][j] = M.mat[i][j];
     }
   }
}
int main(){
    Matrix obj1, obj2;
    obj1.readMatrix();
    cout << "obj1 matrix ";
    obj1.showMatrix();

    obj2 = obj1;
    cout << "obj2 matrix ";
    obj2.showMatrix();
    return 0;
}