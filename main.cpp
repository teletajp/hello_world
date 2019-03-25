#include <iostream>
#include "get_version.h"

 int main(int , char **)
 {
     std::cout << "build "<< get_version() << "\nHello, World!"<<std::endl;
     return 0;
 }
 
