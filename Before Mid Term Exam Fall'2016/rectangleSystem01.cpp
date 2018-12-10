#include<iostream>
using namespace std;
class rectangle
{
private:
    int height,width;
public:
    void area(void);
};
void rectangle::area(void)
{
    int a;
    cout<<"Enter height:";cin>>height;
    cout<<"Enter width: ";cin>>width;
    a=height*width;
    cout<<"\nThe area of rectangle is: "<<a<<"\n";
}
main()
{
    rectangle r1;
    r1.area();
}


