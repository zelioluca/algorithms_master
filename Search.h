//
// Created by luca on 17.3.2021.
//

#ifndef ALGORITHMS_SEARCH_H
#define ALGORITHMS_SEARCH_H

int SequentialSearch(int *input, int numberToSearch, int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        if(numberToSearch == input[i])
        {
            return i;
        }
    }

    return -1;
}

int BinarySearch(int *input, int numberToSearch, int start, int end)
{
    while(end >= start)
    {
        int m = (start + end) / 2;

        if(numberToSearch == input[m])
        {
            return m;
        }

        if(numberToSearch < input[m])
        {
            end = m - 1;
        }
        else
        {
            start = m + 1;
        }
    }

    return -1;
}

#endif //ALGORITHMS_SEARCH_H
