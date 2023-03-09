

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

using std::string;


class Square{
    
    public:
        
        Square(){
            length = 0;
            color = "Black";
        }
        
        Square(int set_length, string set_color){
            length = set_length;
            color = set_color;
        }
        
        Square(int length_){
            length = length_;
            color = "Yellow";
        }
    
        int length;
        string color;
        
        void print(){
            cout << "length: " << length;
            cout << "\tcolor: " << color << endl;
        }
    
};


int main(int argc, char *argv[]){
    
    /*
    Creating an array of objects of size N (of a type Square) creates N objects in the array.
    An implicit constructor is created for the class Square if no constructor is created explicitly.
    The members of objects in  the arrays are initialized using the implicit constructor if an explicit one is not provided.
    
    For primitive types like int, float... members, the implicit constructor assign them gabbage values
    However, for string type, the implicit constructor assign them the value of the string default constructor,
    which is an empty string.
    
    
    If a default constructor is explicitly defined, the array elements are initialized with it.
    if a custom constructor (that has parameters) is created also, you have to specify how to construct the array object elements.
    if a custom constructor is created and no default constructor is, the array object elements must be initialized using tue custom constructor
    Otherwise, you hve a compile error: No matching constructor for initialization of ....
    */
    
    //initialize object using Square class default constructor
    Square array_of_squares[5];
    
    for (int i = 0; i < 5; i++)
        array_of_squares[i].print();
    
    cout << endl;
    
    //initialize objects using Square class custom constructor.
    Square array_of_squares2[5] = {Square(2, "Red") , Square(3, "Pink") , Square(4, "Brown")};
     

    for (int i = 0; i < 5; i++)
        array_of_squares2[i].print();
    
    cout << endl;
   
    
    //initialize some of the array objects using Square class custom constructor.
    //while the others uses the default constructor.
    Square array_of_squares3[5] = {Square(2, "Red")};
    
    for (int i = 0; i < 5; i++)
        array_of_squares3[i].print();
    
    cout << endl;
   
   
      //initialize some of the array objects using Square class custom constructor that takes only length as parameter
      //while the others uses the default constructor.
      //{1, 2, 3} is same as Square(Square(1) , Square(2) , Square(3)};)
      Square array_of_squares4[5] = {1, 2, 3};
      
      
      for (int i = 0; i < 5; i++)
          array_of_squares4[i].print();
    
      cout << endl;
   
   
return 0;
}