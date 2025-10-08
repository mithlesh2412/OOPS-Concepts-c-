#include <iostream>
using namespace std;

class employee {
public:
    string name;
    int age;
    string company;

private:
    string empid;
    int salary;

protected:
    string emp_login_pwd;

public:
    // Constructor initialization
    employee(string n, int a, string c, string e, int s, string p) {
        this->name = n;
        this->age = a;
        this->company = c;
        this->empid = e;
        this->salary = s;
        this->emp_login_pwd = p;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Salary: " << salary << endl;
        cout << "Employee Login Password: " << emp_login_pwd << endl;
    }
};

int main() {
    // Create object and pass data
    employee e1("Mithlesh", 19, "Infosys", "MITH44", 60000, "sam@123");

    // Calling function
    e1.display();

    return 0;
}
