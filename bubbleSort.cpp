//
//  bubbleSort.cpp
//  
//
//  Created by Yuan Xie on 2018-12-11.
//

#include <stdio.h>
#include<iostream>
using namespace std;
int bubbleSort(int b);
int* bubbleSort(int b[]){
    for(int i = 6; i > 0; i--){
        for(int j = 0; j < i-1 ; j++){
            if(b[j] > b[j+1]){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    return b;
}

int main(){
    int a[6] = { 37,45,29,8,12,88 };
    
    int *c = bubbleSort(a);
    for(int item = 0; item < 6; item++){
        cout << c[item] << endl;
    }
}
