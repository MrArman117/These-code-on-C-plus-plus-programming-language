                    ///function overloading: function name same but parameter difference.
#include<iostream>
using namespace std;
class test
{
    int a,b,c,d;
public:
    void getdata(int x)
    {
      a=x;
    }
    void getdata(int x,int y)
    {
        b=x;
        c=y;
        d=b+c;

    }
    void display()
    {
        cout<<"value of a= "<<a<<endl;
         cout<<"value of b= "<<b<<endl;
          cout<<"value of c= "<<c<<endl;
           cout<<"\n addition of b & c is:"<<d<<endl;
    }
};
int main()
{
    test t;
    t.getdata(20);
    t.getdata(40,50);
    t.display();
}
