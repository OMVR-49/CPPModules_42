#include "easyfind.hpp"
#include <vector>
#include <list>
int main() {
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(17);
    vec.push_back(9);
    vec.push_back(11);

    try {
        std::vector<int>::const_iterator it = easyfind(vec, 6);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::vector<int>::const_iterator it = easyfind(vec, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(3);
    lst.push_back(17);
    lst.push_back(9);
    lst.push_back(11);

    try {
        std::list<int>::const_iterator it = easyfind(lst, 17);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
