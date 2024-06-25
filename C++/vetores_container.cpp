#include <iostream>
#include <vecter>

int main() {
    std::vector<int> numbers:

        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);

        for (int number : numbers ){
            std::cout << number << " ";
        }
        std::cout << std::endl;

        return 0;
}