#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    if (s == '=') {
        if (a == b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    if (s == '>') {
        if (a > b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    if (s == '<') {
        if (a < b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    return 0;
}
*/


int main() {
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    
    if (s == '+') {
        if (a + b == c) {
            cout << "Yes";
        } else {
            cout << a + b;
        }
    }
    
    if (s == '-') {
        if (a - b == c) {
            cout << "Yes";
        } else {
            cout << a - b;
        }
    }
    
    if (s == '*') {
        if (a * b == c) {
            cout << "Yes";
        } else {
            cout << a * b;
        }
    }
    
    return 0;
}
