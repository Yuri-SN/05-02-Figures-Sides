#pragma once

#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(std::string figureName, unsigned int lengthA, unsigned int lengthB,
             unsigned int lengthC, unsigned int angleA, unsigned int angleB,
             unsigned int angleC);

    Triangle(unsigned int lengthA, unsigned int lengthB, unsigned int lengthC,
             unsigned int angleA, unsigned int angleB, unsigned int angleC)
        : Triangle("Треугольник", lengthA, lengthB, lengthC, angleA, angleB,
                   angleC) {}

    void printLengths() const override;
    void printAngles() const override;

private:
    unsigned int m_lengthA{};
    unsigned int m_lengthB{};
    unsigned int m_lengthC{};

    unsigned int m_angleA{};
    unsigned int m_angleB{};
    unsigned int m_angleC{};
};
