
#include "LowPassFilter.hpp"

int LowPassFilter::update(float target)
{
    float currValue = (_alpha * target) + ((1 - _alpha) * _prevValue);
    _prevValue = currValue;

    return currValue;
}



