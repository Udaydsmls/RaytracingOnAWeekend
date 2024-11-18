//
// Created by Uday S on 11/17/2024.
//

#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

using std::make_shared;
using std::shared_ptr;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265358979323846;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif //RTWEEKEND_H
