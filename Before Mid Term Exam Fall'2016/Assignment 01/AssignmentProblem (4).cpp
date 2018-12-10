#include<iostream>
using namespace std;
class box
{
    int height,width,depth;
public:
    box() : width(0),height(0),depth(0) {}              ///deafult constructor

    box(int h,int w,int d): height(h),width(w),depth(d){}    ///parameterized constructor

    box(box & a)                                       ///copy constructor
    {
        height=a.height;
        width=a.width;
        depth=a.depth;
    }
    void show (void)
    {
        cout<<"height:"<<height<<" width:"<<width<<" depth:"<<depth<<endl;
    }
    /*int area()
    {
        return height*width*depth;
    }*/
};
int main()
{
    box b1;
    box b2(2,3,4);
    box b3=b2;
    b1.show();
    b2.show();
    b3.show();

    /*b.area();
    box p(b);
    cout<<"area:"<<b.area()<<endl;
    cout<<"area:"<<p.area()<<endl;*/
}
