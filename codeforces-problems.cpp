#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    if (s == '=') {
        if (a == b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    if (s == '>') {
        if (a > b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    if (s == '<') {
        if (a < b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
    
    return 0;
}
*/


int main() {
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    
    if (s == '+') {
        if (a + b == c) {
            cout << "Yes";
        } else {
            cout << a + b;
        }
    }
    
    if (s == '-') {
        if (a - b == c) {
            cout << "Yes";
        } else {
            cout << a - b;
        }
    }
    
    if (s == '*') {
        if (a * b == c) {
            cout << "Yes";
        } else {
            cout << a * b;
        }
    }
    
    return 0;
}


// DONE IN LENOVO
int main() {
  int test;
  cin >> test;
  
  for (int t = 0; t < test; t++) {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    int sm = INT_MAX;
    
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int result = a[i] + a[j] + (j + 1) - (i + 1);
        sm = min(sm, result); // [min] built-it function
      }
    }
    
    cout << sm << endl;
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
    
    int count[26] = {0};

    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << char('a' + i);
        }
    }

    return 0;
}


/* Module 6.5 practice problems */
// problem 1
int main() {
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
}


// Problem 2
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    string w;
    ss >> w;
    reverse(w.begin(), w.end());
    cout << word;
    
    while (ss >> w) {
        reverse(w.begin(), w.end());
        cout << " " << w;
    }

    return 0;
}


// Problem 3
int main() {
    string s;
    getline(cin, s);
    
    while(s.find("EGYPT") != -1) {
        s.replace(s.find("EGYPT"), 5, " ");
    }
    
    cout << s << endl;

    return 0;
}


// Problem 4
int main() {
    int test;
    cin >> test;
    
    for (int t = 0; t < test; t++) {
        string s;
        cin >> s;
        
        int firstSum = 0, secondSum = 0;
        for (int i = 0; i < s.size() - 3; i++) {
            firstSum += (s[i] - '0');
        }
        
        for (int i = s.size() - 1; i > 2; i--) {
            secondSum += (s[i] - '0');
        }
        
        if (firstSum == secondSum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
