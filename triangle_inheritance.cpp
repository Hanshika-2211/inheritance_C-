#include<iostream>
using namespace std;

class shape
{
    public:
    int base;int height;
    void setBase(int b)
    {base = b;}
    void setHeight (int h)
    {height = h;}

};
class triangle : public shape 
{
    public:
    int getArea()
    {return(0.5*base*height);}
};
int main()
{
    triangle Tri;
    Tri.setBase(6);
    Tri.setHeight(6);

    cout<<"Total Area :"<<Tri.getArea()<<endl;
    return 0;
    
}