#include <bits/stdc++.h>
using namespace std;


// Count alpha
int main() {
    int n;
    cin >> n;
    
    char s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int a[26] = {0};
    
    for (int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) {
            cout << " " << a[i];
        }
    }
    
    return 0;
}


// ICPC Ballon
int main() {
    int n;
    cin >> n;
    
    int a[26] = {0};
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        a[c - 'A']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) {
            count = count + a[i] + 1;
        }
    }

    cout << count << endl;
}
    

// Sort   
int main() {
    int n;
    cin >> n;
    
    int a[26] = {0};

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        a[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << char('a' + i);
        }
    }

    return 0;
}
