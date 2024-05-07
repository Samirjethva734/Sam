#include <iostream>
using namespace std;

int main() {
  int n=10;
  int  a[n];  
  int sum = 0;       

    cout << "Enter 10 numbers:"<<endl;
  for (int i = 0; i < 10; i++) {
     cin >> a[i];
    sum = sum + a[i];
  }
 
 double average =  sum /10.0;

  for (int i = 0; i < (n - 1); ++i) {
   for (int j = 0; j < (n - 1); ++j) {
    if (a[j] > a[j + 1]) {
      int temp= a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
  }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Sorted numbers: ";
    for (int i = 0; i < 10; i++) {
     cout << a[i] << " ";
      
    }
 cout<<endl;

  return 0;
}
