//
// Created by Uday S on 11-11-2024.
//

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "interval.h"

using color = vec3;

void write_color(std::ostream &out, const vec3 &pixel_color) {
    const auto r = pixel_color.x();
    const auto g = pixel_color.y();
    const auto b = pixel_color.z();

    static const interval intensity(0.000, 0.999);
    const int r_byte = static_cast<int>(256 * intensity.clamp(r));
    const int g_byte = static_cast<int>(256 * intensity.clamp(g));
    const int b_byte = static_cast<int>(256 * intensity.clamp(b));

    out << r_byte << " " << g_byte << " " << b_byte << "\n";
}


#endif //COLOR_H
