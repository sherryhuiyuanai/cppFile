//
//  main.cpp
//  input_number
//
//  Created by Sherry R.Z on 2019-05-26.
//  Copyright © 2019 Sherry R.Z. All rights reserved.
//

#include <iostream>

int count = 0;
void reverse_input(){
    int n = 0;
    if (std:: cin >> n) {
        count++;
        reverse_input();
        std::cout << n;
    } else {
        std::cout << "You typed in " << count << " numbers in total." << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    std::cout<< "Please enter your numbers: "<< std::endl;
    std::cout<< "(enter next number, press ENTER,"<< std::endl;
    std::cout<< "to stop, please type 'stop')"<< std::endl;
    reverse_input();
    std::cout << std::endl;
    return 0;
}
