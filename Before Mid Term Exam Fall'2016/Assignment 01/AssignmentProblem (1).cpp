#include <iostream>
using namespace std;
class employee
{
    protected:
    int emp_id,emp_sallary;
    float emp_da;
    public:
    void getdata(void)
    {
        cout<<"emp id : ";   cin>>emp_id;
        cout<<"sallary : ";  cin>>emp_sallary;

        emp_da =emp_sallary*20/100;
        cout<<"emp_da(20% from salary): "<<emp_da<<"\n\n";
    }
    void putdata(void)
    {
        cout<<"     emp id: "<<emp_id<<endl;
        cout<<"     sallary :"<<emp_sallary<<endl;;
        cout<<"     emp da : "<<emp_da<<"\n\n";
    }
};
int main()
{
    employee E[25];
    cout<<"Enter individually employee document:\n";

    for(int i=0;i<3;i++)
    {
        E[i].getdata();
    }
    cout<<"\n   The emp_id/salary/da  you entered is:\n\n";
    for(int i=0;i<3;i++)
    {
        cout<<"     Details of Employee "<<i+1<<":\n";
        E[i].putdata();
    }
}
