#include "include/sep/active_power.hpp"

namespace sep
{
    ActivePower::ActivePower(sep::PowerOfTenMultiplierType multiplier, int16_t value)
    {
        multiplier_ = multiplier;
        value_ = value;
    }

    ActivePower::~ActivePower()
    {
        // do nothing
    }
} // namespace sep