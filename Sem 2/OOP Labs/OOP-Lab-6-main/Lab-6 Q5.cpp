#include <iostream>
#include <fstream> // Include the file stream library

using namespace std;

int main() {
    // Create and open a text file
    ofstream myfile("test.txt");

    // Check if the file was successfully opened
    if (myfile.is_open()) {
        // Write some text to the file
        myfile << "Hello, this is a test file.\n";
        myfile << "C++ programming is fun!\n";

        // Close the file
        myfile.close();
        cout << "Text has been written to the file." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}

