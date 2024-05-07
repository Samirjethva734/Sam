 #include <iostream>
using namespace std;

class Conversion {
public:
    double cm;

    double intom() {
        return cm * 0.01;
    }

    double intokm() {
        return cm * 0.00001;
    }

    double intoft() {
        return cm * 0.0328;
    }

    double intoin() {
        return cm * 0.3937;
    }
};

int main() {
    Conversion c1;
    cout << "Enter length in centimeters: ";
    cin >> c1.cm;

    cout << "In meters: " << c1.intom() << endl;
    cout << "In kilometers: " << c1.intokm() << endl;
    cout << "In feet: " << c1.intoft() << endl;
    cout << "In inches: " << c1.intoin() << endl;

    return 0;
}
