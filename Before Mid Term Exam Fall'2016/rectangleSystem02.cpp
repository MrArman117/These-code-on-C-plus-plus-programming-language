#include<iostream>
using namespace std;
class rectangle
{
private:
    int height,width;
public:
    void area(int h, int w);
};
void rectangle::area(int h,  int w)
{
    int a;
    height=h,width=w;
    a=height*width;
    cout<<"\nThe area of rectangle is: "<<a<<"\n";
}
main()
{
    rectangle r1;
    int x,y;
    cout<<"Enter Height: ";cin>>x;
    cout<<"Enter Width: ";cin>>y;
    r1.area(x,y);
}
