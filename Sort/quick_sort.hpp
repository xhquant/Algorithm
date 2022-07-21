#ifndef ALGORITHM_QUICK_SORT_HPP
#define ALGORITHM_QUICK_SORT_HPP

#include "common.hpp"

namespace ALGORITHM
{
    template<typename T>
    class quick_sort
    {
    public:
        void operator()(T list[], int begin, int end);

    private:
        int _partition(T list[], int begin, int end);
    };


    ////////////////////////////////////////////////////////////////////////
    /// \brief
    /// \tparam T
    /// \param list
    /// \param begin
    /// \param end
    /// \return
    template<typename T>
    inline int quick_sort<T>::_partition(T list[], int begin, int end)
    {
        int pivot_idx = RANDOM(begin, end);
        T pivot = list[pivot_idx];
        std::swap(list[begin], list[pivot_idx]);

        int i = begin + 1;
        int j = end;
        while (i <= j)
        {
            while ((i <= end) && (list[i] <= pivot))
            {
                ++i;
            }
            while ((j >= begin) && (list[j] > pivot))
            {
                --j;
            }
            if (i < j)
            {
                std::swap(list[i], list[j]);
            }
        }

        std::swap(list[begin], list[j]);
        return j;
    }


    ////////////////////////////////////////////////////////////////////////
    /// \brief
    /// \tparam T
    /// \param list
    /// \param begin
    /// \param end
    template<typename T>
    inline void quick_sort<T>::operator()(T list[], int begin, int end)
    {
        if (begin < end)
        {
            int pivot_idx = _partition(list, begin, end);
            this->operator()(list, begin, pivot_idx - 1);
            this->operator()(list, pivot_idx + 1, end);
        }
    }
}

#endif //ALGORITHM_QUICK_SORT_HPP