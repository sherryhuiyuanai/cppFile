//
//  main.cpp
//  input_number
//
//  Created by Sherry R.Z on 2019-05-26.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//


#include <iostream>
#include <vector>  //for std::vector
#include <string>  //for std::string
using namespace std;

void reverse_input(){
    int n;
    vector<int> data;
    cout << "Please input: " << endl;
    while(cin >> n){
        data.push_back(n);
    }
    cout << "Reversed orders:" << endl;
    for (int i = int(data.size()) - 1; i >= 0; i--){
        cout << data.at(i) << ": " << data.at(i) + int(data.size()) << endl;
    }
    cout << "total number: " << int(data.size()) << endl;
}

int main(int argc, const char * argv[]) {
    reverse_input();
    return 0;
}
