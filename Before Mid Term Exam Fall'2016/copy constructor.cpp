#include<iostream>
using namespace std;
class test
{
    int code,price;
    public:
    test(int c, int p)
    {   code=c;
        price=p;
    }
    test(const test &t)
    {
        code=t.code;
        price=t.price;
    }
    void showdata()
    {
        cout<<"   code="<<code<<endl;
        cout<<"   price="<<price<<endl;
    }
};
int main()
{   cout<<"the main code & price is that:\n";
    test t1(101,17);
    t1.showdata();
    cout<<"& these code & price is being copy \nfor copy constructor and given below:\n";
    test t2(t1);
    t2.showdata();
}
