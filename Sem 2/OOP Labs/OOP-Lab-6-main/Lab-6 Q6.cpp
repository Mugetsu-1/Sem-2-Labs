#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Create and open a text file for writing
    ofstream outFile("test.txt");

    // Check if the file was successfully opened
    if (outFile.is_open()) {
        // Write some text to the file character by character
        string text = "Hello, this is a test file.";
        for (char c : text) {
            outFile.put(c);
        }
        outFile.close();
        cout << "Text has been written to the file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Open the text file for reading
    ifstream inFile("test.txt");

    // Check if the file was successfully opened
    if (inFile.is_open()) {
        char c;
        cout << "Reading from the file:" << endl;
        // Read the file character by character
        while (inFile.get(c)) {
            cout << c;
        }
        inFile.close();
        cout << endl << "Text has been read from the file." << endl;
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}

