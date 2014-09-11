//ree_sort.h
//sorting functions in ree's namespace

#ifndef _REE_SORT
#define _REE_SORT

namespace ree {
    //insertion_sort: insert the number to the ordered output queue one by one
    template<typename _Tp>
    void insertion_sort(_Tp _first, _Tp _last) {
        for(_Tp i=_first+1; i<_last; i++) {
            _Tp j = i;
            typename std::iterator_traits<_Tp>::value_type tmp = *i;
            while (j>_first && tmp < *(j-1)) {
                *j = *(j-1);
                j--;
            }
            *j = tmp;
        }
    }

    template<typename _Tp, typename _comp>
    void insertion_sort(_Tp _first, _Tp _last) {
        for(_Tp i=_first+1; i<_last; i++) {
            _Tp j = i;
            typename std::iterator_traits<_Tp>::value_type tmp = *i;
            while (j>_first && _comp(i, j-1)) {
                *j = *(j-1);
                j--;
            }
            *j = tmp;
        }
    }
}

#endif
