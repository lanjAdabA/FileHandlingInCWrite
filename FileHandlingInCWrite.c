// FileHandlingInCWrite

#include <stdio.h>

int main() {

FILE *filepointer;

// Created Open the existing one

// Not created create a new file

// w or write mode overwrites the dato ***

filepointer = fopen( "C:\\Users\\Saurav\\CLionProjects\\C-Training\\FileHandling\\f1.txt",  "w");

if (filepointer == NULL) {

printf( "Error Opening File!\n");



return 1;

}


// fprintf() -> This is used to write data into a text file

fprintf( filepointer, "Hello World!\n");

fclose(
 filepointer);

return 0;}