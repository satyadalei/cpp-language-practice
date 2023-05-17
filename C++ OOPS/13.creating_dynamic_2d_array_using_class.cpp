#include <iostream>
using namespace std;
class Dmatrix{
    //Dmatrix means Dynamic_Matrix here
    private:
        int row,col;
        int *twoDArray;
    public:
        void CreateMatrix(int,int);  // decides only row and column of matrix
        void AssignMatrix();  // assigns the value corresponding to rows and cols
        void ShowMatrix();   // shows matrix elements
        void AddTwoMatrix(Dmatrix, Dmatrix); // adds two matrixand assigns to self
        void MultiPlyTwoMatrix(Dmatrix,Dmatrix);
};
void Dmatrix::CreateMatrix(int r,int c){
    row = r;
    col = c;
    twoDArray = new int[row*col];
}
void Dmatrix::AssignMatrix(){
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout<< "Enter x["<<i <<"]["<<j<<"] value " ;
            cin >> twoDArray[i*col+j] ;
       }
    }
}
void Dmatrix::ShowMatrix(){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<< twoDArray[i*col+j] << " " ;
        }
        cout<< endl;
    }   
}
void Dmatrix::AddTwoMatrix(Dmatrix M1, Dmatrix M2){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           this->twoDArray[i*col+j] = M1.twoDArray[i*col+j] + M2.twoDArray[i*col+j] ;
        }
    }
    cout<<"Matrix added successfully"<<endl;
}
void Dmatrix::MultiPlyTwoMatrix(Dmatrix M1, Dmatrix M2){
    
}
int main(){
    Dmatrix M1,M2,M3;
    cout<<"Enter matrix 1 elements : "<< endl ;
    M1.CreateMatrix(2,2);
    M1.AssignMatrix();
    M1.ShowMatrix();
    
    cout<<"Enter matrix 2 elements : " << endl;
    M2.CreateMatrix(2,2);
    M2.AssignMatrix();
    M2.ShowMatrix();

    cout<<"After addition of matrix 1 with matrix 2 is"<<endl;
    M3.CreateMatrix(2,2);
    M3.AddTwoMatrix(M2,M1);
    M3.ShowMatrix();
    return 0;
}