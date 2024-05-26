#include <bits/stdc++.h>
using namespace std;


// For copy string you don't need to use strcpy like. just reasign text. 
// int main() {
//     string text = "Hello";
//     text = "Hello Australia!"; // Automatically increase size
//     cout << text << endl;
    
//     return 0;
// }


/*
// Comparison in C and C++
int main() {
    // C
    // char x[10] = "Classic";
    // char y[10] = "Classic";
    // if (strcmp(x, y) == 0) {
    //     printf("Same");
    // } else {
    //     printf("Different");
    // }
    
    // C++
    string x = "Classic";
    string y = "Standard";
    if (x == y) {
        cout << "Same";
    } else {
        cout << "Different";
    }
    
    return 0;
}
*/

/*
String built-in functions
1. Capacity
    a. s.size() -> returns the size of the string.
    b. s.max_size() -> returns the maximum size that string can hold.
    c. s.capacity() -> returns current available capacity of the string.
    d. s.clear() -> clear the string.
    e. s.empty() -> return true/false if the string is empty.
    f. s.resize() -> change the size of the string.

2. Element access
    a. S[i] -> access the ith index of the string.
    b. s.at(i) -> access the ith index of the string.
    c. s.back() -> access the last element of the string.
    d. s.front() -> access the first element of the string.
    
3. Modifiers
    a. s+= -> append another string.
    b. s.append() -> append another string.
    c. s.push_back() -> add character to the last of the string.
    d. s.pop_back() -> remove the last character of the string.
    e. s= -> assign string.
    f. s.assign() -> assign string.
    g. s.erase() -> erase characters from the string.
    h. s.replace() -> replace a portion of the string.
    i. s.insert() -> insert a portion to a specific position.

4. Iterators
    a. s.begin() -> pointer to the first element.
    b. s.end() -> pointer to the next element after the last element of the string.
*/

/*
int main() {
    // size
    // string s = "hello new world";
    // cout << s.size();
    
    
    // capacity - automatically increase size
    // string s = "welcome to the uae";
    // cout << s.capacity() << endl;
    // s = "welcome to the united states";
    // cout << s.capacity() << endl;
    
    
    // clear - if i need clear string or delete
    // string s = "welcome";
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;
    
    
    // empty
    // string t = "good";
    // if (t.empty() == true) {
    //     cout << "Empty";
    // } else {
    //     cout << "Not Empty";
    // }
    
    // string t = "good";
    // t.clear();
    // if (t.empty() == true) {
    //     cout << "Empty";
    // } else {
    //     cout << "Not Empty";
    // }
    
    // Without empty function
    // string t = "good";
    // if (t.size() == 0) {
    //     cout << "empty";
    // } else {
    //     cout << "not empty";
    // }
    
    
    // resize
    // string s;
    // cin >> s;
    // s.resize(5);
    // cout << s << endl;
    
    // string s;
    // cin >> s;
    // s.resize(10, 'z'); // automatically put z remaining position
    // cout << s << endl;
    
    string s;
    cin >> s;
    s.resize(5);
    cout << s << endl;
    s.resize(11, 'z');
    cout << s << endl;
    
    return 0;
}
*/


/*
int main() {
    // string s;
    // cin >> s;
    // cout << s[0] << endl; // First index [use most of the time]
    
    // Built-in function
    // string s;
    // cin >> s;
    // cout << s.at(0) << endl; // First index
    
    // string s;
    // cin >> s;
    // cout << s.front() << endl; // First index
    
    
    // string s;
    // cin >> s;
    // cout << s[s.size() - 1] << endl; // Means n-1 last index
    
    // Built-in function
    string s;
    cin >> s;
    cout << s.back() << endl; // Last index [use most of the time]
    
    return 0;
}
*/


/*
int main() {
    // Append string
    // string n = "Hello";
    // string m = "United";
    // // n += m; // n = n + m
    // n.append(m);
    // cout << n << endl;
    
    
    // Add & delete character in last
    // string n = "united";
    // n.push_back('K');
    // n.pop_back();
    // cout << n << endl;
    
    
    // Delete, Replace & Insert
    // string str = "UnitedArabEmirates";
    // str.erase(5, 2); // 5 - index start, 2 - how many character
    // cout << str << endl;
    
    // string str = "UnitedArabEmirates";
    // str.replace(5, 2, "XB");
    // cout << str << endl;
    
    string str = "UnitedEmirates";
    str.insert(6, "WXYZ");
    cout << str << endl;
    
    return 0;
}
*/

/*
// STRING ITERATOR - this work with pointer
int main() {
    // string s;
    // cin >> s;
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }
    
    // string s;
    // cin >> s;
    // cout << *s.begin() << endl; // first pointer. begin() is pointer so if i need first pointer i need to dereference
    // cout << *(s.end() - 1) << endl; // last pointer
    
    
    // Now loop through with pointer
    // string s;
    // string::iterator it;
    // cin >> s;
    // for (it = s.begin(); it < s.end(); it++) {
    //     cout << *it << endl; // need dereference
    // }
    
    string s;
    cin >> s;
    for (string::iterator it = s.begin(); it < s.end(); it++) {
        cout << *it << endl;
    }
    
    // string s;
    // cin >> s;
    // for (auto it = s.begin(); it < s.end(); it++) { // Updated version 14, 17, 20
    //     cout << *it << endl;
    // }
    
    return 0;
}
*/


/*
// String input with spaces
int main() {
    // string s;
    // cin >> s; // This works with without spaces
    // cin.getline(s, 20); // This works with array string like char s[100]
    
    // getline(cin, s); // That's it in c++ string. So proper way to use this if i need input string with space otherwise use cin >> s.
    // cout << s << endl;
    
    
    // But in getline there is a problem if i press enter after integer geline will receive the enter and output
    // show only integer on the otherhand cin doesn't get that. To solve this just use cin.ignore() or getchar(). This will
    // ignore enter
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    cout << n << endl;
    cout << s << endl;
    
    return 0;
}
*/


// Stringstream
int main() {
    
    // Print words
    string s;
    getline(cin, s);
    // stringstream ss(s); // Or
    stringstream ss;
    ss << s;
    string word;
    while(ss >> word) {
        cout << word << endl;
    }
    
    // Words count
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    int count = 0;
    while(ss >> word) {
        count++;
    }
    cout << count << endl;
    
    return 0;
}
