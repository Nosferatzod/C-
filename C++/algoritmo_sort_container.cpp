#include <iostream>
    #include <vector>
    #include <algorithm>

    int main(){
        std::vector<int> numbers = {4, 2, 5 , 1, 3}; 
        
        std::sort(numbers.begin(), numbers.end());

        for (int number : numbers){
            std::cout << std::endl;
        }
        return 0;
    }