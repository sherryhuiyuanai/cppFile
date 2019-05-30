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

long reverse(long x) {
    if (x > INT_MAX || x < INT_MIN) {
        // cout << "oppps";
        return 0;
    }
    long n = abs(x);
    long result = 0;
    long residue = 0;
    int i = 0;
    while (abs(x) / int(pow(10, i)) != 0){
        residue = n % int(pow(10, i+1));
        if(result * 10 + residue / int(pow(10, i))){
            // cout << "oppps222";
            return 0;
        } else {
            result = result * 10 + residue / int(pow(10, i));
            n = n - residue;
            // cout << i+1 << ": " << result << endl;
            i++;
        }
    }
    result = x >= 0? result: -result;
    return result;
}

int main(int argc, const char * argv[]) {
    cout << reverse(INT_MAX) << endl;
    return 0;
}
