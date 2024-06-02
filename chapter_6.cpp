#include <bits/stdc++.h>
using namespace std;


// String constructor
/*
int main() {
    // string = "Hello World";
    // string s("Hello World"); // This is constructor
    
    // string s("hello world", 4); // Show 4 characters
    
    // string m = "hello world";
    // string s(m, 4); // Show all characters except first 4
    
    string s(10, 'X'); // Print 10 X
    
    cout << s << endl;
    
    return 0;
}
*/


// Sort string
int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
    
    return 0;
}


// Range based for loop for string
int main() {
    string s;
    cin >> s;
    
    // Here we find index+element
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }
    
    // Shortcut - Here we find only element
    for (char c:s) {
        cout << c << endl;
    }
    // [Note: If we need index then we need to write first loop]
    
    return 0;
}



// Reference
int main() {
    string food = "pizza";
    string &meal = food;
    
    cout << meal << endl;
}


void showText(string& str) {
    str = "World";
}

int main() {
    string str = "Hello";
    showText(str);
    cout << str << endl;
    
    return 0;
}
*/

// Word printing
int main() {
    string s;
    getline(cin , s);
    
    stringstream ss;
    ss << s;
    
    string w;
    while(ss >> w) {
        cout << w << endl;
    }
    
    return 0;
}


// Word printing with recursion
void showWords(stringstream& ss) {
    string w;
    if (ss >> w) {
        cout << w << endl;
        showWords(ss);
    }
}

int main() {
    string str;
    getline(cin, str);
    
    stringstream ss(str);
    showWords(ss);
    
    return 0;
}


// Word printing with recursion reverse
void showWords(stringstream& ss) {
    string w;
    if (ss >> w) {
        showWords(ss);
        cout << w << endl;
    }
}

int main() {
    string str;
    getline(cin, str);
    
    stringstream ss(str);
    showWords(ss);
    
    return 0;
}


// FUNCTION INSIDE CLASS
class Student {
    public:
        int id;
        string name;
        double gpa;
        
        Student(int id, string name, double gpa) {
            this->id = id;
            this->name = name;
            this->gpa = gpa;
        }
        
        void showText() {
            cout << "From US!" << endl;
        }
};

int main() {
    Student john(9001, "John Smith", 3.33);
    john.showText();
    cout << john.id << " " << john.name << " " << john.gpa;
    
    return 0;
}


class Student {
    public:
        int id;
        string name;
        double gpa;
        
        Student(int i, string n, double g) {
            id = i;
            name = n;
            gpa = g;
        }
        
        void showInfo() {
            cout << id << endl;
            cout << name << endl;
            cout << gpa << endl;
        }
};

int main() {
    Student john(9001, "John Smith", 3.33);
    john.showInfo();
    
    return 0;
}


class Student {
    public:
        int id;
        string name;
        double gpa;
        int mathMarks;
        int physicsMarks;
        
        Student(int id, string name, double gpa, int mathMarks, int physicsMarks) {
            this->id = id;
            this->name = name;
            this->gpa = gpa;
            this->mathMarks = mathMarks;
            this->physicsMarks = physicsMarks;
        }
        
        void showInfo() {
            cout << id << endl;
            cout << name << endl;
            cout << gpa << endl;
        }
        
        int totalMarks() {
            return mathMarks + physicsMarks;
        }
};

int main() {
    Student john(9001, "John Smith", 3.33, 98, 94);
    john.showInfo();
    cout << john.totalMarks();
    
    return 0;
} */


class Person {
    public:
        string name;
        int age;

        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

int main() {
    // Create dynamic object
    Person* john = new Person("John Dalson", 27);
    Person* zack = new Person("Zack Smith", 28);
    // Copy
    // john->name = zack->name;
    // john->age = zack->age; // Or
    *john = *zack;
    // Delete
    delete zack
    // Print
    cout << john->name << " " << john->age << endl;

    return 0;
} */


// Practice
class Student {
    public:
        int id;
        string name;
        string major;
        double gpa;

        Student(int id, string name, string major, double gpa) {
            this->id = id;
            this->name = name;
            this->major = major;
            this->gpa = gpa;
        }
};

int main() {
    Student* toy = new Student(901, "Toy", "CS", 3.39);
    Student* zack = new Student(801, "Zack", "EE", 3.89);
    *zack = *toy;
    delete toy;
    cout << zack->id << " " << zack->name << " " << zack->major << " " << zack->gpa;

    return 0;
}


// NAMESPACES
namespace john {
    int age = 28;
}
int main() {
    cout << john::age << endl;
    return 0;
}


namespace zack {
    void info() {
        cout << "From zack namespace" << endl;
    }
}
namespace toy {
    void info() {
        cout << "From toy namespace" << endl;;
    }
}
int main() {
    zack::info();
    toy::info();
    return 0;
}


namespace zack {
    int age = 29;
}
namespace toy {
    int age = 30;
}
int main() {
    cout << zack::age << endl;
    // cout << toy::age << endl;
    return 0;
}
