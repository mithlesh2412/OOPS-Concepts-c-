//exception handling  - it is a speacial mechanism by which we the programs causing the errrors
// istead of fully creashing ,their are executed in a proper way or handled,
// The particular portion of the program is handled with the help of some speacail type of keywords 
  // 1 try   2.throw   3.catch
  
  //lets implement the program to divide by zero 
  #include <iostream>
  using namespace std;
  
 int main(){
     int num,denom,result;
     cout<<"enter numerator and denominator" <<endl;
     cin>>num >>denom;
     
     
     try{
      if(denom==0){
          throw denom;
          
      }
      
      result =num/denom;
      cout <<"result:" <<result <<endl;
      

     }
     catch(int ex){
         cout<<"exception: division by zero not allowed!!"<<ex <<endl;
         
     }
     return 0;
 }