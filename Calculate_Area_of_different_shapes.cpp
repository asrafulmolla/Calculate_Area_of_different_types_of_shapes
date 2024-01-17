#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int choice;
    cout<<" 1- Area of Triangle.";
    cout<<"\n 2- Area of Rectangular.";
    cout<<"\n 3- Area of trapezium.";
    cout<<"\n 4- Area of Ellips.";
    cout<<"\n 5- Area of Square.";
    cout<<"\n 6- Area of Parallelogram.";
    cout<<"\n 7- Area of Ciecle.";
    cout<<"\n 8- Area of Sector.\n ";
    while(1)
    {
        cout<<"\n Choice your number (1-8): ";
    cin>>choice;
    float base,height,width,a,b,h,angle,pie=3.1416,r;
    switch (choice)
    {
    case 1:
    cout<<"\n Enter the base of triangle: ";
    cin>>base;
    cout<<"\n Enter the height of triangle: ";
    cin>>height;
    cout<<"\n Area of Triangle ="<<0.5*base*height<<endl;
    break;
    case 2:
    cout<<"\n Enter the width of rectangular:: ";
    cin>>width;
    cout<<"\n Enter the height of Rectangular: ";
    cin>>height;
    cout<<"\n Area of Rectangular= "<<width*height<<endl;
    break;
    case 3:
    cout<<"\n Enter the base of Trapezium:: ";
    cin>>base;
    cout<<"\n Enter the a of Trapezium: ";
    cin>>a;
    cout<<"\n Enter the h of Trapezium: ";
    cin>>h;
    cout<<"\n Area of Trapezium= "<<0.5*(base+a)*h<<endl;
    break;
    case 4:
    cout<<"\n Enter the a of Ellips:: ";
    cin>>a;
    cout<<"\n Enter the b of Ellips: ";
    cin>>b;
    cout<<"\n Area of Ellips= "<<a*b*pie<<endl;
    break;
    case 5:
    cout<<"\n Enter the a of Square:: ";
    cin>>a;
    cout<<"\n Area of Square= "<<a*a<<endl;
    break;
    case 6:
    cout<<"\n Enter the b of Parallelogram:: ";
    cin>>b;
    cout<<"\n Enter the h of Parallelogram: ";
    cin>>h;
    cout<<"\n Area of Parallelogram= "<<b*h<<endl;
    break;
    case 7:
    cout<<"Enter the radius of Circle:: ";
    cin>>r;
    cout<<"\n Area of Circle = "<<pie*r*r<<endl;
    break;
    case 8:
    cout<<"\n Enter the radius of Sector:: ";
    cin>>r;
    cout<<"\n Enter the angle of Sector: ";
    cin>>angle;
    cout<<"\n Area of Sector= "<<0.5*r*r*angle<<endl;
    break;
    default:
        cout<<"\n Invalid Choice...! Try Again.\n";
    }
    }
    getch();
}
