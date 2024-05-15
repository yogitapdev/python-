#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:

    Number(int val) : value(val) {}
    Number operator++() {
        ++value;
        return *this;
    }
    Number operator++(int) {
        Number temp = *this;
        ++value;
        return temp;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    cout << "Prefix Increment:" << endl;
    ++num1;
    num1.display();
    cout << "Postfix Increment:" << endl;
    num2++;
    num2.display();

    return 0;
}
