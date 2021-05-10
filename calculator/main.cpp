#include<iostream>
#include "adder.h"
#include "substractor.h"
#include "print_result.h"

int main() {
    int n1, n2;
       
    std::cout<<"Enter no1: ";
    std::cin>>n1;

    std::cout<<"Enter no2: ";
    std::cin>>n2;

    std::cout<<"Operations on "<<n1<<", "<<n2<<"\n";

    std::cout<<n1<<" + "<<n2<<" = ";
    print_result(add(n1, n2));

    std::cout<<n1<<" - "<<n2<<" = ";
    print_result(substract(n1, n2));

    return 0;

}
