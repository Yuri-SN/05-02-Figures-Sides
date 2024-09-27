#pragma once

#include <string>

class Figure {
public:
    Figure(unsigned int sides_count, std::string name);
    Figure();

    unsigned int get_sides_count();
    std::string get_name();

    virtual void printLengths() const = 0;
    virtual void printAngles() const = 0;

protected:
    unsigned int sides_count{};
    std::string name{};
};
