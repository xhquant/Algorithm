#ifndef ALGORITHM_COMMON_HPP
#define ALGORITHM_COMMON_HPP

#include "stdio.h"
#include "time.h"

#define RANDOM_INIT()   srand(time(nullptr))
#define RANDOM(L, R)    (L + rand() % ((R) - (L) + 1)) // gen a random integer in [L, R]

namespace ALGORITHM
{
    template<typename T>
    static void print_list(T &list, int count)
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d\t ", list[i]);
        }
        printf("\n");
    }
}

#endif //ALGORITHM_COMMON_HPP