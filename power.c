#include "myMath.h"
#define Exponential 2.71828


double Exponent(int x) {

double exp=Exponential;

double power=1;


for( int i=0; i<x; i++)
{
    power= power* exp;
}
return power;
}


double Pow(double x , int y) { 

double result_power=1;

    for (int i = 0; i <y; i++)
    {
        result_power=result_power*x;
    }
    return result_power;
} 