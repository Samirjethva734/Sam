 #include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
  double km;
  double cm;
  double m;
  double inch;
  double feet;

   
  cout << "Enter kilometers: ";
  cin >> km;

  m=km*1000.00;
  cm=m*100.0;
  feet=cm*0.0328084;
  inch=feet*12;
 
  cout <<fixed<< setprecision(2);
 
   cout << "Kilometer in meters"<< setw(10) << setfill(' ')  <<":" << m << endl;
  cout << "Kilometer in centimeters" << setw(5) << setfill(' ') <<":" << cm << endl;
  cout << "Kilometer in feet"<< setw(12) << setfill(' ')  <<":" << feet << endl;
  cout << "Kilometer in inches"<< setw(10) << setfill(' ') <<":"  << inch << endl;
 

  return 0;
}