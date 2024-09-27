#include "Figure.h"

Figure::Figure(unsigned int sides_count, std::string name)
    : sides_count{sides_count}, name{name} {}

Figure::Figure() : Figure(0, "Фигрура") {}

unsigned int Figure::get_sides_count() { return sides_count; }

std::string Figure::get_name() { return name; }
