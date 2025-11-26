#include <iostream>
 
using namespace std;

// how arrays behave wgeb oassed to functions ( pointers ) 
// first we will create a function 

void arrayPointer(int arr[], int size) { 

    for ( int i = 0 ; i < size; i++ ) { 
    cout << "\t Element at index : " << i << " " << arr[i] << endl;
    }
}


int main() {

// Arrays (1D) 


// decclaring and initializing an array 
int arr[6] = {20, 30, 39 , 40, 40, 40 }; 
// now we acccess it with a for loop 
for ( int i=0; i < 6; i++ ) { 
    // printout the varlues inside 
    cout << "Element at indix " << i  << " "  << arr[i] << endl; 
}

    int numbers[5] = {10, 20, 30, 40, 50}; // printed out 
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    } 

cout << "------------------------" << endl;
// Another example
int randomArray[20] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20,
                        22, 24, 26, 28, 30, 32, 34, 36, 38, 20 };
    // Accessinf elements using loops . 
    for (int i = 0; i< 20 ; i++ ) { 
        cout<< " Elemnt at index : " << i <<" " << randomArray[i] << endl; 
    }

cout << " ------------------------" << endl;

cout << "\t another text \n"  ; 
 
// declare and intializing arrays 
int array2[5] = { 10 , 9 , 8 ,7 ,4};   // acceess the array with a for loop 
for ( int i = 0; i < 5; i++ ) { 
    cout << " Element at indix :" << i  <<  " "  << array2[i] << endl;
}
 
cout << " ------------------------" << endl;

//How arrays behave when passed to functions (pointer decay)


arrayPointer(array2, 5); 
// Using arrays inside simple algorithms
 






    return 0;
}