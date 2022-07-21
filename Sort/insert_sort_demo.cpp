#include <iostream>

#include "time.h"

#include "common.hpp"
#include "insert_sort.hpp"

int main(int argc, char **argv)
{
    const int MAX_ELEMENTS = 10;
    int list[MAX_ELEMENTS];

    srand(time(nullptr));
    for (int i = 0; i < MAX_ELEMENTS; ++i) list[i] = rand() % 100;

    printf("The list before sorting is:\n");
    ALGORITHM::print_list(list, MAX_ELEMENTS);

    ALGORITHM::insert_sort<int> insertSort;
    insertSort(&list[0], MAX_ELEMENTS);

    printf("The list after sorting using insertion sort algorithm:\n");
    ALGORITHM::print_list(list, MAX_ELEMENTS);

    return 0;
}