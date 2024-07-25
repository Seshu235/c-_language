#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream myfile;
    myfile.open("asdf.txt", ios::app);
    if (myfile.fail()) {
        cout << "File open: failure\n";
    } else {
        cout << "File open: success\n";
    }

    myfile << "welcome\n";
    myfile << "to\n";
    myfile << "the\n";
    myfile << "world\n";
    myfile << "seshu babu\n";

    myfile.close();

    string line;

    myfile.open("asdf.txt", ios::in);
    if (myfile.fail()) {
        cout << "File open: failure\n";
    } else {
        cout << "File open: sucess\n";
    }

    while (!myfile.eof()) {
        cout << myfile.peek() << endl;
        getline(myfile, line);
        cout << line <<endl;
    }
    myfile.close();
    return 0;
}
