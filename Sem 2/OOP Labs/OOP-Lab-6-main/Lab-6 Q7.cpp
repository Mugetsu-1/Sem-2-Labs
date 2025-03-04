#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, address;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your address: ";
    getline(cin, address);

    // Create and open a text file
    ofstream outFile("user_info.txt");

    // Check if the file was successfully opened
    if (outFile.is_open()) {
        // Write user input to the file
        outFile << "Name: " << name << endl;
        outFile << "Address: " << address << endl;
        outFile.close();
        cout << "Data has been written to the file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Open the text file for reading
    ifstream inFile("user_info.txt");

    // Check if the file was successfully opened
    if (inFile.is_open()) {
        string line;
        cout << "Reading from the file:" << endl;
        // Read the file line by line
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}

