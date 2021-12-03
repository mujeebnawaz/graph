#include <iostream>
struct Representation {
    
    virtual int displayRepresentation(){
        std::cout << "Main Display Method";
        return 0;
    }
};