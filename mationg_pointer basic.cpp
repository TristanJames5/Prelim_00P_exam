#include <iostream>
using namespace std;

int main() {
    // A. Declare two (type double) pointer variables
    double *d_var;
    double *d_array;

    // B. Dynamically allocate memory
    d_var = new double;          // single double
    d_array = new double[10];    // array of 10 doubles

    // C. Input and display value for d_var
    cout << "Enter a double value: ";
    cin >> *d_var;
    cout << "You entered: " << *d_var << endl;

    // D. Initialize array values to 1.0
    for (int i = 0; i < 10; i++) {
        d_array[i] = 1.0;
    }

    cout << "Array values: ";
    for (int i = 0; i < 10; i++) {
        cout << d_array[i] << " ";
    }
    cout << endl;

    // E. Deallocate memory
    delete d_var;
    delete[] d_array;

    return 0;
}
