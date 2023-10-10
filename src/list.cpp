#include <iostream>
#include <list>

// using namespace std;

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

    myList.pop_front();
    myList.pop_back();

    for (int element: myList) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    auto it = myList.begin();
    ++it;
    myList.insert(it, 5);

    auto it2 = myList.end();
    myList.insert(it2, 8);

    for (int element: myList) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    std::cout << "Size :" << myList.size() << std::endl;

    myList.clear();
    std::cout << "Size :" << myList.size() << std::endl;

    return 0;
}