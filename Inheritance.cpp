//inheritance --it is use to inherit the properties from the base class to the  derived class

#include <iostream>
using namespace std;

class vehicle{
    public:
    string color;
    int max_speed;

};
class car: public vehicle{
    int num_gear;

};

class bicyle: public vehicle{
    bool is_foldable;

};
class truck: public vehicle {
    int max_weight;

};



int main(){


}