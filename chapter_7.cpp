#include <bits/stdc++.h>
using namespace std;


// Array of objects
class Student {
    public:
        int id;
        string name;
        double gpa;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].name >> a[i].gpa;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].gpa << endl;
    }

    return 0;
}
