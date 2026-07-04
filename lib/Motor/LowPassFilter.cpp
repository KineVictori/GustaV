
#include "LowPassFilter.hpp"

int LowPassFilter::update(float target)
{
    float currValue = (alpha * target) + ((1 - alpha) * prevValue);
    prevValue = currValue;

    return currValue;
}



