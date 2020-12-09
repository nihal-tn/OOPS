#include<iostream>
using namespace std;
class TA
{
    int id;
    string name;
    public:
    TA(int id_,string name_)
    {
        id=id_;
        name=name_;
    }
    void display()
    {
        cout<<"id of the given person is ->"<<id<<" and name is "<<name<<endl;
    }
};
class teacher:virtual public TA
{
    int age;
    public:
    teacher(int age_,int id_,string name_):TA(id_,name_)
    {
        age=age_;
    }
    void display_teacher()
    {
        cout<<"age of the given teacher is->"<<age<<endl;
    }
};
class student:virtual public TA
{
    int sem;
    public:
    student(int sem_,int id_,string name_):TA(id_,name_)
    {
        sem=sem_;
    }
    void display_student()
    {
        cout<<"sem of the given student is ->"<<sem<<endl;
    }
};
class person:public student,public teacher
{
int experience;
public:
person(int experience_,int age_,int sem_,int id_,string name_):student(sem_,id_,name_),teacher(age_,id_,name_),TA(id_,name_)
{
    experience=experience_;
}
void display_person()
{
cout<<"experience of the given person is ->"<<experience<<endl;
}
};
int main()
{
 person p(5,25,2,1232,"nihal");
 p.display_person();
 p.display_student();
 p.display_teacher();
 p.display();
}
