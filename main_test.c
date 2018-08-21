//
//  main_test.c
//  Week1
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "min_unit.h"
#include "core.h"

int tests_run = 0;
int tests_failed = 0;

static char * test_greeting() {
    mu_assert("error, incorrect greeting", strcmp(greeting(), "Hello World") == 0);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_greeting);
    return 0;
}

#ifdef TEST
int main(int argc, char **argv) {
    char *result = all_tests();
    
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    
    printf("%d tests of %d passed\n", tests_run - tests_failed, tests_run);
    
    return 0;
}
#endif

