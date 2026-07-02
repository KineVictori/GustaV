
#include "LowPassFilter.hpp"

int lowPassFilter(const int target)
{
    constexpr float alpha = 0.01;
    float value = (alpha * target) + ((1 - alpha) * prevValue);
    float prevValue = value;

    return value;
}
