//file handling - file handling in c++ helps users to write , read and create and modify data stored in fles  (.txt,)
//helps to stores data permenetatly - fstream -- > ifstream(takes input or read from file)
                                               //--->ofstream - (gives output from file)
                                               

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    char arr[100];
    cout << "Enter your name and age: " << endl;
    cin.getline(arr, 100); // Correct input method

    ofstream myfile("xyz.txt"); // Create and open file

    myfile << arr; // Write to file
    myfile.close(); // Close file

    cout << "File write operation performed successfully!" << endl;

    return 0;
}
