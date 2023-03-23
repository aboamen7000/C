#include <stdio.h>
// Open a File:
// C:\Users\test\OneDrive\Desktop\ia.txt
// more info : https://www.programiz.com/c-programming/c-file-input-output
int main() {
        
        FILE *file;
        char content;
        //opening the file with read mode
        // we open streaming mode to read,edit,delete the file.
        file = fopen("C:\\Users\\test\\OneDrive\\Desktop\\ia.txt", "r");

        if(file == NULL){
            printf("the file can't be opened \n");
        }

        do
        {
            content = fgetc(file);
            printf("%c", content);
            /* code */
        } while (content != EOF); // indicates the end of input EOF
        
        // close the streaming mode of the file
        fclose(file);

        return 0;
}
