//
//  main.c 
//  Week1
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>
#include "core.h"

#ifndef TEST
int main(int argc, const char * argv[]) {
    char * hello = greeting();

    printf("%s\n", hello);
    return 0;
}
#endif
