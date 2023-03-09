
//Everything you need to know to get started in C

#include <stdio.h>
#include <string.h>

struct address{

    char country[10];
    char state[10];
    char town[10];
    char local_gov[10];
    int street_number;
};

struct person{

    char firstname[10];
    char lastname[10];
    struct address addr;  //struct type within another struct
};

void initialize_struct(struct person& obj){
    
    char firstname[10];
    char lastname[10];
    
    printf("Enter firstname: ");
    strcpy(obj.firstname, gets(firstname));
    printf("Enter lastname: ");
    strcpy(obj.lastname, gets(lastname));    

}


int main(int argc, char *argv[]){

    //array of struct
    struct person container[5];
    for (int i = 0; i < 1; i++)
        initialize_struct(container[i]); 

    for (int i = 0; i < 1; i++)
        printf("firstname: %s\nlastname: %s\n", container[i].firstname, container[i].lastname); 

            
/*    	        	        
    //struct declaration and initialization.	        	        
    struct person person_;
    strcpy(person_.first_name, "olaoluwa");
    strcpy(person_.last_name, "adebayo");
    
    struct address addr;
    addr.street_number = 10;
    
    person_.addr  = addr;
    
    printf("%s %s %d\n", person_.first_name, person_.last_name, person_.addr.street_number);
    
*/            



return 0;
}


/*
Slide Page 1 - 10
  * Comment
  * Variables
  * Arrays
  * Structures



*/