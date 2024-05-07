#include <iostream>
using namespace std;
class  item
{
private:
    int num;
    int cost;

public:
    void  setitem();
    void getitem();
    double getdata ()
    {
        return cost;
    }
};

void  item::setitem()
{
    cout << "Enter item num: ";
    cin >>num;
    cout << "Enter cost: ";
    cin >>cost;
}

void item::getitem()
{
    cout << num << " - "
        << "₹"  << cost << endl;
}

int main()
{
    item std[50];
    int n;
    cout << "Enter no of item: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std[i].setitem();
    }
    
    cout << "------Item info------" << endl;
    for (int i = 0; i < n; i++)
    {
        std[i].getitem();
    }
    return 0;
}