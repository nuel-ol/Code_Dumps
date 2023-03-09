










#include <iostream>

using std::cout;
using std::cin;
using std::endl;



class Queue{
    
    int* queue;
    int size;
    
    public:
    
    Queue(){
        queue = new int[100];
        size = 0;
    }
    
    void add(int data){
        if (size > 100){
            cout << "queue storage filled" << endl;
            return;
        }
        
        queue[size++] = data;
        
    }
    
    void remove(){
        if (size == 0){
            cout << "Queue is empty";
            return;
        }
        
        for (int i = 0 ; i < size - 1 ; i++)
            queue[i] = queue[i + 1];
            
        size--;
    }
    
   
    void print(){
        if (size == 0){
            cout << "Queue is empty";
            return;
        }
        
        for (int i = 0 ; i < size ; i++)
            cout << queue[i] << " <-- ";
    }
};

int main(){
    
        Queue q1;
        q1.add(1); 
        q1.add(2);
        q1.add(3);
        q1.add(4);
        
        q1.remove();
        q1.print();
    
    
    
    
return 0;
}