#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("filename.txt");
    if (myfile.fail()) {
        cout << "File open: Failed!\n";
    } else {
        cout << "File open: Success\n";
    }
    myfile << "wqiHYGIUHEQKWUHGEQIWUHGWJUGFESJUGJY\neiuhgiugjuwghju\nwqugfuyjquy\nwqiugfuyqiugh\nuyqw3tu7ftgqw7ufgi\nwqiuygiufq3eiugfqiu3egjuqh\nqiuygfiugqaiuewgfukqawhegku\nwqiutgfiuwqgukqkugh\nqwiutgfiueqk\n";

    myfile.close();

    ifstream my_file("filename.txt");
    if (my_file.fail()) {
        cout << "File open: failure\n";
    } else {
        cout << "File open: success\n";
    }

    string buffer;

    while (!my_file.eof()) {
        getline(my_file,buffer);
        cout << buffer << endl;
    }
}