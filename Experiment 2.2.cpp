#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;
int main ()

{
int latecharge=20;  
int demandcharge=35;                      
char unpaidbal;  

cout<<"Water Bill Calculator                                      Igaya 1-13"<<endl;

double last, current, meter, bill;        
const double consumptioncharge=1.10;
      
cout<<"Input Last Meter Reading: ";
cin>>last;     

cout<<"Input Current Meter Reading: ";
cin>>current;       

cout<<"Did the customer paid the bill? (yes or no): ";
cin>>unpaidbal;        

meter=current-last;

if (unpaidbal== 'yes')      
{
bill=(consumptioncharge*meter)+demandcharge;
  }
else
{
bill=(consumptioncharge*meter)+demandcharge+latecharge; 
  }
cout<< setprecision(2)<<fixed;
cout<<"Your Water Bill = "<<bill<<" Pesos"<<endl;    
  
getch ();
return 0;}
