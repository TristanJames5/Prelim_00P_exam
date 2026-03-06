#include <iostream>
#include <cstdlib>   // for rand()
using namespace std;

// makes an array with n random numbers
int* randArray(int n) {
    int *arr = new int[n];   // get memory
    for (int i = 0; i < n; i++) {
        arr[i] = rand();     // put random number
    }
    return arr;              // send back the array
}

int main() {
    // make 100 random numbers
    int *arr = randArray(100);

    // a) show numbers at odd places
    cout << "Odd index numbers:" << endl;
    for (int i = 1; i < 100; i += 2) {   // start at 1, jump by 2
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    // b) show numbers at places that are multiple of 3 or 5
    cout << "\nIndexes that are multiple of 3 or 5:" << endl;
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {  // check if divisible
            cout << "Index " << i << ": " << arr[i] << endl;
        }
    }

    // c) show all numbers one by one
    cout << "\nAll numbers:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << endl;
    }

    // free the memory
    delete[] arr;

    return 0;
}



