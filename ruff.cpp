#include <bits/stdc++.h>
using namespace std;


// Difference
/* int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long int result = (1LL * a * b) - (1LL * c * d);
    cout << "Difference = " << result;

    return 0;
} */


// G. Summation from 1 to N
/* int main() {
    int n;
    cin >> n;

    long long int sum = 1LL * n * (n + 1) / 2;
    cout << sum << endl;

    return 0;
} */


/* int main() { 
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
} */


/* int main() {
    int n, s, k;
    cin >> n;

    k = 1, s = (10 + n) / 2;
    for (int i = 0; i < ((10 + n) / 2) + 1; i++) {
        for (int j = 0; j < s; j++) {
            cout << " ";
        }

        for (int j = 0; j < k; j++) {
            cout << "*";
        }

        s--;
        k += 2;

        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << " ";
        }

        for (int j = 0; j < n; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
} */

/* int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    int flag = 1;
    if (r != c) {
        flag = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j || i + j == r - 1) {
                    if (a[i][j] != 1) {
                        flag = 0;
                    }
                } else if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
} */


int countVowels(char str[], int i) {

    // base case
    if (str[i] == '\0') {
        return 0;
    }

    int dueIndexes = countVowels(str, i + 1);

    // convert capital to small
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] += 32;
    }

    // check vowels or not
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
        return dueIndexes + 1;
    } else {
        return dueIndexes;
    }
}

int main() {
    char str[201];
    cin.getline(str, 201);

    int result = countVowels(str, 0);
    cout << result;

    return 0;
}


// Chapter 3.5
// Problem 1
// class Student {
//   public:
//     char name[50];
//     int roll;
//     char section[10];
//     int mathMarks;
//     int cls;
    
//     Student(char* name, int roll, char* section, int mathMarks, int cls) {
//       this->name = name;
//       this->roll = roll;
//       this->section = section;
//       this->mathMarks = mathMarks;
//       this->cls = cls;
//     }
// };

// int main() {
  
  
//   Student john, ray, jony;
  
//   char temp[50] = "John";
//   strcpy(john.name, temp);
  
//   john.roll = 20;
//   char tempTwo[10] = "AB";
//   strcpy(john.section, tempTwo);
//   john.mathMarks = 97;
//   john.cls = 9;
  
//   char tempThree[50] = "Ray";
//   strcpy(ray.name, tempThree);
//   john.roll = 10;
//   char tempFour[10] = "XY";
//   strcpy(ray.section, tempFour);
//   ray.mathMarks = 88;
//   ray.cls = 9;
  
//   char tempFive[50] = "Jony";
//   strcpy(jony.name, tempFive);
//   jony.roll = 40;
//   char tempSix[10] = "MN";
//   strcpy(jony.section, tempSix);
//   jony.mathMarks = 99;
//   jony.cls = 9;
  
//   if (john.mathMarks > ray.mathMarks && john.mathMarks > jony.mathMarks) {
//     cout << john.name;
//   } else if (ray.mathMarks > john.mathMarks && ray.mathMarks > jony.mathMarks) {
//     cout << ray.name;
//   } else {
//     cout << jony.name;
//   }
  
//   return 0;
// }


class Student {
  public:
    char name[30];
    int id;
    
    Student(const char* n, int i) {
        strcpy(name, n);
        id = i;
    }
};

int main() {
  Student mah("mahbubu", 9);
  cout << mah.name << mah.id;
  
  return 0;
}


// class Student {
//     public:
//         int id;
//         char name[50];
//         double gpa;
// };

// int main() {
//     Student a, b, c;
    
//     a.id = 95;
//     char temp[50] = "mahbub";
//     strcpy(a.name, temp);
//     a.gpa = 3.33;
    
//     b.id = 86;
//     char temp2[50] = "sakib";
//     strcpy(b.name, temp2);
//     b.gpa = 3.34;
    
//     c.id = 99;
//     char temp3[50] = "shabab";
//     strcpy(c.name, temp3);
//     c.gpa = 3.19;
    
