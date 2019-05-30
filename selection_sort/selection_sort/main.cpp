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
#include <array>

using namespace std;

int *selectionSort(int arr[]){ // can I return an array without using a pointer?
    
    return arr;
}


int main(int argc, const char * argv[]) {
    int arr [] = {5, 3, 6, 8, 1, 7, 9, 4, 2};
//    for(int i = 0; i < sizeof(arr); i++){
//        cout << arr[i];
//    }
    cout << sizeof(arr) << endl;
    return 0;
}
