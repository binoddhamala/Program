#include<iostream.h>
#include<conio.h>
class Space
{
   int x,y,z;
public:
       void getData(int a, int b, int c)
        {
         x=a;
         y=b;
         z=c;
         }
      void display()
        {
      cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
         }
     void operator -();
};
    void Space::operator -()
      {
      x=-x;
      y=-y;
      z=-z;
      }
void main()
    {
  Space S;
  S.getData(2,4,6);
  S.display();
  -S;
  cout<<"After overloading unary - operator"<<endl;
  S.display();
  getch();
    }
