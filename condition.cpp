#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    int id;
    char name[100];
    char section[90];
    int totalMarks;
};

int main() {
  Student x, y, z;
  
  cin >> x.id >> x.name >> x.section >> x.totalMarks;
  cin >> y.id >> y.name >> y.section >> y.totalMarks;
  cin >> z.id >> z.name >> z.section >> z.totalMarks;
  
  if (x.totalMarks > y.totalMarks && x.totalMarks > z.totalMarks) {
    cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
  } else if (y.totalMarks > x.totalMarks && y.totalMarks > z.totalMarks) {
    cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;  
  } else if (z.totalMarks > x.totalMarks && z.totalMarks > y.totalMarks) {
    cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
  }
  
  if (x.totalMarks == y.totalMarks && x.totalMarks == z.totalMarks) {
      if (x.id < y.id && x.id < z.id) {
          cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
      } else if (y.id < x.id && y.id < z.id) {
          cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;
      } else {
          cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
      }
  } else {
      if (x.totalMarks == y.totalMarks) {
          if (x.id < y.id) {
              cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
          }
      } else if (x.totalMarks == z.totalMarks) {
          if (x.id < z.id) {
              cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;
          }
      } else if (y.totalMarks == z.totalMarks) {
          if (y.id < z.id) {
              cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
          }
      }
  }

  return 0;
}

// c

#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    int id;
    char name[100];
    char section[90];
    int totalMarks;
};

int main() {
  Student x, y, z;
  
  cin >> x.id >> x.name >> x.section >> x.totalMarks;
  cin >> y.id >> y.name >> y.section >> y.totalMarks;
  cin >> z.id >> z.name >> z.section >> z.totalMarks;
  
  if (x.totalMarks > y.totalMarks && x.totalMarks > z.totalMarks) {
    cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
  } else if (y.totalMarks > x.totalMarks && y.totalMarks > z.totalMarks) {
    cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;  
  } else if (z.totalMarks > x.totalMarks && z.totalMarks > y.totalMarks) {
    cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
  } else {
      if (x.totalMarks == y.totalMarks && x.totalMarks == z.totalMarks) {
          if (x.id < y.id && x.id < z.id) {
              cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
          } else if (y.id < x.id && y.id < z.id) {
              cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;
          } else {
              cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
          }
      } else if (x.totalMarks == y.totalMarks) {
          if (x.id < y.id) {
              cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
          } else {
              cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;
          }
      } else if (x.totalMarks == z.totalMarks) {
          if (x.id < z.id) {
              cout << x.id << " " << x.name << " " << x.section << " " << x.totalMarks << endl;
          } else {
              cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
          }
      } else if (y.totalMarks == z.totalMarks) {
          if (y.id < z.id) {
              cout << y.id << " " << y.name << " " << y.section << " " << y.totalMarks << endl;
          } else {
              cout << z.id << " " << z.name << " " << z.section << " " << z.totalMarks << endl;
          }
      }
  }

  return 0;
}

