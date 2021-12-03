#include <iostream>
#include <limits>
#include "Debug.cpp"


int main(){
    
    // A simple integer value.
    int someNumber = 5;
    // A simple invalid pointer.
    void* ptr = nullptr;

    ptr = &someNumber;
    LOG(ptr);

}