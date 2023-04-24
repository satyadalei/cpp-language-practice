#include <iostream>
using namespace std;

class student{
    public:
    //attributes
    string name;
    string branch;
    int rollNum;
    // methods
    //constructor
    student(string n, string b, int r){
       //this->name = n;
       name = n;
       //this->branch = b;
       branch = b;
       //this->rollNum = r;
       rollNum = r;
    }
    void introduceSelf(){
        cout<<"Hello! I am "<< this->name << ", it's nice to meet you. I am a " << this->branch << " student." << endl;
    }
};

int main(){
    // every time you declacre a class the constructor will run!
    // creating student 1 (std1) object

    // if you build an constructor you can not write like this -- setting manualy attributes of the constructor
    // student std1;
    // std1.name = "Satya";
    // std1.branch = "MCA";
    // std1.rollNum = 56;

    // student std2;
    // std2.name = "Subrajyoti";
    // std2.branch = "B.Tech";
    // // std2.branch = "MCA";
    // std2.rollNum = 66;

    // student std3;// constructor will be run
    // std3.name = "Kartik";
    // std3.branch =  "B.Tech";
    // std3.rollNum = 45;
    student std4("Bignesh","Diploma",45);
    student std5("Aparajita","M.Sc",34);
    // std2.introduceSelf() ;
    // std1.introduceSelf() ;
    // std3.introduceSelf() ;
    std4.introduceSelf() ;
    std5.introduceSelf() ;
    // cout << std4.name << std4.branch ;

    return 0;
}