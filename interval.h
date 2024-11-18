//
// Created by Uday S on 11/17/2024.
//

#ifndef INTERVAL_H
#define INTERVAL_H
#include "rtweekend.h"

class interval {
public:
    double min, max;

    interval(): min(+infinity), max(-infinity) {
    }

    interval(double min, double max): min(min), max(max) {
    }

    double size() const {
        return max - min;
    }

    bool contains(double value) const {
        return min <= value && value <= max;
    }

    bool surrounds(double value) const {
        return min < value && value < max;
    }

    static const interval empty, universe;
};

const interval interval::empty = interval(+infinity, -infinity);
const interval interval::universe = interval(-infinity, +infinity);

#endif //INTERVAL_H
