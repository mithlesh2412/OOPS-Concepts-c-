#include <iostream>
using namespace std;

// Base class
class vehicle {
public:
    string color;
    int max_speed;

    void set_vehicle(string c, int speed) {
        color = c;
        max_speed = speed;
    }

    void display_vehicle() {
        cout << "Color of vehicle: " << color << endl;
        cout << "Max speed: " << max_speed << " km/h" << endl;
    }
};

// Derived class 1
class car : public vehicle {
public:
    int num_gear;

    void set_car(string c, int speed, int gears) {
        set_vehicle(c, speed);  // call base class function
        num_gear = gears;
    }

    void display_car() {
        display_vehicle();
        cout << "Number of gears: " << num_gear << endl;
        cout << "------------------------------" << endl;
    }
};

// Derived class 2
class bicycle : public vehicle {
public:
    bool is_foldable;

    void set_bicycle(string c, int speed, bool foldable) {
        set_vehicle(c, speed);
        is_foldable = foldable;
    }

    void display_bicycle() {
        display_vehicle();
        cout << "Is foldable: " << (is_foldable ? "Yes" : "No") << endl;
        cout << "------------------------------" << endl;
    }
};

// Derived class 3
class truck : public vehicle {
public:
    int max_weight;

    void set_truck(string c, int speed, int weight) {
        set_vehicle(c, speed);
        max_weight = weight;
    }

    void display_truck() {
        display_vehicle();
        cout << "Max load capacity: " << max_weight << " kg" << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    car c1;
    c1.set_car("Red", 220, 6);
    c1.display_car();

    bicycle b1;
    b1.set_bicycle("Blue", 40, true);
    b1.display_bicycle();

    truck t1;
    t1.set_truck("Black", 120, 15000);
    t1.display_truck();

    return 0;
}
