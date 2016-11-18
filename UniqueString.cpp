//
//  UniqueString.cpp
//  UniqueString
//
//  Created by 이창기 on 2016. 11. 18..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include "UniqueString.hpp"

bool checkString(std::string input)
{
    int i = 0;
    std::string cmp = input;
    int hash[256] = {0};
    
    //문자가 256개 이상일 때
    if(input.size() > 256)
        return false;
    
    while(i != input.size())
    {
        if(hash[cmp[i]]==0)
           hash[cmp[i]]++;
        else
            return false;
        
        i++;
    }
    return true;
}
