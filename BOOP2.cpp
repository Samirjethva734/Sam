#include<iostream>
using namespace std;
 
 int main(){
 double a,b;
  double add,sub,mult,div;
   
   cout<<"enter two numbers:"<<endl;
   cin>>a>>b;

   add=a+b;
   sub=a-b;
   mult=a*b;
   div= a/b;

   cout<<" Addition of your given numbers:"<<add<<endl;
   cout<<"  subtraction of your given numbers:"<<sub<<endl;
   cout<<"  Multiplication of your given numbers:"<<mult<<endl;
   cout<<"  Division of your given numbers:"<<div<<endl;


   return 0;
   }