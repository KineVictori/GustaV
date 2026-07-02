
#include "LowPassFilter.hpp"

int LowPassFilter::lowPassFilter(float target)
{
    float value = (alpha * target) + ((1 - alpha) * prevValue);
    prevValue = value;

    return value;
}
