#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;
    }

    void add(Time t)
    {
        int sh, sm, ss;

        ss = s + t.s;
        sm = m + t.m;
        sh = h + t.h;

        if (ss >= 60)
        {
            ss = ss - 60;
            sm++;
        }

        if (sm >= 60)
        {
            sm = sm - 60;
            sh++;
        }

        cout << "Result = " << sh << ":" << sm << ":" << ss;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    t1.add(t2);

    return 0;
}
