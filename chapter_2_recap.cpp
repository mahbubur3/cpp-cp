#include <bits/stdc++.h>
using namespace std;

// DELETE ARRAY FROM MEMORY
int main() {
	int n;
	cin >> n;
	
	// Create dynamic array
	int *a = new int[n];
	
	// Input array
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	// Show array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	// New line
	cout << endl;
	
	// Delete array from memory
	delete[] a;
	
	// Show array after delete
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}


int main() {
	// Create dynamic array
	int *a = new int[3];
    
	// Create another array for copy
	int *b = new int[3];
    
	// Input array
	for (int i = 0; i < 3; i++) {
    	cin >> a[i];
    	b[i] = a[i]; // Copy all the elements from a array
	}
    
	// Check array copy from a
	for (int i = 0; i < 3; i++) {
    	cout << b[i];
	}

	return 0;
}


int main() {
	// Create dynamic array
	int *a = new int[3];
    
	// Create another array for copy
	int *b = new int[3];
    
	// Input array
	for (int i = 0; i < 3; i++) {
    	cin >> a[i];
    	b[i] = a[i]; // Copy all the elements from a array
	}
	
	// Delete a array
	delete[] a;
    
    // Increase size of a cause is static new int[3] is dynamic
    a = new int[5];
    
    // Copy all b elements to a
    for (int i = 0; i < 3; i++) {
        a[i] = b[i];
    }
    
    // Delte a array
    delete[] b;
    
    // Set elements to remaining positon
    a[3] = 100;
    a[4] = 500;
    
    // Show full array
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

	return 0;
}
