#include<iostream>
#include "./util/00log.h"
#include "../include/plog/Log.h"
#include "../include/plog/Initializers/RollingFileInitializer.h"

int main(){
    std::cout<<"INIT";
    //Testing if spdLog works
    loggerTest::spdLogTest("This is going to be looged");
    loggerTest::plogTest("PLOG test");
    return 0;
}