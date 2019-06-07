//
//  main.cpp
//  selection_sort
//
//  Created by Sherry R.Z on 2019-05-29.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//

/*
 
 Selection Sort:
 the simplest method for sorting,
 but also the most useless method, since the time complexity is O(n^2)
 also it's not stable!
 
 It's rarely used in engineering area.
 
 
 Logic:
 Traverse the array every time to find the current smallest element then put it to the beginning.
 
 */

#include <iostream>
//#include <array>

using namespace std;

void selectionSort(int arr[]){ // can I return an array without using a pointer?
    
    int indexMin = 0;
    int temp;
    for(int i = 0; i < sizeof(arr)/sizeof(arr)[0]; i++){
        // traverse the array to find the current min value
        // exchange this value with the index[i]
        if (arr[i] < indexMin) {
            temp = arr[indexMin];
            arr[indexMin] = arr[i];
            
        }
        
    }
    
    // output the sorted array
    for(int i = 0; i < sizeof(arr)/sizeof(arr)[0]; i++){
        cout << arr[i] << " ";
    }
}


int main(int argc, const char * argv[]) {
    // test case
    int arr [] = {5, 3, 6, 8, 1, 7, 9, 4, 2};
    // output initial array
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    // output array
    cout << "\n";
    selectionSort(arr);
    cout << "test";
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    
//    string myArray[] = { "Example1", "Example2", "Example3", "Example4" };
//    int size_of_array = size(myArray);
//    cout << size_of_array << endl;
    return 0;
}
