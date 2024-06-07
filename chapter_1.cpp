#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string.h>
#include <string>
// #include <bits/stdc++.h> // Group header file

using namespace std;


// Show output
int main() {
    // cout << "Hello Mac!";

    int n = 100;
    long long int n2 = 1599999900000;
    float n3 = 5.5;
    double n4 = 5.93333253223;
    char c = 'M';

    // cout << n << endl; //? endl or \n means same, new line
    // cout << n2 << endl;
    // cout << n3 << endl;
    // cout << n4 << endl;
    // cout << c << endl;

    cout << "My rank is " << n << endl;
    cout << "My rank is " << n << " and character is " << c << endl;

    return 0;
}


//! Take input
int main() {
    // int n;
    // cin >> n;
    // cout << n << endl;

    // Multiple input
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    return 0;
}

int main() {
    int age;
    char initial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the first letter of your name: ";
    cin >> initial;

    cout << age << endl;
    cout << initial << endl;

    return 0;
}


int main() {
    char c;
    cin >> c;
    cout << c << endl;

    return 0;
} 


// Type casting
int main() {
    // Show ascii value
    // char c;
    // cin >> c;
    // int asc = c; //? Convert to integer
    // cout << asc << endl;

    char c;
    cin >> c;
    cout << int(c) << endl;

    return 0;
}


// EOF in C or Test case
int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d", a, b);
    }

    return 0;
}

// EOF in C
int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << a << " " << b << endl;
    }

    return 0;
}


// Setprecision (Show number after decimal) [Note: need <iomanip> header file]
int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << n << endl;

    double n2;
    cin >> n2;
    cout << fixed << setprecision(3) << n2 << endl;

    return 0;
}


// If Else
int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        cout << "x is greater than y";
    } else {
        cout << "y is greater than x";
    }

    return 0;
}


// Ternary operator
int main() {
    int x, y;
    cin >> x >> y;

    (x == y) ? cout << "Equal" << endl : cout << "Not Equal" << endl;

    return 0;
}

int main() {
    int n;
    cin >> n;

    (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}


// Switch case
int main() {
    int n = 3;

    if (n == 1) {
        cout << "One";
    } else if (n == 2) {
        cout << "Two";
    } else if (n == 3) {
        cout << "Three";
    } else if (n == 4) {
        cout << "Four";
    } else if (n == 5) {
        cout << "Five";
    } else {
        cout << "Not found";
    }

    return 0;
}


switch (expression) {
  case value1:
    // code to execute if expression == value1
    break;
  case value2:
    // code to execute if expression == value2
    break;
  // ... more cases
  default:
    // code to execute if expression doesn't match any case
    break;
}
expression: এটি একটি ভেরিয়েবল যা একটি মান ফেরত দেয়।
case: প্রতিটি case লেবেলটি একটি মান নির্দেশ করে যার সাথে expression এর মান তুলনা করা হয়।
break: break স্টেটমেন্টটি নিশ্চিত করে যে একবার একটি case ম্যাচ হয়, তাহলে পরবর্তী case গুলো আর চালানো হয় না।
default: default লেবেলটি ঐ ক্ষেত্রে কোড চালানোর জন্য যেখানে expression এর মান কোনো case লেবেলের সাথে মেলে না।


int main() {
    int n = 4;

    switch (n) {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        default:
            cout << "not found";
    }

    return 0;
}
    
int main() {
    int n;
    cin >> n;

    switch (n % 2) { //? n%2 there store 0 or 1 if 4%2==0 then print even otherwise odd
        case 0:
            cout << "Even";
            break;
        case 1:
            cout << "Odd";
            break;
    }

    return 0;
}

int main() {
    char grade = 'A';

    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Very good" << endl;
            break;
        case 'C':
            cout << "Good" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}
/*
grade ভেরিয়েবলটির মান 'A'।
switch স্টেটমেন্টটি grade এর মানের সাথে case লেবেলগুলির সাথে তুলনা করে।
যেহেতু grade এর মান 'A' এবং এটি case 'A': এর সাথে মেলে, তাই "Excellent!" মেসেজটি প্রিন্ট হয়।
break স্টেটমেন্টটি নিশ্চিত করে যে পরবর্তী case গুলো চালানো হয় না।
*/

int main() {
    char c;
    cin >> c;

    switch(c) {
        case 'a':
            cout << "Vowel";
            break;
        case 'e':
            cout << "Vowel";
            break;
        case 'i':
            cout << "Vowel";
            break;
        case 'o':
            cout << "Vowel";
            break;
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }

    return 0;
}


// Built-in functions
// min() & max()
int main() {
    int x, y;
    cin >> x >> y;

    int minimum = min(x, y); //? [Note: Need <algorithm> header file]
    int maximum = max(x, y);

    cout << minimum << " " << maximum;

    return 0;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int findMaximum = max({a, b, c, d});
    cout << findMaximum << endl;

    return 0;
}


void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    swapNumbers(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}


int main() {
    int a, b;
    cin >> a >> b;

    swap(a, b); //? [Note: need <utility> header file]
    cout << a << " " << b << endl;

    return 0;
}


// Array input
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

// String
int main() {
    char name[20];
    cin >> name;
    // cout << name << endl;

    // Show size of string
    cout << strlen(name) << endl;

    return 0;
}

// Input string with space. In C we use fgets but in c++ we use cin.getline()
int main() {
    char name[20];
    cin.getline(name, 50); //? [Note: need <string> header file]
    cout << name;

    return 0;
}


// If i need integer and string with space after integer i need getchar()
int main() {
    int age;
    cin >> age;

    char name[50];
    getchar();
    cin.getline(name, 50);

    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;

    return 0;
}


// But if i need just string after integer without space just use simple way to take input
int main() {
    int age;
    cin >> age;

    char nickName[50];
    cin >> nickName;

    cout << "Age: " << age << endl;
    cout << "Name: " << nickName << endl;

    return 0;
}
