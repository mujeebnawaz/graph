#include <iostream>
#include <string>
class Representation {
  
   protected:
    int id; 
    std::string representationName;

    /**
     * Method to add an edge to the Graph. 
     * Should return a value of number of edges added successfully. 
     * Should return non 
    */
    int virtual addEdge( u, v ) = 0;

    int virtual addVertex( std::array edges,  ) = 0;
};
