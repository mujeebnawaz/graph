#include "Representation.cpp"
/*

*/
class AdjacencyMatrix : Representation {
   public:
   int displayRepresentation() override { 
      std::cout << "Derived Display Method";
        return 0;
   }
};

int main(){
   Representation rep;
   AdjacencyMatrix am;

   rep.displayRepresentation();
}