
#ifndef GUSTAV_LOWPASSFILTER_HPP
#define GUSTAV_LOWPASSFILTER_HPP


class LowPassFilter
{
public:
    int lowPassFilter(float target);

private:
    float alpha = 0.01;
    float prevValue = 0;
};


#endif //GUSTAV_LOWPASSFILTER_HPP