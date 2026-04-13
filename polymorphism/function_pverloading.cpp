#include <iostream>
using namespace std;

class base {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double y) {
        cout << "Float: " << y << endl;
    }
};

int main() {
    base obj;
    obj.show(45);     // Calls show(int)
    obj.show(25.5);   // Calls show(float)
    
    return 0;
}
