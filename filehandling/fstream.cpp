// fstream - file stream used to read and write data to file using  ofstream and ifstream 
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file;
    string line;

    //write data to file
    file.open("data.txt",ios::out);
    file <<"hello this is file handling using c++" <<endl;
    file.close();

    //read from file
    file.open("data.txt",ios::in);
    while(getline(file,line)){
        cout <<line <<endl;
    }
    file.close();


    return 0;
    

}

