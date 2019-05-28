//
//  main.cpp
//  Reverse_Interger_LC7
//
//  Created by Sherry R.Z on 2019-05-27.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//
/*
 Question:
 Given a 32-bit signed integer, reverse digits of an integer.
 
 Example
 Input: 123
 Output: 321
 Example 2:
 
 Input: -123
 Output: -321
 Example 3:
 
 Input: 120
 Output: 21
 Note:
 Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */


#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int reverse(int x) {
    if(x > pow(2, 31) - 1 || x < -pow(2, 31)){
        return 0;
    } else {
        int n = abs(x);
        int result = 0;
        int residue = 0;
        //int increase = 0;
        for(int i = 0; i < 10; i++){
            // increase = n % int(pow(10, i+1)) - residue;
            residue = n % int(pow(10, i+1));
            result =/* increase == 0? result:*/ result * 10 + residue / int(pow(10, i));
            n = n - residue;
            cout << i+1 << ": " << result << ": " << residue << endl; // test
        }
        result = x >= 0? result: -result;
        return result;
    }
}

int main(int argc, const char * argv[]) {
    cout << reverse(-204) << endl;
    // cout << (2147483648>pow(2, 31) - 1);
    return 0;
}
