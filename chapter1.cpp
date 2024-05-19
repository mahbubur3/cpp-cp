#include <iostream>
#include <iomanip>
using namespace std;


//! Show output
/* int main() {
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
} */


//! Take input
/* int main() {
    // int n;
    // cin >> n;
    // cout << n << endl;

    // Multiple input
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    return 0;
} */

/* int main() {
    int age;
    char initial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the first letter of your name: ";
    cin >> initial;

    cout << age << endl;
    cout << initial << endl;

    return 0;
} */
/* int main() {
    char c;
    cin >> c;
    cout << c << endl;

    return 0;
} */


//! Type casting
/* int main() {
    // Show ascii value
    // char c;
    // cin >> c;
    // int asc = c; //? Convert to integer
    // cout << asc << endl;

    char c;
    cin >> c;
    cout << int(c) << endl;

    return 0;
} */


//! EOF in C or Test case
/* int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d", a, b);
    }

    return 0;
} */

/* //! EOF in C
int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << a << " " << b << endl;
    }

    return 0;
} */


//! Setprecision (Show number after decimal)
/* int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << n << endl;

    double n2;
    cin >> n2;
    cout << fixed << setprecision(3) << n2 << endl;

    return 0;
} */


//! If Else
/* int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    return 0;
} */

/* int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        cout << "x is greater than y";
    } else {
        cout << "y is greater than x";
    }

    return 0;
} */