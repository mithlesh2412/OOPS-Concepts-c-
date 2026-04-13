#include <iostream>
using namespace std;
class demo{
    public:
    int x;
    void getdata(){
        cout <<"enter a no:"<<endl;
        cin>>x;

    }
    void putdata(){
        cout <<"value is:"<<x;

    }

    void operator ++ (){
        x =x+1;

    }
};

int main(){
  demo aa;
  aa.getdata();
  cout <<"original value:"<<endl;
  aa.putdata();
  ++aa;
  cout <<"\nvalue after increment:"<<endl;
  aa.putdata();

  return 0;

}