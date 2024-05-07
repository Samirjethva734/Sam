 #include <iostream>
using namespace std;

int max(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c && b > a) {
        return b;
    } else if (c > a && c > b) {
        return c;
    }
}

string max(string p, string q, string r) {
    int lp = p.length();
    int lq = q.length();
    int lr = r.length();
    if (lp > lq && lp > lr) {
        return p;
    } else if (lq > lr && lq > lp) {
        return q;
    } else if (lr > lp && lr > lq) {
        return r;
    }
}

int main() {
    int x, y, z;
     cout<<"enter three integers:"<<endl;
     cin>>x>>y>>z;
        
       string s,d,f;
       cout<<"enter three  strings:"<<endl;
       cin>>s>>d>>f;

    cout << "Maximum number: " << max(x, y, z)<<endl;
    cout <<"maximum string:"<< max(s, d, f);
    
    return 0;
}
