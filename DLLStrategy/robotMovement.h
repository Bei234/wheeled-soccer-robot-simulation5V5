#pragma once
#include <iostream>
#include "platform.h"
static float angle_;
using std::min;
using std::max;

template<typename T>
inline void run(Simuro::Robot& robot, const T left_speed, const T right_speed)
{
    if (left_speed >= 0.f) {
        robot.wheel.leftSpeed = min(125.f, left_speed);
    }
    else {
        robot.wheel.leftSpeed = max(-125.f, left_speed);
    }

    if (right_speed >= 0.f) {
        robot.wheel.rightSpeed = min(125.f, right_speed);
    }
    else {
        robot.wheel.rightSpeed = max(-125.f, right_speed);
    }
}

void Go_1(Simuro::Robot& robot, const float x, const float y);