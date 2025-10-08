#include <iostream>
using namespace std;

class mobile{
    string name;
    string model;
    int yom;

    public:
    void set_details(string name,string model,int yom){
       this-> name =name;
        this->model =model; 
        this-> yom = yom;
         //this refers to the object member variable
       
    }

        void printdetails(){
            cout <<"name" <<name <<endl;
            cout <<"model"<<model <<endl;
            cout <<"yom" <<yom <<endl;

        }
    
};
int main(){
    mobile vivo;
    vivo.set_details("Vivo series","V4",2025);

    vivo.printdetails();


}