       ///Function OberRiding hocche function name & parameter name same

        ///ekhn e aladha aladha Base cls and Derived cls er jonno pointer use kora hoise,
        ///orthat 2ta pointer used hoise 2ta cls er data access korar jonno..
        ///amra kinto ekta pointer diya o 2ta cls er data ke access korte parbo,
        ///kinto se khetre 'virtual' likhte hobe pothm cls er function er age...

#include<iostream>
using namespace std;
class BC
{
public:
    int b;
    void showdata()
    {
        cout<<"b= "<<b<<endl;
    }
};
class DC : public BC
{
public:
    int d;
    void showdata()
    {
        cout<<"b= "<<b<<endl;
        cout<<"d= "<<d<<endl;
    }
};
int main()
{
    BC base;
    BC *bptr;
    bptr=&base;
    bptr->b=100;
    bptr->showdata();

    DC derived;
    bptr=&derived;
    bptr->b=200;
    /// bptr->d=300;  //won't work cz this 'd' is member of derived class.
    bptr->showdata();

    DC *dptr;
    dptr=&derived;
    dptr->d=400;
    dptr->showdata();
}

