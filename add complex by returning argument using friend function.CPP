/*Program to add two complex numbers by returning object as an argument using friend function.*/
 #include<iostream.h>
 #include<conio.h>
 class Complex
 {
 int real,img;
 public:
 void inputData();
 void displayData();
friend Complex addData(Complex a,Complex b);
 };
 void Complex::inputData()
 {
 cout<<"enter the value of real and imaginary"<<endl;
 cin>>real>>img;
 }
 void Complex::displayData()
 {
 cout<<"the complex number is:"<<real<<"+i"<<img<<endl;
 }
 Complex addData(Complex a,Complex b)
 {
 Complex c;
 c.real=a.real+b.real;
 c.img=a.img+b.img;
 return c;
 }
 void main()
 {
 Complex a,b,c;
 a.inputData();
 b.inputData();
 a.displayData();
 b.displayData();
 c=addData(a,b);
 cout<<"after addition "<<endl;
 c.displayData();
 getch();
 }
