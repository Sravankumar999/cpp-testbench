#include<iostream>
#include "./util/00log.h"


int main(){
    std::cout<<"INIT";
    //Testing if spdLog works
    loggerTest::spdLogTest("This is going to be looged");
    
    return 0;
}