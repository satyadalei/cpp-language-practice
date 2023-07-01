#include<iostream>
#include<fstream> // to operation an file systems
using namespace std;

int main(){
    // creating myFile object using ofstream class loaded from <fstream> library
    ofstream myFile("mytextfile.txt"); //--> parameterized constructor -- implicit call
    // here myFile object is taking a "string" "mytextfile.txt" named here to create a file with that name
 
    // writting into file name
    myFile << "Hello I am Satyanarayan Dalei. Hi everybody. Hi everybody." ;

    // to close the file 
    // myFile.close();

    //read from file
    string myText;
    ifstream MyReadFile("mytextfile.txt");

    while (getline (MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText;
    }
    

    return 0;
}