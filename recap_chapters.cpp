#include <iostream>

using namespace std;

/* int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int zeroCount = 0, oneCount = 0, twoCount = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            zeroCount++;
        }

        if (a[i] == 1) {
            oneCount++;
        }

        if (a[i] == 0) {
            twoCount++;
        }
    }

    cout << zeroCount << endl;
    cout << oneCount << endl;
    cout << twoCount << endl;

    return 0;
} */


/* int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int freq[11] = {0};
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            freq[0]++;
        }

        if (a[i] == 1) {
            freq[1]++;
        }

        if (a[i] == 0) {
            freq[2]++;
        }
    }

    cout << "0 - " << freq[0] << endl;
    cout << "1 - " << freq[1] << endl;
    cout << "2 - " << freq[2] << endl;

    return 0;
} */


int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int freq[11] = {0};
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (int i = 0; i < 11; i++) {
        cout << i << " - " << freq[i] << endl;
    }

    return 0;
}
