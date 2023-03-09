

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::vector;



#define STACK 100
class Stack{
    
    int* stack;
    int size;
    
    public:
    Stack(){
        stack = new int[STACK];
        size = 0;
    }
    
    void push(int data){
        if (size > STACK){
            cout << "stack storage is full" << endl;
            return;
        }
        
        stack[size] = data;
        size++;
    }
    
    int pop(){
        if (size == 0){
            cout << "stack is empty" << endl;
            return -1;
        };
        
        int data = stack[size - 1];
        size--;
        
        return data;
    }
    
    void peek(){
        cout << stack[size - 1] << endl;
    }
    
    
    void print_stack(){
        for (int i = 0; i < size; i++)
            cout << stack[i] << " --> ";
    }
    
    
};


int main(int argc, char *argv[]){
	
	 Stack s;
	 for (int i = 0; i < 100; i++)
	     s.push(i + 1);
	 
	 s.print_stack();
	
	
return 0;
}