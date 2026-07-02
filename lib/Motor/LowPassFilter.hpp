
#ifndef GUSTAV_LOWPASSFILTER_HPP
#define GUSTAV_LOWPASSFILTER_HPP


class LowPassFilter
{
public:
    int lowPassFilter(int target);
    float prevValue = 0;
    float value = 0;
};


#endif //GUSTAV_LOWPASSFILTER_HPP