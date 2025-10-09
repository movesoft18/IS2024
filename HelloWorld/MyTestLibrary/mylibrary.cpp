#include "mylibrary.h"
#include <cmath>

namespace mylib
{

    int linearEquation(
        double a, // коэф а
        double b, // коэф b
        double& x        // корень
    )
    {
        if (a != 0)
        {
            x = -b / a;
            return 1;
        }
        if (b == 0)
        {
            return 2;
        }
        return 0;
    }

    bool isPrime(int number)
    {
        if (number < 2)
            return false;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
                return false;
        }
        return true;
    }

    int QuadraticEquation(double a, double b, double c,
        double& x1, double& x2)
    {
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    return 3;
                }
                else {
                    return 0;
                }
            }
            else {
                x1 = -c / b;
                return 1;
            }
        }
        else {

            double D = b * b - 4 * a * c;

            if (D < 0) {
                return 0;
            }
            else if (D == 0) {
                x1 = -b / (2 * a);
                return 1;
            }
            else {
                double sqrtD = sqrt(D);
                x1 = (-b + sqrtD) / (2 * a);
                x2 = (-b - sqrtD) / (2 * a);
                return 2;
            }
        }


    }
}