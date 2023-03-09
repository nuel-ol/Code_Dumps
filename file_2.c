

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    
    FILE* fp = fopen("file.txt", "w");
    fprintf(fp, "hello");
    
   /* 
    char* s;
    s = "Emma";
    for (int i = 0; s[i] != '\0';  i++){
          printf("Address of %c is %p\n", s[i], (s + i));
          if (s[i+1] == '\0')
              printf("Address of \\0 is %p\n", (s + i));
    }
    */
   
    
    
    
    
    
    
    /*
    
    //A program that manipulates a file depending on user input.
    printf("Enter Filename: ");
    char filename[20];
    scanf("%s", filename);
    
    printf("Do you want to write to file?");
    char option[4];
    scanf("%s", option);
    
    char buffer[50];
    if (option == "y" || option == "Y"){
      
        FILE* write_file = fopen("hello.txt", "w");
      
        if (write_file == NULL){
            printf("Error opening file\n");
            return 1;
        }
      
        scanf("%s", buffer);
        fprintf(write_file, "%s\n", buffer);
        fclose(write_file);
     }
    
    else{
        FILE* read_file = fopen(filename, "r");
        
        if (read_file == NULL){
            printf("Error opening file\n");
            return 1;
        }
        
       fscanf(read_file, buffer);   
       printf("%s\n", buffer);
       fclose(read_file);
       }
     
     */


return 0;	
}