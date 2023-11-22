#include <iostream>

class Alphabet {

};

int main() {
    Alphabet A;

    for (auto letter : A) {
        std::cout << letter << '';
    }
    return 0;
}