#include<iostream>
using namespace std;
double carea(double a, double PI){
    
    return PI*a*a;
}
int main(){
double a,PI;

cout<<"enter radii and PI:"<<endl;
cin>>a>>PI;

cout<<carea(a,PI);

    return 0;
}