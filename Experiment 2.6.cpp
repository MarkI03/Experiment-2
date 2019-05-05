#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
cout<<"Sum of Whole Numbers                                      Igaya 1-13"<<endl;
int i, no, sum = 0;
cout<<"Input a positive integer: ";
cin>>no;
for (int i = 1; i <= no; ++i)
{
sum += i;
}
cout<<"The sum of all whole numbers from 1 to " <<no<<" is "<<sum;
getch();
return 0;
}

