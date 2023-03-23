#include <stdio.h>

// Save a File:
// C:\Users\test\OneDrive\Desktop\ia.txt
// more info : https://www.programiz.com/c-programming/c-file-input-output
int main() {
        
        FILE *file;
        char content;
        //opening the file with read mode
        // we open streaming mode to read,edit,delete the file.
        file = fopen("C:\\Users\\test\\OneDrive\\Desktop\\ia.txt", "w"); //r, read | w, write

        if(file == NULL){
            printf("the file can't be opened \n");
            exit(1);
        }
        char text[50];
        printf("please enter your text : ");
        gets(text);
        fprintf(file, text); // write a data to text file
        // close the streaming mode of the file
        fclose(file);

        return 0;
}
