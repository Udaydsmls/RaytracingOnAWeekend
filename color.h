//
// Created by Uday S on 11-11-2024.
//

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "interval.h"

using color = vec3;

inline double linear_to_gamma(double linear_component) {
    if (linear_component > 0)
        return std::sqrt(linear_component);
    return 0;
}

void write_color(std::ostream &out, const vec3 &pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    r = linear_to_gamma(r);
    g = linear_to_gamma(g);
    b = linear_to_gamma(b);

    static const interval intensity(0.000, 0.999);
    const int r_byte = static_cast<int>(256 * intensity.clamp(r));
    const int g_byte = static_cast<int>(256 * intensity.clamp(g));
    const int b_byte = static_cast<int>(256 * intensity.clamp(b));

    out << r_byte << " " << g_byte << " " << b_byte << "\n";
}


#endif //COLOR_H
