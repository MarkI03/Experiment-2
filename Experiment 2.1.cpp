#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>

using namespace std;
int main() 
{
cout<<"Package Subscription                                              Igaya 1-13"<<endl;

float bill;
float time;
string pack;

cout << "Insert Package: ";
cin >> pack;
 
if ((pack == "a")|(pack == "b")|(pack == "c"))
{
cout << "The number of hours: ";
cin >> time;
if (time <=999)
{	
if (pack == "a") 
{
if (time > 10)
{
bill =( ((time-10)*20)+995);
} 

else
{
bill = 995;
}

}
else if (pack == "b")
{
if (time > 20) 
{
bill = 1495 + (time - 20) * 10;
}
 else 
{
bill = 1495;
}

}
 else 
{
bill = 1995;
}

} 
else
{
cout << "Invalid num of hours" ;
} 

} 
else
{
 cout << "Invalid Chosen Package";
}
cout << "Bill: " << bill << " Pesos";


getch();
return 0;
}

