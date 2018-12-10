#include<iostream>
using namespace std;
class student
{
public:
    char name[20],dept[20];
    int id;
void stu_get_data()
    {
        cout<<"Name: ";     cin>>name;
        cout<<"Id: ";       cin>>id;
        cout<<"Dept: ";     cin>>dept;
    }
    void stu_show_data()
    {
        cout<<"     Name: "<<name<<endl;
        cout<<"     Id: "<<id<<endl;
        cout<<"     Dept: "<<dept<<"\n"<<endl;
    }
};
class teacher:public student        /// class teacher:public virtual student
{
public:
    char qualification[50];
    int salary;
    void teacher_get_data()
    {
        cout<<"Name: ";     cin>>name;
        cout<<"Id: ";       cin>>id;
        cout<<"Dept: ";     cin>>dept;
        cout<<"Qualification: ";     cin>>qualification;
        cout<<"Salary: ";       cin>>salary;
    }
    void teacher_show_data()
    {
        cout<<"     Name: "<<name<<endl;
        cout<<"     Id: "<<id<<endl;
        cout<<"     Dept: "<<dept<<endl;
        cout<<"     Qualification: "<<qualification<<endl;
        cout<<"     Salary: "<<salary<<"\n"<<endl;
    }
};
class staff:public student          ///class staff:public (virtual teacher)
{
public:
    int salary;         ///"int salary" ekhn e na dile o code hobe, just change korte hobe oi..
    void staff_get_data()
    {
        cout<<"Name: ";     cin>>name;
        cout<<"Id: ";       cin>>id;
        cout<<"Dept: ";     cin>>dept;
        cout<<"Salary: ";       cin>>salary;
    }
    void staff_show_data()
    {
        cout<<"     Name: "<<name<<endl;
        cout<<"     Id: "<<id<<endl;
        cout<<"     Dept: "<<dept<<endl;
        cout<<"     Salary: "<<salary<<"\n"<<endl;
    }
};
class Regester:public student
{
public:
    char designation[50];
    void reg_get_data()
    {
        cout<<"Name: ";     cin>>name;
        cout<<"Id: ";       cin>>id;
        cout<<"Dept: ";     cin>>dept;
        cout<<"Designation: ";      cin>>designation;
    }
    void reg_show_data()
    {
        cout<<"    Register Name: "<<name<<endl;
        cout<<"     Id: "<<id<<endl;
        cout<<"     Dept: "<<dept<<endl;
        cout<<"     Designation: "<<designation<<"\n"<<endl;
    }
};
main()
{
    student s;
    teacher t;
    staff sf;
    Regester reg;

    cout<<"Enter Student Document,- \n";
    s.stu_get_data();
    cout<<"Enter Teacher Document,- \n";
    t.teacher_get_data();
    cout<<"Enter Staff Document,- \n";
    sf.staff_get_data();
    cout<<"Enter Regester Document,- \n";
    reg.reg_get_data();

    cout<<"\n\n The Every document you entered is-: \n";

    s.stu_show_data();
    t.teacher_show_data();
    sf.staff_show_data();
    reg.reg_show_data();
}
