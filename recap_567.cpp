#include <bits/stdc++.h>
using namespace std;


/* <------ CHAPTER 5 -------> */
/* int main() {
    // string s = "New York City";
    // cout << s.size() << endl;

    // string s = "New York";
    // s.clear();
    // cout << s << endl;

    // string s;
    // cin >> s;
    // for (string::iterator it = s.begin(); it < s.end(); it++) {
    //     cout << *it << endl;
    // }

    // string s;
    // cin >> s;
    // for (string::iterator i = s.begin(); i < s.end(); i++) {
    //     cout << *i << endl;
    // }

    // string s;
    // cin >> s;
    // getline(cin, s);

    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // string w;
    // while (ss >> w) {
    //     cout << w << endl;
    // }

    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    int count = 0;
    while (ss >> w) {
        count++;
    }
    cout << count << endl;

    return 0;
} */


/* <------ CHAPTER 6 -------> */
/* int main() {
    // string s("Hello United States");
    // cout << s << endl;

    // string s("New York City", 8);
    // cout << s << endl;

    // string cityName = "New York City";
    // string s(cityName, 4);
    // cout << s << endl;

    // string s;
    // cin >> s;
    // for (char c:s) {
    //     cout << c << endl;
    // }
    return 0;
} */

/* void Words(stringstream& ss) {
    string w;
    if (ss >> w) {
        cout << w << endl;
        Words(ss);
    }
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    Words(ss);

    return 0;
} */

/* class Student {
    public:
        int id;
        string name;

        Student(int id, string name) {
            this->id = id;
            this->name = name;
        }

        void info() {
            cout << id << " " << name << endl;
        }
};

int main() {
    Student john(9001, "John Smith");
    john.info();

    return 0;
} */


/* Conceptual Session */
/* int main() {
    // string s;
    // getline(cin, s);

    // stringstream ss;
    // ss << s;

    // string w;
    // while(ss >> w) {
    //     cout << w << endl;
    // }

    return 0;
} */


/* int main() {
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
} */

int main() {
    // string s = "TheStateUniversityOfNewYork";
    // s.replace(8, 10, " ");
    // cout << s << endl;
    string s = "TheStateUniversityOfNewYork";
    s.replace(s.find("University"), 10, " ");
    cout << s << endl;

    return 0;
}

/*
int main() {
    string s = "TheStateUniversityOfNewUniversityYork"
    
    int count = 0;
    while (s.find("University") != -1) {
        s.replace(s.find("University"), 10, " ");
        count++;
    }
    
    cout << count << endl;

    return 0;
}
*/

int main() {
    string s;
    getline(cin, s);
    
    while (s.find("EGYPT") != -1) {
        s.replace(s.find("EGYPT"), 5, " ");
    }
    
    cout << s << endl;

    return 0;
}
