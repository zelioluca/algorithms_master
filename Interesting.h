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

int FlipHead()
{
    return rand() < RAND_MAX / 2;
}

void FlipTheCoin(const char* first, const char* second)
{
    int i, j, ctn;
    int N = atoi(first);
    int M = atoi(second);
    int *f = new int[N + 1];
    for(j = 0; j <= N; j++) f[j] = 0;


    for(i = 0; i < M; i ++, f[ctn]++)
    {
        for (ctn = 0, j = 0; j <= N; j++)
        {
            if (FlipHead())
            {
                ctn++;
            }
        }
    }
    for(j = 0; j <= N; j++)
    {
        if(f[j] == 0) std::cout << ".";
        for(i = 0; i <f[j]; i+=10) std::cout << "*";
        std::cout << std::endl;
    }

}

#endif //ALGORITHMS_INTERESTING_H
