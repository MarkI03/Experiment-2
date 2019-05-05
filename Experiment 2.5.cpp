#include <iostream>
#include <iomanip>
#include <conio.h>
 using namespace std;
 
int main()
{
	
cout<<"Fibonacci Sequence                               Igaya 1-13"<<endl;
int i, f1 = 0, f2 = 1, next;
const int n=22;

cout<<"Next 20 Fibonacci:\n";
for (i= 0; i<n ;i++)
{
if ( i <= 1 )next = i;
else
{
next = f1 + f2;
f1 = f2;
f2 = next;
}
cout<< next <<",";
}
getch();
return 0;
}
