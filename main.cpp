#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

struct cirle_dimensions
{
    float diam;
    float rad;
    float circum;
    float area;
};


cirle_dimensions calc_circle(float diam)
{   cirle_dimensions circle;
    circle.diam = diam;
    circle.rad = (diam / 2.0);
    circle.circum = diam * 3.14159;
    circle.area = (diam / 2.0)*(diam / 2.0) * 3.14159;
    return circle;
}


int main(void)
{
    cirle_dimensions c;
    string diam_string;
    printf("What is the circle diameter?");
    getline (cin, diam_string);
    float diam;
    stringstream(diam_string) >> diam;
    printf("Calculating circle dimensions for a circle diameter of %f \n", diam);
    c = calc_circle(diam);
    printf("Radius : %f\n", c.rad);
    printf("Diameter : %f\n", c.diam);
    printf("Circumference : %f\n", c.circum);
    printf("Area : %f\n", c.area);
    return 0;
}
