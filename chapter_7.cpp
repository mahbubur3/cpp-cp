#include <bits/stdc++.h>
using namespace std;


/* <------ Array of objects ------> */
// Print objects
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


// Print objects name with space
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
}


// Get minimum & maximum value from array
class Student {
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
}


// Get minimum object from array
class Student {
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
}


// Get maximum object from array
class Student {
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
}

// Sort array of objects using selection sort
class Student {
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
    
    // Ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].roll > a[j].roll) { // This is sort according to roll you can use also marks. For descending order use '<'.
                swap(a[i], a[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " "<< a[i].totalMarks << endl;
    }
    
    return 0;
} */


// Question solve for mid-term
class Student {
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
    
    // Descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap
            if (a[i].totalMarks < a[j].totalMarks) {
                swap(a[i], a[j]);
            }
            // Check marks same or not
            if (a[i].totalMarks == a[j].totalMarks) {
                if (a[i].roll > a[j].roll) {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " "<< a[i].totalMarks << endl;
    }
    
    return 0;
}


// Sort using built-in sort() function
class Student {
    public:
        string name;
        int roll;
        int totalMarks;
};

bool cmp(Student a, Student b) {
    // if (a.totalMarks <= b.totalMarks) { // For descending use '>='
    //     return true;
    // } else {
    //     return false;
    // }
    
    return a.totalMarks <= b.totalMarks; // Shortcut
}

int main() {
    int n;
    cin >> n;
    
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].totalMarks;
    }
    
    sort(a, a + n, cmp);
    
    for (int i = 0; i < n; i++) 
