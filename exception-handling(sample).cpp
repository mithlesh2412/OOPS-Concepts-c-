// lets try exception handling programs for the driving license eligibility 

#include <iostream>
using namespace std;

int main(){
    int age,eligibility;
    cout<<"enter your age:"<<endl;
    cin>>age;
    
    try{
        if(age<18){
            throw age;
        }
       
        
        eligibility  = age;
        cout << "You are eligible for driving license. Age: " << age << endl;
        
    }
    catch(int exc){
        cout<<" Minor!! you are not elibile to vote " <<exc <<endl;
        
    }
    
    return 0;
    
}