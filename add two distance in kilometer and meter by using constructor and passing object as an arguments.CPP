/*program to add two distance in kilometer and meter by using constructor and passing object as an arguments */
#include<iostream.h>
#include<conio.h>
class Distance
{
int kilo,meter;
public:
        Distance();
        Distance(int km,int m);
        void displayDistance();
        void addDistance(Distance D1,Distance D2);
};
Distance::Distance()
{
kilo=0;
meter=0;
}
Distance::Distance(int km,int m)
{
kilo=km;
meter=m;
}
void Distance::displayDistance()
{
cout<<"Distance is"<<kilo<<" km and "<<meter<<" meters"<<endl;
}
void Distance::addDistance(Distance D1,Distance D2)
{
meter=D1.meter+D2.meter;
kilo=meter/1000;
meter=meter%1000;
kilo=D1.kilo+D2.kilo+kilo;
}
void main()
{
Distance D1(5,300),D2(2,400);
D1.displayDistance();
D2.displayDistance();
D1.addDistance(D1,D2);
cout<<"Distance after addition"<<endl;
D1.displayDistance();
getch();
}

