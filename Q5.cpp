#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double wage(float rate,float hours = 0) {
    double ot = (rate*1.5)*hours;
    return((rate*40)+ot);
}

int main() {
    int val = 1;
        string name;
        float rate;
        char ot;
        float hours;
        double total;
        cout << "\nName:";
        getline(cin, name);
        cout << "\nEnter rate:";
        cin >> rate;
        cout << "\nOvertime? (y or n): ";
        cin >> ot;
        switch (ot) {
        case 'y':
        cout << "\nEnter overtime hours: ";
        cin >> hours;
            total = wage(rate,hours);
            cout << "\nName : " << name << "\tWages : " << total;
            break;
        default:
            total = wage(rate);
            cout << "\nName : " << name << "\tWages : " << total;
            break;

}}