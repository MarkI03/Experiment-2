#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	
cout<<"Counting Numbers                                     Igaya 1-13"<<endl;
int i, counter;
counter= 1;

cout<<"Counting......"<<endl;
for (i=1;i<=10;i++)
{
cout<<counter <<",";
counter ++;
}
for (counter=12;counter<=30;)
{
cout<<counter<<",";
counter +=2;
}
getch();
return 0;
}
