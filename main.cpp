#include <iostream>

int f(bool x) {
    if (x) {
        std::cout << "A\n";
    } else {
        std::cout << "B\n";
    }
}

int main() {
    f(true);
    return 0;
}
