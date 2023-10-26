

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>


using std::cout;
using std::cin;
using std::endl;
using std::string;


void add_one(int* array, int n){
    for (int i = 0; i < n; i++)
        array[i]++;
}

typedef struct {
  int x;
  int y;
} Point;
  
typedef struct{
    char first_name[50];
    char last_name[50];
    int age;
    
} Student;

void Print_Info(Student* s){
    cout << s->first_name << endl << s->last_name << endl << s->age << endl;
}

void Print_Info(Student s){
    cout << s.first_name << endl << s.last_name << endl << s.age << endl;
}

int main(int argc, char *argv[]){
      
    /*
    int array[5] {1, 2, 3, 4, 5};
    add_one(array + 2, 5);
    
    for (int& var: array)
        cout << var << "  ";
    
    cout << endl;
    
    #define SIZE 5
    int* memory_block = (int*) malloc( sizeof(int) * SIZE );
    for (int i = 0; i < SIZE; i++ ){
        cout << "Enter data: ";
        cin >> memory_block[i];
        cout << memory_block[i] << endl;
    }
    
    free(memory_block);
    
    int* memory_block2 = (int*) calloc(SIZE, sizeof(int));
    for (int i = 0; i < SIZE; i++)
        cout << *(memory_block + i) << endl;
    
    free(memory_block2);
    */
    
    
    int* memory_block3 = NULL;
    int block_size = 2;
    int pointer = 0;
    memory_block3  = (int*) malloc(sizeof(int) * block_size);
    
    int input = 0;
    
    while (input != -1){
        if (pointer == block_size){
            block_size += 2;
            memory_block3 = (int*) realloc(memory_block3, sizeof(int) *  block_size);
            printf("Memory block is full. Increased by  %d bytes\n", (sizeof(int) * block_size) / 2);      }
        }
        
        printf("Enter (-1 to quit): ");
        scanf("%d", &input);
        if (input != -1){
            memory_block3[pointer] = input;
            pointer++;
        }
        
    }
    
     free(memory_block3);
   
    
   // Point p1 = {.y = 5, .x = 2};
   // cout << p1.x << "  " << p1.y << endl;
    
    Student s1;
    strcpy(s1.first_name, "Ola");
    strcpy(s1.last_name, "Adebayo");
    s1.age = 24;
    Print_Info(s1);
    
    cout << endl << endl;
    
    Student* s2 = (Student*) calloc(1, sizeof(Student));
    s2->age = 26; //(*s2).age = 23;
    strcpy(s2->first_name, "Seun");
    strcpy(s2->last_name, "Adebayo");
    Print_Info(s2);
    free(s2);
    
return 0;
}
