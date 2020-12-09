#include<iostream>
using namespace std;
class ship
{
    protected:
    int year;
    string name;
    public:
    ship()
    {

    }
    ship(int year_,string name_)
    {
        year=year_;
        name=name_;
    }
    void set_year(int year_)
    {
        year=year_;
    }
    void set_name(string name_)
    {
        name=name_;
    }
    string get_name()
    {
        return name;
    }
    int get_yesr()
    {
        return year;
    }
    virtual void print()
    {
        cout<<"name-> "<<name<<" year -> "<<year<<endl;
    }
};
class CruiseShip:public ship
{
    protected:
    int max_passenger;
    public:
    CruiseShip(int max,int year_,string name_):ship(year_,name_)
    {
        max_passenger=max;
    }
    int get_max_passenger()
    {
        return max_passenger;
    }
    void set_max_passenger(int k)
    {
        max_passenger=k;
    }
    void print()
    {
        cout<<"name-> "<<name<<" maximum passengers ->"<<max_passenger<<endl;
    }
};
class CargoShip:public ship
{
    int cargo_capacity;
    public:
    CargoShip(int capacity_,int year_,string name_):ship(year_,name_)
    {
        cargo_capacity=capacity_;
    }
    void set_cargo_capacity(int k)
    {
        cargo_capacity=k;
    }
    int get_cargo_capacity()
    {
        return cargo_capacity;
    }
    void print()
    {
        cout<<"name-> "<<name<<"cargo capacity->"<<cargo_capacity<<endl;
    }
};
int main()
{
    ship *list=new ship[10];
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the max capacity , year of manufacturing and name of the Cruise ship\n";
        int max,year;
        string name;
        cin>>max>>year>>name;
        CruiseShip sh(max,year,name);
        *(list+i)=sh;
    }
    for (int i = 5; i < 10; i++)
    {
        cout<<"enter the max capacity , year of manufacturing and name of the Cruise ship\n";
        int max,year;
        string name;
        cin>>max>>year>>name;
        CargoShip sh(max,year,name);
        *(list+i)=sh;
    }
    for (int i=0;i<10;i++)
    {
        (list+i)->print();
    }
}
