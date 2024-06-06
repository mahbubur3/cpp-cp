#include <iostream>
#include <algorithm>

using namespace std;

// Input: abzckczcbkkzzkk
// Output: kkkkkzzzzcccbba

class Freq {
    public:
        char value;
        int count;
};

// Comparison
// bool cmp(Freq x, Freq y) {
//     if (x.count > y.count) { // return x.count > y.count
//         return true;
//     } else {
//         return false;
//     }
// }

// When two or more then two value count are same then sort alphabetic order
bool cmp(Freq x, Freq y) {
    if (x.count > y.count) {
        return true;
    } else if (x.count < y.count) {
        return false;
    } else {
        if (x.value < y.value) {
            return true;
        } else {
            return false;
        }
    }
    // Shortcut
    // if (x.count == b.count) {
    //     return x.value < b.value;
    // } else {
    //     return x.count > b.count;
    // }
}

int main() {
    string s;
    cin >> s;
    
    // Set character and his count
    Freq a[26];
    for (int i = 0; i < 26; i++) {
        a[i].value = char(i + 97);
        a[i].count = 0;
    }
    
    // Check count zero set or not
    // for (int i = 0; i < 26; i++) {
    //     cout << a[i].value << " " << a[i].count << endl;
    // }
    
    // Set count of each value
    for (char c : s) {
        int asciiValue = int(c - 97);
        a[asciiValue].count++;
    }
    
    // Check count increase or not
    // for (int i = 0; i < 26; i++) {
    //     cout << a[i].value << " " << a[i].count << endl;
    // }
    
    // Sort
    sort(a, a + 26, cmp);
    
    // Print
    // for (int i = 0; i < 26; i++) {
    //     if (a[i].count > 0) { // Show when value have count greater then zero
    //         cout << a[i].value << " " << a[i].count << endl;
    //     }
    // }
    
    // Print result
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < a[i].count; j++) {
            cout << a[i].value;
        }
    }
    
    return 0;
}
