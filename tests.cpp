#include <bits/stdc++.h>
using namespace std;

// Problem Two
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    int isFound = 0;

    string w;
    while (ss >> w) {
        if (w == "Jessica") {
            isFound = 1;
        }
    }

    if (isFound == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


// Problem One
int main() {
    int test;
    cin >> test;
    
    for (int t = 0; t < test; t++) {
        string s, x;
        cin >> s >> x;
    
        while (s.find(x) != -1) {
            s.replace(s.find(x), 4, "#");
        }
        
        cout << s << endl;
    }
    
    return 0;
}


// Problem Three
class Student {
    public:
        string nm;
        int cls;
        string s;
        int id;
};

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    int i = 0, j = n - 1;
    while (i < j) {
        swap(a[i].s, a[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}


// Problem Four
class Student {
    public:
        string nm;
        int cls;
        string s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};

bool cmp(Student x, Student y) {
    if (x.total_marks > y.total_marks) {
        return true;
    } else if (x.total_marks < y.total_marks) {
        return false;
    } else {
        if (x.id < y.id) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}


// Problem Five
class Student {
    public:
        string nm;
        int cls;
        string s;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student x, Student y) {
    if (x.eng_marks > y.eng_marks) {
        return true;
    } else if (x.eng_marks < y.eng_marks) {
        return false;
    } else {
        if (x.math_marks > y.math_marks) {
            return true;
        } else if (x.math_marks < y.math_marks) {
            return false;
        } else {
            if (x.id < y.id) {
                return true;
            } else {
                return false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
} 
