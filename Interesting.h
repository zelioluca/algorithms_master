//
// Created by luca on 30.3.2021.
//

#ifndef ALGORITHMS_INTERESTING_H
#define ALGORITHMS_INTERESTING_H

void Eratosthenes()
{
    static const int N = 10000;
    int i = 0;
    int a[N];
    for(i = 2; i < N; i++)
    {
        a[i] = 1;
    }
    for(i = 2; i < N; i++)
    {
        if(a[i])
        {
            for(int j = i; j*i < N; j++)
            {
                a[i*j] = 0;
            }
        }
    }
    for(i = 2; i < N; i++)
    {
        if(a[i])
        {
            std::cout << " " << i;

        }
    }
    std::cout << std::endl;



}

#endif //ALGORITHMS_INTERESTING_H
