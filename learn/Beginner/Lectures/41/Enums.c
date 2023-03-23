#include <stdio.h>

// Enum : A special kind of data type defined by the user

enum Today {
        Saturday,
        Sunday,
        Monday=5,
        Tuesday,
        Wednesday,
        Thursday,
        Friday
};

int main(){
        // Declare a variable of type enum Today
        enum Today today = Monday;

        printf("Today : %d", today);
        
        return 0;
}