#include <iostream>
#include <string>

int main() {

    std::string test = "Hello world!";
    std::cout << test << std::endl;

    std::string name;
    std::getline(std::cin, name);
    std::cout << name << std::endl;

    name.push_back('h');
    name.append("sad");
    std::cout << name << std::endl;

    std::cout << test.find(" ") << std::endl;
    std::cout << test + ' ' + test << std::endl;

    unsigned int test_l = test.length();
    std::cout << test_l << std::endl;

    bool isEmpty = name.empty();
    std::cout << isEmpty << std::endl;

    return 0;
}
