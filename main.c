#include "matrix.h"
#include <stdio.h>

int main() {
    array *test2 = arange_int64(0, 100000000, 1);
    areshape(test2, acshape(3, 10, 10, -1));
    aprint(test2);
    array *sli = aslice(test2, 1, 2, 2, 3, 3, 5);
    aprint(sli);
    //printf("%lu\n", aindex(sli, 2, 3));
    afree(test2);
}
