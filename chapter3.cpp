#include <bits/stdc++.h>
using namespace std;

// Create class
// class Student {
//     public:
//         int id;
//         double gpa;
//     };

// int main() {
//     Student a;
//     a.id = 163895;
//     a.gpa = 3.3;
    
//     cout << a.id << " " << a.gpa;
    
//     return 0;
// }


// class Student {
//     public:
//         int id;
//         double gpa;
// };

// int main() {
//     Student a, b;
//     a.id = 95;
//     a.gpa = 3.3;
//     b.id = 85;
//     b.gpa = 3.4;
    
//     cout << a.id << " " << a.gpa << endl;
//     cout << b.id << " " << b.gpa << endl;
    
//     return 0;
// }


// Create class with string
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


// User input
// class Student {
//     public:
//         int id;
//         char name[50];
//         double gpa;
// };

// int main() {
//     Student a, b;
//     cin >> a.id >> a.name >> a.gpa;
//     cin >> b.id >> b.name >> b.gpa;
    
//     cout << a.id << " " << a.name << " " << a.gpa << endl;
//     cout << b.id << " " << b.name << " " << b.gpa << endl;
    
//     return 0;
// }


// User input name have space
// class Student {
//     public:
//         int id;
//         char name[50];
//         double gpa;
// };

// int main() {
//     Student a, b;
    
//     cin >> a.id;
//     cin.getline(a.name, 50);
//     cin >> a.gpa;
    
//     cin >> b.id;
//     cin.getline(b.name, 50);
//     cin >> b.gpa;
    
//     cout << a.id << " " << a.name << " " << a.gpa << endl;
//     cout << b.id << " " << b.name << " " << b.gpa << endl;
    
//     return 0;
// }


// class Student {
//     public:
//         char name[100];
//         int id;
//         double gpa;
// };

// int main() {
//     Student a, b;
    
//     cin.getline(a.name, 100);
//     cin >> a.id >> a.gpa;
    
//     getchar();
    
//     cin.getline(b.name, 100);
//     cin >> b.id >> b.gpa;
    
//     cout << a.name << " " << a.id << " " << a.gpa << endl;
//     cout << b.name << " " << b.id << " " << b.gpa << endl;
    
//     return 0;
// }



// Constructor
/*
class Student {
    public:
        int roll;
        int cls;
        double gpa;
        
        Student(int r, int c, double g) {
            roll = r;
            cls = c;
            gpa = g;
        }
};

int main() {
    Student john(23, 5, 4.5);
    Student jack(20, 3, 4.8);
    
    cout << john.roll << " " << john.cls << " " << john.gpa << endl;
    cout << jack.roll << " " << jack.cls << " " << jack.gpa << endl;
    
    return 0;
}
*/


// Constructor with pointer array
/*
class Laptop {
    public:
        int year;
        int ram;
        int storage;
        double display;
        
        Laptop(int year, int ram, int storage, double display) {
            this->year = year;
            this->ram = ram;
            this->storage = storage;
            this->display = display;
        }
};

int main() {
    Laptop apple(2020, 8, 256, 13.6);
    Laptop samsung(2021, 16, 512, 15.6);
    Laptop dell(2023, 8, 256, 16);
    
    cout << apple.year << " " << apple.ram << " " << apple.storage << " " << apple.display << endl;
    cout << samsung.year << " " << samsung.ram << " " << samsung.storage << " " << samsung.display << endl;
    cout << dell.year << " " << dell.ram << " " << dell.storage << " " << dell.display << endl;
    
    return 0;
}
*/


// RETURN OBJECT FROM FUNCTion
/*
class Student {
    public:
        int id;
        int cls;
        double gpa;
        
        Student(int id, int cls, double gpa) {
            this->id = id;
            this->cls = cls;
            this->gpa = gpa;
        }
};

Student info() {
    Student john(23, 9, 4.5);
    
    return john;
}

int main() {
    Student result = info();
    cout << result.id << result.cls << result.gpa;
    
    return 0;
}
*/

// Sort array using sort()
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n); // Ascending
    // sort(a, a + n, greater<int>()); // Descending
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}



// RUFF ===================== RUFF
/*
class Car {
    public:
        char brandName[20];
        int modelYear;
        char engine[20];
        double lengthInInch;
        char bodyType[50];
        int seats;
        int wheelDrive;
};

int main() {
    Car audi, mercedes, bmw;
    
    cin.getline(audi.brandName, 20);
    cin >> audi.modelYear;
    cin.getline(audi.engine, 20);
    cin >> audi.lengthInInch;
    cin.getline(audi.bodyType, 50);
    cin >> audi.seats >> audi.wheelDrive;
    
    getchar();
    
    cin.getline(mercedes.brandName, 20);
    cin >> mercedes.modelYear;
    cin.getline(mercedes.engine, 20);
    cin >> mercedes.lengthInInch;
    cin.getline(mercedes.bodyType, 50);
    cin >> mercedes.seats >> mercedes.wheelDrive;
    
    getchar();
    
    cin.getline(bmw.brandName, 20);
    cin >> bmw.modelYear;
    cin.getline(bmw.engine, 20);
    cin >> bmw.lengthInInch;
    cin.getline(bmw.bodyType, 50);
    cin >> bmw.seats >> bmw.wheelDrive;
    
    cout << "Brand: " << audi.brandName << endl;
    cout << "Model Year: " << audi.modelYear << endl;
    cout << "Engine: " << audi.engine << endl;
    cout << "Length: " << audi.lengthInInch << endl;
    cout << "Body Type: " << audi.bodyType << endl;
    cout << "Seats: " << audi.seats << endl;
    cout << "Drive Wheel: " << audi.wheelDrive << endl;
    
    cout << "Brand: " << mercedes.brandName << endl;
    cout << "Model Year: " << mercedes.modelYear << endl;
    cout << "Engine: " << mercedes.engine << endl;
    cout << "Length: " << mercedes.lengthInInch << endl;
    cout << "Body Type: " << mercedes.bodyType << endl;
    cout << "Seats: " << mercedes.seats << endl;
    cout << "Drive Wheel: " << mercedes.wheelDrive << endl;
    
    cout << "Brand: " << bmw.brandName << endl;
    cout << "Model Year: " << bmw.modelYear << endl;
    cout << "Engine: " << bmw.engine << endl;
    cout << "Length: " << bmw.lengthInInch << endl;
    cout << "Body Type: " << bmw.bodyType << endl;
    cout << "Seats: " << bmw.seats << endl;
    cout << "Drive Wheel: " << bmw.wheelDrive << endl;
        
    return  0;
}
*/
/*
class Car {
    public:
        char brandName[20];
        int modelYear;
        char engine[20];
        double lengthInInch;
        char bodyType[50];
        int seats;
        int wheelDrive;
        
        Car(char brandName[20], int modelYear, char engine[20], double lengthInInch, char bodyType[50], int seats, int wheelDrive) {
            this->brandName = brandName;
            this->modelYear = modelYear;
            this->engine = engine;
            this->lengthInInch = lengthInInch;
            this->bodyType = bodyType;
            this->seats = seats;
            this->wheelDrive = wheelDrive;
        }
};

int main() {
    Car audi("Audi", 2020, "V8 Turbo", 110.5, "Saloon", 4, 4);
    
    cout << audi.brandName << audi.modelYear << audi.engine << audi.lengthInInch << audi.bodyType << audi.seats << audi.wheelDrive << endl;
        
    return  0;
}
*/
