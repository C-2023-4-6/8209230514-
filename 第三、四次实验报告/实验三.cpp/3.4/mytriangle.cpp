#include <math.h>
#include<iostream>
#include "mytriangle.h"

bool is_valid(double side1, double side2, double side3) 
{
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) 
    {
        return 0;
    }
    double s = (side1 + side2 + side3) / 2;
    if (s <= side1 || s <= side2 || s <= side3) {
        return 0;
    }
    return 1;
}
double double_area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}