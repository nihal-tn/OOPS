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
    int n,a, i=0,year,max, j=0;
    string name;
    cout<<" enter the number of ships that you \t\t  want to add the details of\n"<<endl;
    cin>>n;
    ship *list[10];
    ship *ptr=new ship[10];
    while(i<n)
    {
        cout<<"enter the type of ship\n (1)for Cruise Ship \n(2)for Cargo Ship\n";
        cin>>a;
        if(a==1)
        {
            cout<<"enter the maximum passenger capacity\n year of manufacturing \nand name of the Cruise Ship\n";
            cin>>max>>year>>name;
            CruiseShip sh(max,year,name);
            *(ptr+i)=sh;
            list[i]=ptr+i;
            i++;
        }
        else if(a==2)
        {
            cout<<"enter the maximum cargo capacity\n year of manufacturing \nand name of the Cargo Ship\n";
            cin>>max>>year>>name;
            CruiseShip sh(max,year,name);
            *(ptr+i)=sh;
            list[i]=ptr+i;
            i++;
        }
        else
        {
            cout<<"enter a valid input\n";
        }
    }
    while(j<n)
    {
        list[j]->print() ;
        j++;
    }
}
