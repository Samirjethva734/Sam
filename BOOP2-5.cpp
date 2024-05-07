#include<iostream>
using namespace std;

int a=30;
int main(){

    int a=25;

    cout<<"local variable:"<<a<<endl;
    cout<<"Global variable:"<<::a<<endl;

    return 0;
    
}