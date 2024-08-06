#include <iostream>
using namespace std;

class Bank {
public:
    virtual double getBalance() const {
        return 0;
    }
};
class BankA : public Bank {
public:
    double getBalance() const override {
        return 1000;
    }
};
class BankB : public Bank {
public:
    double getBalance() const override {
        return 1500;
    }
};
class BankC : public Bank {
public:
    double getBalance() const override {
        return 2000;
    }
};
int main() {
    BankA A;
    BankB B;
    BankC C;
    cout << "Balance in Bank A: $" << A.getBalance() << endl;
    cout << "Balance in Bank B: $" << B.getBalance() << endl;
    cout << "Balance in Bank C: $" << C.getBalance() << endl;
    return 0;
}
