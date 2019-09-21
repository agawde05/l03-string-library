#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/*
*
*   Lab 3 - String Library Find Last Of Test
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Test file written by Andrew Zhou for use with the string
*   library coding assignment, last updated Fall 2019.
*
*   Do NOT submit this file to the AG. The test case used here is
*   identical to the test case 'find_last_of' on the Autograder.
*   If you pass these tests, you will pass test case 'find_last_of'.
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
        printf(" Running tests for string library find_last_of ...\n");
        printf("=======================================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST FIND_LAST_OF 1 ... ");
            String str = "the quick brown fox jumps over the lazy dog";
            size_t start = str.find_last_of("eht");
            if (start != 33) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 33, BUT GOT INDEX %zu\n", start);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST FIND_LAST_OF 2 ... ");
            String path = "root/user/config";
            size_t last = path.find_last_of("/");
            if (last != 9) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 9, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST FIND_LAST_OF 3 ... ");
            String str3 = "the quick brown fox jumps over the lazy dog";
            size_t last = str3.find_last_of("xicku");
            if (last != 21) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 21, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST FIND_LAST_OF 4 ... ");
            String str4 = "EECS 281!!!";
            size_t last = str4.find_last_of("EECS 280?!!!", 10);
            if (last != 10) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 10, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST FIND_LAST_OF 5 ... ");
            String str5 = "Words in parentheses can (not) be ignored!!!!!";
            str5.erase(41, 5);
            size_t last = str5.find_last_of("?!.)(!", 65);
            if (last != 29) {
                printf("FAILED\n");
                printf(" EXPECTED INDEX 29, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST FIND_LAST_OF 6 ... ");
            String str6 = "Words in parentheses can (not) be ignored!!!!!";
            size_t last = str6.find_last_of("?!.)(!", 24);
            if (last != String::npos) {
                printf("FAILED\n");
                printf(" EXPECTED NPOS, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST FIND_LAST_OF 7 ... ");
            String str7 = "carrots and parrots";
            size_t last = str7.find_last_of("yuck");
            if (last != 0) {
                printf("FAILED\n");
                printf(" EXPECTED 0, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST FIND_LAST_OF 8 ... ");
            String str8 = "carrots and parrots";
            size_t last = str8.find_last_of("yuck", 0);
            if (last != 0) {
                printf("FAILED\n");
                printf(" EXPECTED 0, BUT GOT INDEX %zu\n", last);
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("=======================================================");
        }
        

        printf("\n %d/8 TESTS PASSED\n=======================================================\n", num_correct);
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