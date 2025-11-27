#include <iostream> 


using namespace std; 



// learn searching 


// first declare an array to search. 
int main () { 

int arrayToSearch[] = {1,2,3,4,5};  
int sizeToSearch = 5; 
int target;  // this is the numnber that we are lookinh for 

cout << "Array elements " << endl;  
for ( int i = 0; i < sizeToSearch; i++ ) {
    cout << arrayToSearch[i] << " " ;
}
cout << endl;  // will print the array with a loop . 



cout << " Enter a number to search :" << endl; 
cin >> target;

bool found = false;
for(int i = 0; i < sizeToSearch; i++ ) { 
    if ( target == arrayToSearch[i] ) { 
        cout << " \n " << target << " : " << " found at index : " << i << endl; 
        found = true;
        break;
    }
}
if (!found) { 
    cout << " \n We were unable to find the varible in the array " << endl; 
    cout << " \t \n Try again  " << endl;  
}
  
// returning index and returning -1 as returnting -1 is returning the number not found. 



cout <<" \t \n New attempt: Lear Searching attempt 2 : " << endl; 

int arrayToSearch2[] = { 1,2,3,4,5,6,7,8 }; 
int sizeOfArrayToSearch2 = 8; 
int target2 ; 

bool found2 = false; 


for (int i = 0; i < sizeOfArrayToSearch2; i++) {
    cout << arrayToSearch2[i] << " ";
}
cout << endl;
// printing out the array 
   cout << " Enter the number to search :" << endl;
    cin >> target2; 

for ( int i = 0; i < sizeOfArrayToSearch2; i++ ) { 
 
    
    if ( target2 == arrayToSearch2[i]) { 
        cout << " \n Hi we have found the number " << target2 << " at index " << i << endl; 
        found2 = true;
        break;
    }
  




}


cout << " \n \t New attempt 3 : Searching " << endl; 

int newarray[] = {10,20,30,40,50};
int sizeNewArray = 5;
int target3 ; 


cout << "Enter the target to search : " <<endl;
cin >> target3; 

for ( int i = 0 ; i < sizeNewArray; i++ ) { 
    cout << " array element : " << newarray[i] << " \n" ;



if(target3 == newarray[i]) { 
    cout << " \n the number : " << target3 << " is in the array at indec " << i << endl;
    break; 
}

// 


}

cout << "\n \t Frequency counting (count how many times a value appears " << endl;

// we need a ccount first 
int count = 0; 
int frequency[] = {1,2,3,4,5,1,4,5,2,3,1,1,3,4,4,4,5}; 
int sizeFrequnency = 17; 
int targetFrequency; 
cout << " Enter the target to search for frequency counting : " << endl;
cin >> targetFrequency; 


for ( int i = 0 ; i < sizeFrequnency; i++ ) { 
  //  cout << frequency[i] << " " ; 
if ( targetFrequency ==  frequency[i]) { 
    count ++;
}
}
cout << " \n The number " << targetFrequency << " appears " << count << " times in the array. \n" ;




return 0;
}