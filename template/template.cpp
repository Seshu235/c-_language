#include <iostream>
using namespace std;

template <class T>
class Number {
    private:
    T num;
    public:
    Number(T n) : num(n) {}

    T getnum() {
        return num;
    }
};

int main(int argc, char const *argv[])
{
    Number<int> numberInt(7);

    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getnum() << endl;
    cout << "double Number = " << numberDouble.getnum() << endl;

    return 0;
}
