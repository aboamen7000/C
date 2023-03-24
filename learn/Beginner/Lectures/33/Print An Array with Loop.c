#include <stdio.h>
// array   : a data structure that can store many values of same data type.
int main(){
    
    int people_id[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
 
    // printf("%d", sizeof(people_id)); total bytes = 80
    // printf("%d", sizeof(people_id[0])); every item = 4 bytes


    for (int i = 0; i <= sizeof(people_id)/sizeof(people_id[0]) ; i++)
    {
        printf("%i\n", people_id[i]);
        /* code */
    }
    

    return 0;
}
