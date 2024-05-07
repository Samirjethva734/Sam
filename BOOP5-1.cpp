#include <iostream>
#include <string>
using namespace std;
 
struct college_info {
    string college_name;
    string college_code;
    string dept;
    int intake;
};

int main() {
  
    struct college_info c;
    c.college_name = "GP junagadh";
    c.college_code = "a1a2";
    c.dept = "Computer department";
    c.intake = 75;
     
    cout << "Name of the college: " << c.college_name << endl;
    cout << "college University Code: " << c.college_code << endl;
    cout << "Name of the Department: " << c.dept << endl;
    cout << "The department has an in-take of: " << c.intake << endl;
     

    return 0;
}


