#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string data;

    while (getline(file, data)) {
        cout << data << endl;
    }

    file.close();
    return 0;
}
