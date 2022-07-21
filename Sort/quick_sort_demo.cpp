#include <iostream>

#include "common.hpp"
#include "quick_sort.hpp"

int main(int argc, char **argv)
{
    RANDOM_INIT();
    const int MAX_ELEMENTS = 10;
    int list[MAX_ELEMENTS];

    srand(time(nullptr));
    for (int i = 0; i < MAX_ELEMENTS; i++) list[i] = rand() % 100;

    printf("The list before sorting is:\n");
    ALGORITHM::print_list(list, MAX_ELEMENTS);

    ALGORITHM::quick_sort<int> quickSort;
    quickSort(list, 0, MAX_ELEMENTS - 1);

    printf("The list after sorting using quicksort algorithm:\n");
    ALGORITHM::print_list(list, MAX_ELEMENTS);

    return 0;
}