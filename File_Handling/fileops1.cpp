#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream myfile("filename.txt");
    if (myfile.fail()) {
        cout << "File open: failed\n";
    } else {
        cout << "File open: success\n";
    }
#if 0
    myfile << "welcome\n";
    myfile << "to\n";
    myfile << "the\n";
    myfile << "world\n";
    myfile << "seshu\n";
    myfile << "babu\n";
#endif
#if 1
    string line;
    
    while (!myfile.eof()) {
        getline(myfile, line);
        cout << line << endl;
    }
#endif
    myfile.close();

    return 0;
}