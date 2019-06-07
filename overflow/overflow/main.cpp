//
//  main.cpp
//  overflow
//
//  Created by Sherry R.Z on 2019-06-07.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//

#include <iostream>
using namespace std;

bool can_add(long a, long b) {
    if(a > INT_MAX || b > INT_MAX || a < INT_MIN || b < INT_MIN || a+b < INT_MIN || a+b > INT_MAX){
        return false;
    } else {
        cout << a+b << endl;
        return true;
    }
    
}

int main(int argc, const char * argv[]) {
    cout << can_add(-2147483649, 2000000) << endl;
    return 0;
}
