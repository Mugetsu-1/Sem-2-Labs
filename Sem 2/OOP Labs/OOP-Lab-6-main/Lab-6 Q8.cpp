#include <iostream>
#include <fstream>
#include <string>

class Student {
private:
    std::string stdname;
    int mark;

public:
    void setDetails(const std::string& name, int marks) {
        stdname = name;
        mark = marks;
    }

    void getDetails() const {
        std::cout << "Name: " << stdname << ", Marks: " << mark << std::endl;
    }

    void writeToFile(const std::string& filename) const {
        std::ofstream outFile(filename, std::ios::binary);
        if (outFile.is_open()) {
            size_t nameLength = stdname.size();
            outFile.write(reinterpret_cast<const char*>(&nameLength), sizeof(nameLength));
            outFile.write(stdname.c_str(), nameLength);
            outFile.write(reinterpret_cast<const char*>(&mark), sizeof(mark));
            outFile.close();
        } else {
            std::cerr << "Unable to open file for writing." << std::endl;
        }
    }

    void readFromFile(const std::string& filename) {
        std::ifstream inFile(filename, std::ios::binary);
        if (inFile.is_open()) {
            size_t nameLength;
            inFile.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
            stdname.resize(nameLength);
            inFile.read(&stdname[0], nameLength);
            inFile.read(reinterpret_cast<char*>(&mark), sizeof(mark));
            inFile.close();
        } else {
            std::cerr << "Unable to open file for reading." << std::endl;
        }
    }
};

int main() {
    Student student;
    student.setDetails("ElloYello", 85);

    // Write to file
    student.writeToFile("D:\\studentfile.txt");

    // Create another student object to read from file
    Student anotherStudent;
    anotherStudent.readFromFile("D:\\studentfile.txt");

    // Display the details
    anotherStudent.getDetails();

    return 0;
}
