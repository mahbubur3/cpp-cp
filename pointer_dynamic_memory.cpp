#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int *p = &n;
    cout << p << endl; // Address
    cout << *p << endl; // Access value of n [Dereference]

    return 0;
}


int main() {
    int n = 10;
    int *p = &n;
    *p = 500; // Change the value or dereference
    // cout << n << endl;
    cout << *p << endl;

    return 0;
}


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
}


int main() {
    int n = 20;
    int *ptr;
    ptr = &n;

    cout << &n << endl; // Address of n variable
    cout << ptr << endl; // Address stored in ptr variable [address of n variable]
    cout << *ptr << endl; // Access the value using pointer

    return 0;
}


// CALL BY VALUE
void demo(int n) {
    n = 20;
}

int main() {
    int n = 10;

    demo(n);
    cout << n << endl;

    return 0;
}


// CALL BY REFERENCE
void demo(int *n) {
    *n = 500;
}

int main() {
    int n = 100;
    demo(&n);

    cout << n << endl;

    return 0;
}


/* <-------- DYNAMIC MEMORY --------> */ 
int main() {
    int *n = new int;
    *n = 100;
    cout << *n << endl;

    delete n;
    cout << *n << endl;

    return 0;
}

// With function
int *demo() {
    int *n = new int;
    *n = 100;

    return n;
}

int main() {
    int *p = demo();
    cout << *p << endl;


    return 0;
}

// Double pointer
int main() {
    int n = 100;
    int *p = &n;
    int **dp = &p; 

    cout << n << endl;
    cout << *p << endl;
    cout << *dp << endl;

    return 0;
}


int main() {
    int a = 3;
    int *p1 = &a;

    cout << &a << endl;
    cout << p1 << endl;
    cout << *p1 << endl;

    int** p2 = &p1;
    cout << &p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;

    return 0;
}


// Create dynamic array & delete this array 
int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

    delete[] a;

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

    return 0;
}


// Return array
int* numbers(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}

int main() {
    int n;
    cin >> n;

    int* p = numbers(n);
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}


// DYNAMIC OBJECT
// Create dynamic object
class Student {
    public:
        int id;
        string name;
        double gpa;

        Student(int id, string name, double gpa) {
            this->id = id;
            this->name = name;
            this->gpa = gpa;
        }
};

int main() {
    Student* john = new Student(1001, "John", 3.33);
    cout << john->id << " " << john->name << " " << john->gpa << endl;

    return 0;
}


// Return dynamic object
class Student {
    public:
        int id;
        string name;
        double gpa;

        Student(int id, string name, double gpa) {
            this->id = id;
            this->name = name;
            this->gpa = gpa;
        }
};

Student* info() {
    Student* john = new Student(1001, "John", 3.33);

    return john;
}

int main() {
    Student* result = info();
    cout << result->id << " " << result->name << " " << result->gpa << endl;

    return 0;
}
