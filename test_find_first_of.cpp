#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/*
*
*   Lab 3 - String Library Find First Of Test
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Test file written by Andrew Zhou for use with the string
*   library coding assignment, last updated Fall 2019.
*
*   Do NOT submit this file to the AG. The test case used here is
*   identical to the test case 'find_first_of' on the Autograder.
*   If you pass these tests, you will pass test case 'find_first_of'.
*
*/

#define STRING_BUFFER 32
#define STDIN_REQUEST "%31s"

#include "String.h"
#include <cstring>
#include <stdio.h>   /* printf */

int main() {
    int num_correct = 0;
    try {
        printf("=======================================================\n");
        printf(" Running tests for string library find_first_of ...\n");
        printf("=======================================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST FIND_FIRST_OF 1 ... ");
            String str = "the quick brown fox jumps over the lazy dog";
            size_t start = str.find_first_of("eht");
            if (start != 0) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 0, BUT GOT INDEX %zu\n", start);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST FIND_FIRST_OF 2 ... ");
            String path = "root/user/config";
            size_t start = path.find_first_of("/");
            if (start != 4) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 4, BUT GOT INDEX %zu\n", start);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST FIND_FIRST_OF 3 ... ");
            String str3 = "the quick brown fox jumps over the lazy dog";
            size_t sol = str3.find_first_of("jogkuq");
            if (sol != 4) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 4, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST FIND_FIRST_OF 4 ... ");
            String question = "This is a question?";
            String target = "?!.)(!";
            size_t sol = question.find_first_of(target);
            if (sol != 18) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 18, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST FIND_FIRST_OF 5 ... ");
            String exclamation = "This is an exclamation!";
            String target = "?!.)(!";
            size_t sol = exclamation.find_first_of(target);
            if (sol != 22) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 22, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST FIND_FIRST_OF 6 ... ");
            String paren = "Words in parentheses can (not) be ignored.";
            String target = "?!.)(!";
            size_t sol = paren.find_first_of(target);
            if (sol != 25) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 25, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST FIND_FIRST_OF 7 ... ");
            String str7 = "appleappleappleappleorangeappleorange";
            size_t sol = str7.find_first_of("GgGgGgGgGg", 27);
            if (sol != 35) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 35, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST FIND_FIRST_OF 8 ... ");
            String str8 = "my_eecs281_project";
            size_t sol = str8.find_first_of("SEGFAULT");
            if (sol != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST FIND_FIRST_OF 9 ... ");
            String str9 = "my_eecs281_project";
            size_t sol = str9.find_first_of("SEGFAULT", 281);
            if (sol != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", sol);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        printf("\n %d/9 TESTS PASSED\n=======================================================\n", num_correct);
        return 0;
    }
    catch (const String_exception &s) {
        printf("\n\n YOUR PROGRAM THREW AN EXCEPTION FOR THIS TEST CASE ...\n");
        printf(" TEST FAILED ... MAKE SURE YOU AREN'T ACCESSING BAD MEMORY\n");
        printf(" PROGRAM EXITING WITH ERROR\n");
        return 1;
    }
    catch (const std::exception& e) {
        printf("\n\n YOUR PROGRAM THREW AN EXCEPTION FOR THIS TEST CASE ...\n");
        printf(" TEST FAILED ... MAKE SURE YOU AREN'T ACCESSING BAD MEMORY\n");
        printf(" PROGRAM EXITING WITH ERROR\n");
        return 1;
    }
}