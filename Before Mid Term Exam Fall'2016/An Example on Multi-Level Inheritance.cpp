#include<iostream>
using namespace std;
class student
{
private:
    int id;
public:
    char name[50],dept[50];
    void studentData(void)
    {
        cout<<"Stu. Name: ";     cin>>name;
        cout<<"Stu. Id: ";      cin>>id;
        cout<<"Stu. Dept: ";    cin>>dept;
    }
    void student_showData()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Dept: "<<dept<<"\n"<<endl;
     }
};
class staff : public student
{
public:
    double salary;
    char date[20];
    void staffData()
    {
        cout<<"Staff Name: ";           cin>>name;
        cout<<"Staff Dept: ";           cin>>dept;
        cout<<"Staff salary: ";         cin>>salary;
        cout<<"Staff joining Date: ";       cin>>date;
    }
    void staff_showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Dept: "<<dept<<endl;
        cout<<"Salary: "<<salary<<endl;
         cout<<"Staff joining Date: "<<date<<"\n";

    }
};
main()
{
    student s;
    staff sf;
    cout<<"Write individually Students document:\n\n";
    s.studentData();
    cout<<"\nWrite individually Staff document:\n";
    sf.staffData();
    cout<<"\nThe STUDENTS data you entered is:\n";
    s.student_showData();
    cout<<"\nThe STAAF data you entered is:\n";
    sf.staff_showData();

}
