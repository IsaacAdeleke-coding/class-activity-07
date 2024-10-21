# Class Activity 07: Storing and Displaying Names

This C++ program prompts the user to input three names and then displays the first name entered. The names are stored in an array, and the program utilizes a loop to gather the inputs from the user.

## Program Overview

1. The program defines an array of strings to store three names.
2. A `for` loop is used to prompt the user to input each name one by one.
3. The first name entered is then displayed to the user.

### Code Snippet

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array to store the names
    string names[3];

    // Asking the user for three names
    for(int i = 0; i < 3; i++) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Printing the first name
    cout << "\nThe first name is: " << names[0] << endl;

    return 0;
}
Example Input/Output
Example:

Enter name 1: Alice
Enter name 2: Bob
Enter name 3: Charlie

The first name is: Alice
How to Compile and Run

To compile the program, use the following command:
g++ main.cpp -o NameDisplay
To run the compiled program, use:
./NameDisplay

Features

Prompts the user to input three names.
Stores the names in an array.
Displays the first name entered.
