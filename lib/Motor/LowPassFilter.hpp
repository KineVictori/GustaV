
#pragma once

class LowPassFilter
{
public:
    int update(float target);

private:
    float _alpha = 0.01;
    float _prevValue = 0.0;
};
