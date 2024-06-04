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
    
    // Create frequncy array
    int freq[26] = {0};
    
    // Convert for counting
    for (int i = 0; i < n; i++) {
        freq[s[i] - 97]++;
    }
    
    // Show result
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) { // Print without count zero
            cout << "-" << freq[i];
        }
    }
    
    return 0;
}


// Count alpha using string
int main() {
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s) {
        freq[c - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 97) << "-" << freq[i] << endl;
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

// This will error excced memory limit
int main() {
    int n;
    cin >> n;

    char a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int f[26] = {0};

    for (int i = 0; i < n; i++) {
        f[a[i] - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << char(97 + i);
        }
    }
    
    return 0;
}


int main() {
    string s;
    cin >> s;

    int f[26] = {0};
    for(char c : s) {
        f[c - 97]++;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < f[i - 97]; j++) {
            cout << i;
        }
    }

    return 0;
}
