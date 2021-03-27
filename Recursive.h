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

void BinaryRecursive(int n, char*input)
{
    if(n < 1)
    {
        std::cout << *input << std::endl;
    }
    else
    {
        *(input - 1) = 0;
        BinaryRecursive(n-1, input);
        *(input -1) = 1;
        BinaryRecursive(n-1, input);
    }
}

void StringGenerator(int n, int k, char*input)
{
    if(n < 1)
    {
        std::cout << input << std::endl;
    }
    else
    {
        for(int j = 0; j < k; j++)
        {
            *(input -1) = j;
            StringGenerator(n -1, k, input);
        }
    }
}



#endif //ALGORITHMS_RECURSIVE_H
