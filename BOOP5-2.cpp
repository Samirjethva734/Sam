#include <iostream>
using namespace std;

class EMPLOYEE {
public:
    int em_no;
    string emname;
    double basic;
    double DA;
    double IT;
    double netsalary;
};

int main() {
    EMPLOYEE e1;

    cout << "Enter your employee number: ";
    cin >> e1.em_no;
    cout << "Enter your name: ";
    cin >> e1.emname;
    cout << "Enter basic salary: ";
    cin >> e1.basic;
    cout << "Enter(DA): ";
    cin >> e1.DA;
    cout << "Enter income tax (IT): ";
    cin >> e1.IT;

    e1.netsalary = e1.basic + (e1.basic * e1.DA) - (e1.basic * e1.IT);

    cout << "Total income: " << e1.netsalary << endl;

    return 0;
}
