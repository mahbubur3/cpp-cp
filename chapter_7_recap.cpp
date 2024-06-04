#include <bits/stdc++.h>
using namespace std;

// Print array of objects
class Student {
    public:
        string name;
        int roll;
        double gpa;
};

int main() {
    int n;
    cin >> n;
    
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].gpa;
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].gpa << endl;
    }
    
    return 0;
}


// Get maximum value from objects
class Student {
    public:
        string name;
        int id;
        int marks;
};

int main() {
    int n;
    cin >> n;
    
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].id >> a[i].marks;
    }
    
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i].marks > mx) {
            mx = a[i].marks;
        }
    }
    
    cout << mx << endl;
    
    return 0;
}


// Maximum objects
class Student {
    public:
        string name;
        int id;
        int marks;
};

int main() {
    int n;
    cin >> n;
    
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].id >> a[i].marks;
    }
    
    Student mx;
    mx.marks = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (a[i].marks > mx.marks) {
            mx = a[i];
        }
    }
    
    cout << mx.name << mx.id << mx.marks << endl;
    
    return 0;
}


// Sort ascending order according to id
class Student {
    public:
        string name;
        int id;
        int marks;
};

int main() {
    int n;
    cin >> n;
    
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].id >> a[i].marks;
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].id > a[j].id) {
                swap(a[i], a[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].id << " " << a[i].marks << endl;
    }
    
    return 0;
}


// Sort using built-in funciton
class Student {
    public:
        string name;
        int id;
        int marks;
};

// Ascending order 
// bool cmp(Student m, Student n) {
//     if (m.id <= n.id) { // if condition true then nothing to do, if condition false then swap
//         return true;
//     } else {
//         return false;
//     }
// }

// Dascending order
bool cmp(Student x, Student y) {
    // if (x.id >= y.id) {
    //     return true;
    // } else {
    //     return false;
    // }
    return x.id >= y.id;
}

int main() {
    int n;
    cin >> n;
    
    Student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].id >> a[i].marks;
    }
    
    sort(a, a + n, cmp);
    
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].id << " " << a[i].marks << endl;
    }
    
    return 0;
}
*/


// Solve mid-term problem using sort function
class Student {
	public:
		int id;
		string name;
		int mathMarks;
};

bool cmp(Student x, Student y) {
    if (x.mathMarks > y.mathMarks) { // if condition true then nothing to do
        return true;
    } else if (x.mathMarks < y.mathMarks) { // swap is condition is true
        return false;
    } else { // when x and y marks are same then sort by id
        if (x.id < y.id) {
            return true;
        } else {
            return false;
        }
        // return x.id < y.id; // for remember think what you need, if i need x is small then just write like this.
    }
}

int main() {
	int n;
	cin >> n;
	
	Student a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].name >> a[i].mathMarks;
	}
	
	sort(a, a + n, cmp);
	
	for (int i = 0; i < n; i++) {
	    cout << a[i].id << " " << a[i].name << " " << a[i].mathMarks << endl;
	}
	
	return 0;
}


// Sortcut
class Student {
    public:
        int id;
        string name;
        int totalMarks;
};

bool cmp(Student x, Student y) {
    if (x.totalMarks == y.totalMarks) {
        return x.id < y.id;
    } else {
        return x.totalMarks > y.totalMarks;
    }
}

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].name >> a[i].totalMarks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].name << " " << a[i].totalMarks << endl;
    }

    return 0;
}
