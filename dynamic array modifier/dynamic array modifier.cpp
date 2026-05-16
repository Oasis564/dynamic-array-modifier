
#include <iostream>
using namespace std;
const int max_size = 100;

void listops() {
    int myArray[max_size] = { 12,48,21,45,34};
    
    // initial size of the array.
    int size = 5;

    // print the origin array
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " " << endl;
    }
    cout << endl;

    // insertion operation
    int position, new_value;

    // get the position at which to insert the new value
    cout << "Enter the postion to enter a new value(0:Base Index): ";
    cin >> position;
    if (position < 0 || position > size) {
        cout << "Invalid Position, Insertion Failed. " << endl;
    } 
    else {
        // get the new vslue to be inserted
        cout << "Enter the new value to be inserted: ";
        cin >> new_value;

        // shift the elements to make space for a new value
        for (int i = size-1; i >= position; --i) {
            myArray[i + 1] = myArray[i];
        }

        // inssert the new value given at the new position.
        myArray[position] = new_value;

        // Increment the array in the insertion
        ++size;

        // print the array after insertion
        for (int i = 0; i < size; ++i) {
            cout << myArray[i] << " ";
        }
        cout << endl;
    }
    
}


int main()
{
    //int myArray[10] = { 14,23,36,48,59,60,71,83,95,10 };

    //// calculate the size of an array
    ////int size = sizeof(myArray)/sizeof(myArray[0]);
    ////cout << size;

    //// print all the elements of an array
    //for (int num : myArray) {
    //    cout << num << endl;
    //}

    listops();

    
}

