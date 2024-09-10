
#include <vector>
#include <string>
#include <iostream>

int main() {

    std::vector<std::string> vec;
    vec.push_back("test_package");

    std::cout<< "Testing conan 2 = " << vec[0] << std::endl;
}
