#include <bits/stdc++.h>

using namespace std;


// Dynamic variable
int main() {
    int *a = new int;
    *a = 10;
    cout << a << endl; // address
    cout << *a << endl; // value
    
    return 0;
}


// Delete dynamic memory
int main() {
    int n* = new int;
    *n = 10;
    cout << *n << endl;
    delete n;
    
    return 0;
}


// Using function
int * fun() {
    int *a = new int;
    *a = 100;
    
    return a;
}

int main() {
    int *p = fun();
    // cout << p << endl; // address
    cout << *p << endl; // value
    
    return 0;
}


// create dynamic array
int main() {
    int n;
    cin >> n;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}


// return array from function
int *nums() {
    int *a = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    
    return a;
}

int main() {
    int *a = nums();
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}


// using size input of array
int *nums(int n) {
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    return a;
}

int main() {
    int n;
    cin >> n;
    
    int *a = nums(n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}


// ====================================
// CREATE ARRAY
int main() {
    int n;
    cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}


// RETURN ARRAY
int* nums() {
    int *arr = new int[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    return arr;
}

int main() {
    int *p = nums();
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    
    return 0;
}


// Delete dynamic memory - array
int main() {
    int *arr = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    delete[] arr;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}


// Increase size of an array
// example inpt 50 20 10
int main() {
    int *n = new int[3];
    int *m = new int[3];
    for (int i = 0; i < 3; i++) {
        cin >> n[i];
        m[i] = n[i];
    }
    
    delete[] n;
    
    n = new int[5];
    for (int i = 0; i < 3; i++) {
        n[i] = m[i];
    }
    
    delete[] m;
    
    n[3] = 90;
    n[4] = 80;
    for (int i = 0; i < 5; i++) {
        cout << n[i] << " ";
    }
    
    return 0;
}



// PRACTICE PROBLEMS
int main()  {
    char x;
    cin >> x;
    
    if (x >= '0' && x <= '9') {
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;
        
        if (x >= 'A' && x <= 'Z') {
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "IS SMALL" << endl;
        }
    }
        
    return 0;
}


int main() {
    long long int x, y;
    cin >> x >> y;
 
    int summation = x + y;
    long long int multiplication = x * y;
    int subtraction = x - y;
 
    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;
 
    return 0;
}


int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
            
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}


int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int maxNum = 0;
    for (int i = 0; i < n; i++) {
        maxNum = max(maxNum, a[i]);
    }
    
    cout << maxNum;
    
    return 0;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c) {
        cout << a << " ";
    } else if (b <= a && b <= c) {
        cout << b << " ";
    } else {
        cout << c << " ";
    }
    
    if (a >= b && a >= c) {
        cout << a;
    } else if (b >= a && b >= c) {
        cout << b;
    } else {
        cout << c;
    }
    
    return 0;
}


// custom problem 1
int *getArray(int n) {
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    return a;
}

int main() {
    int n;
    cin >> n;
    
    int *result = getArray(n);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}


// problem 2
int main() {
    int n;
    cin >> n;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    
    int *b = new int[m];
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }
    
    // for (int i = 0; i < n; i++) {
    //     cout << b[i];
    // }
    
    delete[] a;
    
    a = new int[m];
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
    
    delete[] b;
    
    for (int i = n; i < m; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++ ) {
        cout << a[i] << " ";
    }
    
    return 0;
}

