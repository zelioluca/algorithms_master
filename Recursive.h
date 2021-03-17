//
// Created by luca on 17.3.2021.
//

#ifndef ALGORITHMS_RECURSIVE_H
#define ALGORITHMS_RECURSIVE_H

int Factorial(int number)
{
    if(number > 1)
    {
        return number * Factorial(number -1);
    }
    else
    {
        return 1;
    }
}

#endif //ALGORITHMS_RECURSIVE_H
