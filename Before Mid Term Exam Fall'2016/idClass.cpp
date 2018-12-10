#include<iostream>
using namespace std;
class student
{
    int id;
    char name[50],dept[50];    ///string
public:
void GetData(void)
{
    cin>>name>>id>>dept;
}

void ShowData(void)
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student   Id: "<<id<<endl;
    cout<<"Name of Department: "<<dept<<"\n"<<endl;
}
};
main()
{
        student s[10];
        int i;
        cout<<"Write Students information individually Name, Id, Department: \n\n";

        for(i=1;i<=3;i++)
        {
            s[i].GetData();
        }
        cout<<"\nThe Information Of Students That You Entered Is:\n";
        for(i=1;i<=3;i++)

        {
            s[i].ShowData();
        }
}
