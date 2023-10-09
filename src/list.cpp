#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_front(3);

    std::cout << "List :";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }

    try
    {
        if (myList.front() != 3) {
            throw std::runtime_error("first is not 3");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "error is: " << e.what() << '\n';
    }
    

    std::cout << std::endl;

    return 0;
}