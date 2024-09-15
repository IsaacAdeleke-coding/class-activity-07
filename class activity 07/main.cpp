//
//  main.cpp
//  class activity 07
//
//  Created by Isaac Adeleke on 9/15/24.
//

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

