/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string cpp_addressbook::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    cpp_addressbook::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}
