 #include <iostream>
using namespace std;

int main() {
  int a;
  int  flag = 0;

  cout << " Enter a NO: "<<endl;
  cin >> a;

  for (int i = 2; i <= a/2; ++i) {
   
    if (a % i == 0) {
       flag = 1;
      break;
    }
  }

  if (flag == 0) {
    cout <<"Number is a prime number.";
  }else
  {
       cout <<"Number is not a prime number.";
  }
  

  return 0;
}