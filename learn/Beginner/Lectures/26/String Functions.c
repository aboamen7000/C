#include <stdio.h>
#include <string.h>

// String Functions

int main(){
   char username[] = "iA";
   char name[] = "Ibrahim";

   // strlwr   : lower case
   // strupr   : upper case
   // strlen   : length of the strings
   // strcat   : appends string_2 to string_1
   // strncat  : append x chars of string_2 to string_1
   // strcpy   : copy string_2 to string_1
   // strncpy  : copy x chars of string_2 to string_1


   // strlwr(name);                     // ibrahim
   // strupr(name);                     // IBRAHIM
   // strcat(name,username);            // IbrahimiA
   // strncat(name, username, 1);       // Ibrahimi
   // strcpy(name,username);            // iA
   // strncpy(name, username, 2);       // iArahim

   // strset(name, '?');                // set all characters of a string to a given character
   // strnset(name, '?', 2);            // set specific x char of a string to a given character
   // strrev(name);                     // set specific x char of a string to a given character
   // printf("%s", name);




   // int res = strlen(name);                 // returns string length as int
   // int res = strcmp(name,username);        // string compare all
   // int res = strnicmp(name,username,2);    // string compare x char
   // printf("%d", res);



   return 0;
}