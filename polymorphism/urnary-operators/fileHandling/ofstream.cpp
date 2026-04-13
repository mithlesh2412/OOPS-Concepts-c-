#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("data.txt"); // Create & open file

    file << "Hello, File Handling in C++!"; // Writing to file
    
    file.close(); // Close the file
    cout << "Data written successfully!" << endl;
    return 0;
}