//     cout << a.id << " " << a.name << " " << a.gpa << endl;
//     cout << b.id << " " << b.name << " " << b.gpa << endl;
//     cout << c.id << " " << c.name << " " << c.gpa << endl;
    
//     return 0;
// }


// Problem 2
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
  public:
    int jerseyNo;
    char country[50];
};

int main() {
  Cricketer* dhoni = new Cricketer;
  
  dhoni->jerseyNo = 10;
  char temp[50] = "India";
  strcpy(dhoni->country, temp);
  
  Cricketer* kohli = new Cricketer;
  
  kohli->jerseyNo = dhoni->jerseyNo;
  strcpy(kohli->country, dhoni->country);
  
  delete dhoni;
  
  cout << kohli->jerseyNo << endl;
  cout << kohli->country << endl;
  
  return 0;
}


// Module 5 & 6 practice
/* int main() {
    // string str("Hello United!");
    // cout << str << endl;

    // string str("Bangladesh", 4);
    // cout << str << endl;

    // string x = "Bangladesh";
    // string s(x, 4);
    // cout << s << endl;

    // string str(5, 'W');
    // cout << str << endl;

    // string str;
    // // cin >> str;
    // getline(cin, str);

    // sort(str.begin(), str.end());
    // cout << str << endl;

    // string str;
    // cin >> str;

    // for (int i = 0; i < str.size(); i++) {
    //     cout << str[i] << endl;
    // }

    // for (char c:str) {
    //     cout << c << endl;
    // }

    return 0;
} */


// string name = "John";
// string &studentName = name;
// cout << studentName << endl;

// void showText(string& s) {
//     s = "Singapore";
// }
// int main() {
//     string s = "Bangladesh";
//     showText(s);
//     cout << s << endl;
//     return 0;
// }

/* int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    while(ss >> w) {
        cout << w << endl;
    }
    return 0;
} */

/* void showWords(stringstream& ss) {
    string w;
    if (ss >> w) {
        cout << w << endl;
        showWords(ss);
    }
}
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    showWords(ss);

    return 0;
} */

/* class Student {
    public:
        string name;
        int age;

        Student(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void country() {
            cout << "Country: " << "NZ" << endl;
        }
};

int main() {
    Student taylor("Taylor", 39);
    cout << "Name: " << taylor.name << endl;
    cout << "Age: " << taylor.age << endl;
    taylor.country();

    return 0;
} */

/* class Cricketer {
    public:
        int jerseyNo;
        string country;
};

int main() {
    Cricketer* dhoni = new Cricketer;
    Cricketer* kohli = new Cricketer;

    dhoni->jerseyNo = 10;
    dhoni->country = "India";

    *kohli = *dhoni;

    delete dhoni;

    cout << kohli->jerseyNo << endl;
    cout << kohli->country << endl;

    return 0;
} */


/* class Student {
    public:
        string name;
        int id;
        string major;
        int mathMarks;

        Student(string name, int id, string major, int mathMarks) {
            this->name = name;
            this->id = id;
            this->major = major;
            this->mathMarks = mathMarks;
        }
};

int main() {
    Student john("John", 191, "Embedded Systems", 98);
    Student ray("ray", 838, "Biology", 95);
    Student zack("zack", 229, "Physics", 99);

    if (john.mathMarks > ray.mathMarks && john.mathMarks > zack.mathMarks) {
        cout << john.name << endl;
    } else if (ray.mathMarks > john.mathMarks && ray.mathMarks > zack.mathMarks) {
        cout << ray.name << endl;
    } else {
        cout << zack.name << endl;
    }

    return 0;
} */

class Employee {
    public:
        string name;
        int age;
        int salary;
        string department;

        Employee(string name, int age, int salary, string department) {
            this->name = name;
            this->age = age;
            this->salary = salary;
            this->department = department;
        }
};

int main() {
    Employee* smith = new Employee("John Smith", 29, 2500, "Accounting");
    cout << smith->name << endl;

    return 0;
}
