#include<iostream>
using namespace std;

class shape
{
    public:
    int width;int height;
    void setWidth(int w)
    {width = w;}
    void setHeight (int h)
    {height = h;}
};

class rectangle : public shape 
{
    public:
    int getArea()
    {return(width*height);}
};
int main()
{
    rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(7);

    cout<<"Total Area :"<<Rect.getArea()<<endl;
    return 0;
    
}