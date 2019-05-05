#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{

cout<<"Compute V value                                       Igaya 1-13"<<endl;

double V,x,y; 	
const double z=2.5;
char a;
	

cout << "Input x value:"; 
cin >> a ;
	
cout<<"Input y value:";
cin >> y;
switch (a)
{
	
case1:
x=1;
if (y>=1&&y<5)
{
V=x*y*z;
}

else if (y>=5)
{	
V= x+(y/z);
}
else
{
V= x+y+z;
}
cout<<"V =     "<<V<<endl;
cout<< setprecision(2)<<fixed;
break;

case2:
x=2;
if (y<=5)
{
V=abs((x-y)/z);
}
else if (y>5)
{		
V= x-sqrt(y+z);
}
{
V= x+y+z;
}
		
cout<<"V= "<<V<<endl;
cout<< setprecision(2)<<fixed;
break;

default:
V=x+y+z;
cout<<"V= "<<V<<endl;

}

getch();
return 0;

}
