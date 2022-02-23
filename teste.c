#include <conio.h>
#include <stdio.h>
#include <string.h>
  
// Driver Code
int main()
{
    // Substitute the full file path
    // for the string file_path
    FILE* fp = fopen(nome_do_arquivo, "r"); //Open CSV File using File Pointer.
  
    if (!fp)
        printf("Can't open file\n");
  
    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1000000000]; //Extract the whole file data into a char buffer array.
        //Now initialize row and column variables with value 0.
        int row = 0;
        int column = 0;
  
        while (fgets(buffer, 1000000000 fp)) { 
            row++; 
  
            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (row == 1)
                continue;
  
            // Splitting the data
            char* value = strtok(buffer, "; ");
  
            while (value) {
                printf("%s", value);
                value = strtok(NULL, "; "); //Print data separated by a comma and increase the column variable.
            }
        }
  
        // Close the file
        fclose(fp);
    }
    return 0;
}