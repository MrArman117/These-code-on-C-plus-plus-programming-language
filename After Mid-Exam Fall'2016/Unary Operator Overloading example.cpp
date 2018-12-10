#include<iostream>
using namespace std;
class space
{
    int x,y,z;
public:
    void get_data(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
void display(void)
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"Z="<<z<<endl;
    }
void operator -()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
main()
{
    space s;
    s.get_data(2,3,4);
    s.display();
    -s;
    s.display();
}
