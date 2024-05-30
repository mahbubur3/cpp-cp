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
int main() {
    // string s;
    // getline(cin, s);

    // stringstream ss;
    // ss << s;

    // string w;
    // while(ss >> w) {
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
}
