#include <stdio.h>
#include <stdlib.h>
// Sort An Array


// comparison function used by qsort
int compare(const void *a, const void *b){
        return (*(int*) a - *(int*)b);
}

int main(){

        int list[] = {2,8,6,1,9,7,3,5,4};
        int size = sizeof(list) / sizeof(int);
        printf("%i\n", sizeof(list));
        printf("%i\n", sizeof(int));
        // sort the array:
        // void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))

        qsort(list, size, sizeof(int),  compare);

        // print the sorted arrrays
        printf("\nMy Sorted Arrays : \n");

        for(int i = 0; i < size; i++){
                printf("%i\n", list[i]);
        }


        return 0;
}