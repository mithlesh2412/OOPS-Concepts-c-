#include <iostream>
using namespace std;

class student {
private:
    string name;
    int age;
    string course;

public:
    // Default constructor
    student() {
        name = "Unknown";
        age = 0;
        course = "Not Assigned";
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    student(const student &obj) {
        name = obj.name;
        age = obj.age;
        course = obj.course;
        cout << "Copy constructor called." << endl;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for: " << name << endl;
    }

    // Setter functions.  --- to set the value of private data members 
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setCourse(string c) { course = c; }

// Getter functions. ---> to get or to access value of private data data memebers
    string getName() { return name; }
    int getAge() { return age; }
    string getCourse() { return course; }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Default constructor
    student s1;
    s1.setName("Sam");
    s1.setAge(18);
    s1.setCourse("B.Tech");
    s1.display();

    // Parameterized constructor
    student s2("XYZ", 19, "BCA");
    s2.display();

    // Copy constructor
    student s3 = s2;
    s3.display();

    return 0;
}
