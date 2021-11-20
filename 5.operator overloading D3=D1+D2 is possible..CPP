/*Program to overload “+” operator in order to add two distances in feet and inches
by using a friend function such that D3=D1+D2 is possible. */
#include<iostream.h>
#include<conio.h>
class Distance
 {
     int feet,inches;
   public:
       Distance()
         {
        feet=0;
        inches=0;
          }
      Distance(int f,int i)
            {
            feet=f;
            inches=i;
             }
    void display()
      {
    cout<<"Distance is:"<<feet<<" feet and "<<inches<<" inches"<<endl;
      }
   friend Distance operator +(Distance D1,Distance D2);
 };
  Distance operator +(Distance D1,Distance D2)
  {
  Distance D3;
  D3.inches=D1.inches+D2.inches;
  D3.feet=D3.inches/12;
  D3.inches=D3.inches%12;
  D3.feet=D3.feet+D1.feet+D2.feet;
  return D3;
  }
void main()
  {
  Distance D1(2,4),D2(3,5),D3;
  D1.display();
  D2.display();
  D3=D1+D2;
  cout<<"After addition:"<<endl;
  D3.display();
  getch();
   }