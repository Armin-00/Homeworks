#include <iostream>
#include <string>

int main() {
    std::string str = "User";
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        std::swap(str[i], str[len - i - 1]);
    }

    std::cout << str << std::endl;

    return 0;
}