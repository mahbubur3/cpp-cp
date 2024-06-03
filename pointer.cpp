#include <iostream>

using namespace std;

/*
int main() {
    int n = 10;
    int *p = &n;
    cout << p << endl; // Address
    cout << *p << endl; // Access value of n [Dereference]

    return 0;
} */

/*
int main() {
    int n = 10;
    int *p = &n;
    *p = 500; // Change the value or dereference
    // cout << n << endl;
    cout << *p << endl;

    return 0;
} */


/*
int main() {
    int x = 10;
    float y = 1.22f;
    char z = 'm';

    int *p_x = &x;
    int *p_y = &y;
    int *p_z = &z;

    cout << *p_x << endl;
    cout << *p_y << endl;
    cout << *p_z << endl;

    return 0;
} */


int main() {
    int n = 20;
    int *ptr;
    ptr = &n;

    cout << &n << endl; // Address of n variable
    cout << ptr << endl; // Address stored in ptr variable [address of n variable]
    cout << *ptr << endl; // Access the value using pointer

    return 0;
}
