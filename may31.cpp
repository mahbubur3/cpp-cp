#include <bits/stdc++.h>
using namespace std;

// void text(stringstream& ss) {
//     string w;
//     if (ss >> w) {
//         cout << w << endl;
//         text(ss);
//     }
// }

// int main() {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);
//     text(ss);
    
//     return 0;
// }



// PROBLEM TWO
int main() {
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    string w;
    while (ss >> w) {
        int i = 0, j = w.size() - 1;
        while (i < j) {
            swap(w[i], w[j]);
            i++;
            j--;
        }
        cout << w << endl;
    }
    
    return 0;
}

int main() {
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    string w;
    ss >> w;
    reverse(w.begin(), w.end());
    cout << w;
    
    while(ss >> w) {
        reverse(w.begin(), w.end());
        cout << " " << w;
    }
    
    return 0;
}


int main() {
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    string w;
    bool firstWord = true; // Flag to track the first word
    while (ss >> w) {
        if (!firstWord) {
            cout << " "; // Print space only if it's not the first word
        }
        firstWord = false; // Update the flag
        
        int i = 0, j = w.size() - 1;
        while (i < j) {
            swap(w[i], w[j]);
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
    
    stringstream ss(s);
    
    string w;
    bool firstWord = true; // Add a flag to check if it's the first word
    while (ss >> w) {
        int i = 0, j = w.size() - 1;
        while (i < j) {
            swap(w[i], w[j]);
            i++;
            j--;
        }
        if (!firstWord) // If it's not the first word, print a space before the word
            cout << " ";
        cout << w;
        firstWord = false; // Update the flag after printing the first word
    }
    cout << endl; // Print a newline after all words are printed
    
    return 0;
}


int main() {
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    
    string w;
    bool firstWord = true;
    
    while (ss >> w) {
        int i = 0; j = w.size() - 1;
        while (i < j) {
            swap(w[i], w[j]);
            i++;
            j--;
        }
        if (!firstWord) {
            cout << " ";
        }
    }
    
    return 0;
}


// PROBLEM 3
// int main() {
//     string s;
//     getline(cin, s);
    
//     while (s.find("EGYPT") != -1) {
//         s.replace(s.find("EGYPT"), 5, " ");
//     }
    
//     cout << s << endl
    
//     return 0;    
// }



// PROBLEM ONE
int main() {
    string s;
    getline(cin, s);
    
    bool insideWord = false;
    int count = 0;
    
    for (char c:s) {
        if (isalpha(c)) { // Check is character is alpha or not
            if (insideWord == false) { // Check i'm inside word or not
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
