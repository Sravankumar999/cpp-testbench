#include "../include/spdlog/spdlog.h"
#include "../include/plog/Log.h"
#include "../include/plog/Initializers/RollingFileInitializer.h"
#include "../include/plog/Appenders/ConsoleAppender.h"
// #include "../include/plog/Initializers/RollingFileInitializer.h"
#include "00log.h"


static plog::ConsoleAppender<plog::TxtFormatter> consoleAppender;


void loggerTest::spdLogTest(std::string msg)
{
    spdlog::info(msg);
}

void loggerTest::plogTest(std::string msg)
{

    plog::init(plog::verbose, &consoleAppender);
    PLOG_DEBUG << "===DEBUG===";
    PLOG_VERBOSE << "===VERBOSE===";
    PLOG_FATAL << "===FATAL===";
    std::cout<<"here";
}
