
   #include<iostream>
#include<iomanip>
 using namespace std;
    int sort(int &a, int &b){
    if(a>=b){
        int temp;
        temp=a;
        a=b;
        b=temp;

        return a;
        return b;
    }else
        {   
         return a;
         return b;
    }
    
   }
  int main(){
   int p,q;

   cout<<"enter  value for p and q:"<<endl;
   cin>>p>>q;
       sort(p,q);

     cout<<p<<endl;
     cout<<q;

    return 0;
  }