// this program adds two 2X3 matrix using objcets
#include <iostream>
using namespace std;
// matrix class
class Matrix
{
private:
    float matrix[2][3];

public:
    void GetMatrixElements();
    void ShowMatrix();
    void AddMatrix(Matrix, Matrix);
    void SubtractMatrix(Matrix,Matrix);
};
void Matrix::GetMatrixElements()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter matrix[" << i << "]"
                 << "[" << j << "]"
                 << " element : ";
            cin >> matrix[i][j];
        }
    }
}
void Matrix::ShowMatrix(){
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
          cout<< matrix[i][j] << "  " ;
       }
       cout<< endl;
    }
    cout<<endl;
}
void Matrix::AddMatrix(Matrix A, Matrix B){
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
         matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
       }
    }
}
void Matrix::SubtractMatrix(Matrix A, Matrix B){
     for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
         matrix[i][j] =  A.matrix[i][j] - B.matrix[i][j];
       }
    }
}
int main()
{
    Matrix m1,m2,res1,res2;
    m1.GetMatrixElements();
    m2.GetMatrixElements();
    res1.AddMatrix(m1,m2); // addition
    res2.SubtractMatrix(m1,m2); // subtraction

    //show matrix 1
    cout<<"Matrix 1" << endl;
    m1.ShowMatrix();
    //show matrix 2
    cout<<"Matrix 2" << endl ;
    m2.ShowMatrix();
    //addition of matrix
    cout<<"Addition of matrix" << endl;
    res1.ShowMatrix();
    //substraction of matrix
    cout<<"Subtraction of matrix" << endl;
    res2.ShowMatrix();



    return 0;
}