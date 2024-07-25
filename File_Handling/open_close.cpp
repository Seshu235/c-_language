#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Type 1
    ofstream myfile("filename.txt");
    if (myfile) {
        cout << "File opened Successfully." << endl;
    } else {
        cout << "File not opened" << endl;
    }
    myfile.close();

    // Type 2
    ofstream myfile1("qwerty.txt");
    if (myfile1.is_open()) {
        cout << "File opened Successfully!" << endl;
    } else {
        cout << "File not opened!" << endl;
    }
    myfile1.close();

    // Type 3
    ofstream myfile2("asdf.txt");
    if (myfile2.fail()) {
        cout << "File not opened!" << endl;
    } else {
        cout << "File opened Successfully!" << endl;
    }
    myfile2.close();
}