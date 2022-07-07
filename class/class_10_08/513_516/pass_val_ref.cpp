#include <iostream>

using std::cout;
using std::endl;

int up(int a) {
    a++;
    return a;
}

void up2(int& b) {
    b++;
}

void up(int* a) {
    (*a)++;
}

void up2(int*& a) {
    a++;
}

int main() {
    int a = 0;
    cout << "a = " << a << endl;
    cout << "up(a) = " << (a=up(a)) << endl;
    cout << "a = " << a << endl;
    up2(a);
    cout << "up2(a)" << endl;
    cout << "a = " << a << endl;
    int* b = &a;
    cout << "b = " << b << endl;
    up2(b);
    cout << "up2(b)" << endl;
    cout << "b = " << b << endl;
    cout << "*b = " << *b << endl;
    cout << "up(&a)" << endl;
    up(&a);
    cout << "a = " << a << endl;
}