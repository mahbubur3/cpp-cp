#include <bits/stdc++.h>
using namespace std;


/* <------ Array of objects ------> */
// Print objects
/* class Student {
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
} */


// Print objects name with space
/* class Student {
    public:
        int id;
        string name;
        double gpa;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    Student *a = new Student[n] // Dynamic object
    for (int i = 0; i < n; i++) {
        cin >> a[i].id;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].gpa;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].gpa << endl;
    }

    return 0;
} */


// Get minimum & maximum value from array
/* class Student {
    public:
        string name;
        int roll;
        int totalMarks;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].totalMarks;
    }

    int mn = INT_MAX; // For maximum: mx = INT_MIN 
    for (int i = 0; i < n; i++) {
        if (a[i].totalMarks < mn) {
            mn = a[i].totalMarks;
        }
    }

    cout << mn << endl;

    return 0;
} */


// Get minimum object from array
/* class Student {
    public:
        string name;
        int roll;
        int totalMarks;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].totalMarks;
    }

    Student mn;
    mn.totalMarks = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i].totalMarks < mn.totalMarks) {
            mn = a[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.totalMarks << endl;

    return 0;
} */


// Get maximum object from array
/* class Student {
    public:
        string name;
        int roll;
        int totalMarks;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].totalMarks;
    }

    Student mx;
    mx.totalMarks = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i].totalMarks > mx.totalMarks) {
            mx = a[i];
        }
    }

    cout << mx.name << " " << mx.roll << " " << mx.totalMarks << endl;

    return 0;
} */
