#include <iostream>
#include <list>
#include <cstdlib>

int main()
{
    std::list<int> mylist;

    for (int i = 0; i <= 5; i++)
        mylist.push_back(rand() % 20);

    for (auto i : mylist)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}