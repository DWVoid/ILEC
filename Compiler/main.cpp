//
//  main.cpp
//  Compiler
//
//  Created by 佐々木みこと on 2016/10/2.
//  Copyright © 2016年 Infinideastudio. All rights reserved.
//

#include <iostream>
#include "lexical.h"
#include "lex_literal.h"
#include "fileio.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << IO::read("main.cpp") << std::endl;
    return 0;
}
