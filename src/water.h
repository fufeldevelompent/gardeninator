#pragma once
#include <string>

struct Schedule {
    std::string mornings;
    std::string evenings;
};

Schedule default_schedule();
