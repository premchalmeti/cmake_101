#include<iostream>
#include "greeter.h"

int main() {
    char username[50] = "Premkumar";
    char greeting[100];

    greet(username, greeting);

    std::cout<<greeting<<std::endl;

    return 0;
}
