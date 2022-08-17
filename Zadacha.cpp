/*
Задача:
Дано додатні дійсні значення s, v, t. Об’єм резервуару складає s, л. 
Для його наповнення можуть бути використані дві труби,
причому швидкість наповнення резервуара через першу трубу на v, л/хв менше швидкості його наповнення через другу трубу. 
Якщо для наповнення резервуару використовується перша труба, він наповнюється на t, хв довше, ніж через другу. 
Скільки літрів за хвилину проходить через першу трубу?
*/

#include <iostream>
#include <string>
#include <cmath>

#include "Header.h"

int main()
{
    //Input:
    double s = getInput("s, litres (volume of pool)");
    double v = getInput("v, litres/minuter (delta of speeds of pipe)");
    double t = getInput("t, minutes (delta of times to fill up the swim)");
    
    //Math: calculate result: 1) calculate t1, 2) calculate V1
    //1)calculate t1
    double b{v * t};;
    double a{ v };
    double c{ t };
    double D{ pow( b, 2 ) - ( 4 * a * c )};

    if (D < 0)
    {
        printEr("Disriminant < 0.");
        return 0;
    }

    double x1{ -( -b + pow(D, 0.5)) / 2 * a };
    double x2{ -( -b - pow(D, 0.5)) / 2 * a };

    if (x1 == t)
    {
        double x1 = x2;
    }
    else if ( x2 == t )
    {
        double x2 = x1;
    }

    //2)calculate V1
    double V1{ s / x1 };
    double V_1{ s / x2 };

    //Print:
    std::cout << "Final result(speed of pipe #1): " << V1 << '\t' << '\t' << V_1;

    return 0;
}