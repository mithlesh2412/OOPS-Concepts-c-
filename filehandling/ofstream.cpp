//file handling - important concepts of oops while help users to read and write data to the file 
//fstream is used in the header file - which consists of two important operation ofstream and ifstream 
// 1.ostream - output file stream (writing to the file)
//2.ifstream -input file stream ( read from the written data)

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("data.txt");
    fout<<"hello this is file handling in c++"<<endl;
    fout.close();
    return 0;
    
}