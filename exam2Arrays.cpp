#include <iostream>
 
using namespace std;

// how arrays behave wgeb oassed to functions ( pointers ) 
// first we will create a function 

void arrayPointer(int arr[], int size) { 

    for ( int i = 0 ; i < size; i++ ) { 
    cout << "\t Element at index : " << i << " " << arr[i] << endl;
    }
}



// attempt 2 : 

void attempt2 (int attempt2[], int sizeAttempt3) { 
    for ( int i = 0; i < sizeAttempt3; i++  ) { 
        cout << " Elements in :" << i << " " << attempt2[i] << endl; 
        } 

}

void addSun ( int calNum1[], int calnum2[]) { 
    for ( int i = 0; i < 5; i++ ) { 
        cout << " Sum of elements at index " << i << " : " << calNum1[i] + calnum2[i] << endl; 
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
 


cout << " attempt 2: " << " ------------------------" << endl;


cout << "\t \n"; 
//Arrays(1D) 
// declarung and inita lizing an array


int arrayForTheSecoondAttempt[5]= {1,6,8,9,5};
int sizeAttempt3= 5;

cout <<"\t \n  ------------------------" << endl;
attempt2(arrayForTheSecoondAttempt, sizeAttempt3);


cout << " \t \n ------------------------" << endl; 
cout << " \t SEARCHING ----" << endl; 


return 0 ; 



}