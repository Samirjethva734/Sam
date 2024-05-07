 #include<iostream>
 
using namespace std;
int main()
{
int n=4;
int counter=1;
for ( int i = 1; i<= n; ++i){
 for ( int j = 1; j<=n; ++j){
     if ( j<=n-i) {
        cout<<"  ";
        }else{
             cout<<counter<<"  ";
              counter=counter+1; 
        }
           
           
    }cout<<endl;
   }return 0;
}