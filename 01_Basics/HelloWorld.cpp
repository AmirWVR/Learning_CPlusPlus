#include <iostream>

int main(){
    int x {4}, y{5};

    [[maybe_unused]] int z{7};

    std::cout << y + x - z;
    return 0;
}