#include <bits/stdc++.h>
using namespace std;


// Difference
/* int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int result = (1LL * a * b) - (1LL * c * d);
    cout << "Difference = " << result;

    return 0;
} */


// G. Summation from 1 to N
/* int main() {
    int n;
    cin >> n;

    long long int sum = 1LL * n * (n + 1) / 2;
    cout << sum << endl;

    return 0;
} */


/* int main() { 
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
} */


/* int main() {
    int n, s, k;
    cin >> n;

    k = 1, s = (10 + n) / 2;
    for (int i = 0; i < ((10 + n) / 2) + 1; i++) {
        for (int j = 0; j < s; j++) {
            cout << " ";
        }

        for (int j = 0; j < k; j++) {
            cout << "*";
        }

        s--;
        k += 2;

        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << " ";
        }

        for (int j = 0; j < n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
} */

/* int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    int flag = 1;
    if (r != c) {
        flag = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j || i + j == r - 1) {
                    if (a[i][j] != 1) {
                        flag = 0;
                    }
                } else if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
} */


int countVowels(char str[], int i) {

    // base case
    if (str[i] == '\0') {
        return 0;
    }

    int dueIndexes = countVowels(str, i + 1);

    // convert capital to small
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] += 32;
    }

    // check vowels or not
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
        return dueIndexes + 1;
    } else {
        return dueIndexes;
    }
}

int main() {
    char str[201];
    cin.getline(str, 201);

    int result = countVowels(str, 0);
    cout << result;

    return 0;
}