//
// Created by Uday S on 11-11-2024.
//

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ostream &out, const vec3 &pixel_color) {
    const auto r = pixel_color.x();
    const auto g = pixel_color.y();
    const auto b = pixel_color.z();

    const int r_byte = static_cast<int>(255.99 * r);
    const int g_byte = static_cast<int>(255.99 * g);
    const int b_byte = static_cast<int>(255.99 * b);

    out << r_byte << " " << g_byte << " " << b_byte << "\n";
}


#endif //COLOR_H
