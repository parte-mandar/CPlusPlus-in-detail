#include <iostream> // third-party library (preprocessor)

int main(){ // Main must return int, somehow!
    std::cout<<"Namaskaram!"<<std::endl; // std is the namespace 
    int a;
    scanf("%d", &a); // A CProgram function to input
    std::cout<<"Value - "<<a<<std::endl;
}

// Any valid c code is also a valid cpp code