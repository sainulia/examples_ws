#include <iostream>
#include "Adder/adder.h"
//#include <MOKAConfig.h>
int main(int argc, char* argv[]){
    std::cout << "Hello, Welcome to EXample! \n";
    //std::cout<<"Project Version: "<<MOKA_VERSION_MAJOR<<"."<<MOKA_VERSION_MINOR<<"."<<MOKA_VERSION_PATCH<<"\n";
    // std::cout<<"Name = "<<argv[0]<<"\nPort: "<<argv[1]<<"\n";

    std::cout<<"Addition Result = "<<mymath::add(111,5)<<"\n";


}
