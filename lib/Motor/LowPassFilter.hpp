
#pragma once

class LowPassFilter
{
public:
    int update(float target);

private:
    float alpha = 0.01;
    float prevValue = 0.0;
};
