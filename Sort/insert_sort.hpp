#ifndef ALGORITHM_INSERT_SORT_HPP
#define ALGORITHM_INSERT_SORT_HPP


namespace ALGORITHM
{
    template<typename T>
    class insert_sort
    {
    public:
        void operator()(T list[], int numElements);
    };


    ////////////////////////////////////////////////////////////////////////
    /// \brief                  插入排序
    /// \tparam T               数据类型
    /// \param list             待排序数组
    /// \param numElements      数组元素个数
    template<typename T>
    inline void insert_sort<T>::operator()(T *list, int numElements)
    {
        int i, j;
        for (i = 1; i < numElements; ++i)
        {
            T currentElement = list[i];
            j = i - 1;
            while (j >= 0 && list[j] > currentElement)
            {
                list[j + 1] = list[j];
                --j;
            }
            list[j + 1] = currentElement;
        }
    }
}

#endif //ALGORITHM_INSERT_SORT_HPP
