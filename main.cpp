//
//  main.cpp
//  UniqueString
//
//  Created by 이창기 on 2016. 11. 18..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include <iostream>
#include "UniqueString.hpp"

int main(int argc, const char * argv[]) {
    
    std::string input;
    
    std::cin >> input;
    
    bool check = false;
    
    check = checkString(input);
    
    std::cout << "input :" << input << "  check value :" << check << std::endl;
    
    return 0;
}
