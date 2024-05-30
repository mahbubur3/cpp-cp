#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;
    int count = 0;
    char prev = ' ';
    while (ss >> w) {
        // if (w >= 'A' || w <= 'Z') {
        //     count++;
        // }
        // if (w == 'A')
        // for (string::iterator it = w.begin(); it << w.end(); it++) {
        //     if (*it >= 'a' || *it <= 'z') {
        //         count++;
        //     }
        // }
        // count++;
        // if (w >= 'a' && w <= 'z') {
        //     count++;
        // }
        // cout << w << endl;
        // for (int i = 0; i < w.size(); i++) {
            // cout << "hello" << endl;

        // }
        for (char c:w) {
            if (c >= 'a' && c <= 'z') {
                // count++;
                if (prev == ' ') {
                    count++;
                }
            }
            prev = c;
        }
        // if (w <= 'a' && w >= 'z') {
        //     count++;
        // }
        // for (char c:w) {

        // }
        // if (w )
    }
    cout << count << endl;

    // if (s >= 'A' && s <= 'Z') {
    //     while(ss >> w) {
    //         count++;
    //     }
    // }

    // if (s >= 'a' && ss <= 'z') {
    //     while(ss >> w) {
    //         count++;
    //     }
    // }

    // cout << count << endl;

    return 0;
}
*/

// problem 1
/* int main() {
    string s;
    getline(cin, s);
    
    int count = 0;

    bool insideWord = false;
    for (char c:s) {
        if (isalpha(c)) {
            if (insideWord == false) {
                count++;
                insideWord = true;
            }
        } else {
            insideWord = false;
        }
    }

    cout << count << endl;

    return 0;
} */



// Problem 2
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;
    while (ss >> w) {
        int i = 0, j = w.size() - 1;
        while (i < j) {
            // swap(i, j);
            int temp
            i++;
            j--;
        }

        cout << w;
    }

    return 0;
}



int main() {
    string s;
    getline(cin, s);

    stringstream

}#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;
    int count = 0;
    char prev = ' ';
    while (ss >> w) {
        // if (w >= 'A' || w <= 'Z') {
        //     count++;
        // }
        // if (w == 'A')
        // for (string::iterator it = w.begin(); it << w.end(); it++) {
        //     if (*it >= 'a' || *it <= 'z') {
        //         count++;
        //     }
        // }
        // count++;
        // if (w >= 'a' && w <= 'z') {
        //     count++;
        // }
        // cout << w << endl;
        // for (int i = 0; i < w.size(); i++) {
            // cout << "hello" << endl;

        // }
        for (char c:w) {
            if (c >= 'a' && c <= 'z') {
                // count++;
                if (prev == ' ') {
                    count++;
                }
            }
            prev = c;
        }
        // if (w <= 'a' && w >= 'z') {
        //     count++;
        // }
        // for (char c:w) {

        // }
        // if (w )
    }
    cout << count << endl;

    // if (s >= 'A' && s <= 'Z') {
    //     while(ss >> w) {
    //         count++;
    //     }
    // }

    // if (s >= 'a' && ss <= 'z') {
    //     while(ss >> w) {
    //         count++;
    //     }
    // }

    // cout << count << endl;

    return 0;
}
*/

// problem 1
/* int main() {
    string s;
    getline(cin, s);
    
    int count = 0;

    bool insideWord = false;
    for (char c:s) {
        if (isalpha(c)) {
            if (insideWord == false) {
                count++;
                insideWord = true;
            }
        } else {
            insideWord = false;
        }
    }

    cout << count << endl;

    return 0;
} */



// Problem 2
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;
    while (ss >> w) {
        int i = 0, j = w.size() - 1;
        while (i < j) {
            // swap(i, j);
            int temp
            i++;
            j--;
        }

        cout << w;
    }

    return 0;
}



int main() {
    string s;
    getline(cin, s);

    stringstream

}
