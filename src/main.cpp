#include <iostream>
#include "my_folder/function.h"

/*
 * The main function can be used to call your function.
 */
int main() {
    for (int i = 0; i < 5; ++i) {
        std::cout << i << "+1=" << foo(i) << std::endl;
    }
}