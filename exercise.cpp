
#include <iostream>
using namespace std;
int average(int a = 1, int b = 1);
double average(double a = 1, int b = 1);
int main(int argc, char const *argv[])
{
    cout << average(4, 5) << endl;
    cout << average(4.5, 13) << endl;

    return 0;
}

double average(double a, int b)
{
    return (a + b) / 2;
}

int average(int a, int b)
{
    return (a + b) / 2;
}