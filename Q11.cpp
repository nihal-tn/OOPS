#include<iostream>
using namespace std;
class shape
{
    protected:
    double len,breadth;
    public:
    void get_data()
    {
        cout<<"enter length and breadth \n";
        cin>>len>>breadth;
    }
    virtual void display_area()=0;
};
class triangle:public shape
{
    void display_area()
    {
        cout<<"area of the triange is "<<0.5*len*breadth<<endl;
    }
};
class rectangle:public shape
{
    void display_area()
    {
        cout<<"area of the rectangle is "<<len*breadth<<endl;
    }
};
int main()
{
    shape *bptr;
    triangle tri;
    rectangle rect;
    bptr=&tri;
    cout<<"for triangle\n";
    bptr->get_data();
    bptr->display_area();
    cout<<"for rectangle\n";
    bptr=&rect;
    bptr->get_data();
    bptr->display_area();
}
