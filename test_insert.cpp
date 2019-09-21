#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/*
*
*   Lab 3 - String Library Insert Test
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Test file written by Andrew Zhou for use with the string
*   library coding assignment, last updated Fall 2019.
*
*   Do NOT submit this file to the AG. The test case used here is
*   identical to the test case 'insert' on the Autograder.
*   If you pass these tests, you will pass test case 'insert'.
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
        printf("============================================\n");
        printf(" Running tests for string library insert ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST INSERT 1 ... ");
            String path = "root/user/config";
            path.insert(4, "/shared");
            if (path != "root/shared/user/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/user/config\n");
                printf(" EXPECTED STRING: root/shared/user/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 23) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/shared/user/config\n");
                printf(" EXPECTED SIZE 23, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST INSERT 2 ... ");
            String str2 = " are the best!";
            str2.insert(0, "Parrots");
            if (str2 != "Parrots are the best!") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING:  are the best!\n");
                printf(" EXPECTED STRING: Parrots are the best!\n");
                printf(" STUDENT STRING:  %s\n", str2.c_str());
            }
            else if (str2.size() != 21) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: Parrots are the best!\n");
                printf(" EXPECTED SIZE 21, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST INSERT 3 ... ");
            String str3 = "My favorite class is ";
            str3.insert(21, "EECS 281!");
            if (str3 != "My favorite class is EECS 281!") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: My favorite class is \n");
                printf(" EXPECTED STRING: My favorite class is EECS 281!\n");
                printf(" STUDENT STRING:  %s\n", str3.c_str());
            }
            else if (str3.size() != 30) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: My favorite class is EECS 281!\n");
                printf(" EXPECTED SIZE 30, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST INSERT 4 ... ");
            String str4 = "0123456789";
            String ins = "abc";
            str4.insert(2, ins);
            if (str4 != "01abc23456789") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 01abc23456789\n");
                printf(" STUDENT STRING:  %s\n", str4.c_str());
            }
            else if (str4.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 01abc23456789\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST INSERT 5 ... ");
            String str5 = "01abc23456789";
            String ins = "abc";
            str5.insert(str5.size(), ins);
            if (str5 != "01abc23456789abc") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 01abc23456789\n");
                printf(" EXPECTED STRING: 01abc23456789abc\n");
                printf(" STUDENT STRING:  %s\n", str5.c_str());
            }
            else if (str5.size() != 16) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 01abc23456789abc\n");
                printf(" EXPECTED SIZE 16, BUT RECEIVED SIZE %zu\n", str5.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST INSERT 6 ... ");
            String str6 = "When I start my 281 project, the first thing I think of is FUN";
            str6.insert(61, "NCTIO");
            if (str6 != "When I start my 281 project, the first thing I think of is FUNCTION") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: ... FUN\n");
                printf(" EXPECTED STRING: ... FUNCTION\n");
                printf(" STUDENT STRING:  %s\n", str6.c_str());
            }
            else if (str6.size() != 67) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: <see test file>\n");
                printf(" EXPECTED SIZE 67, BUT RECEIVED SIZE %zu\n", str6.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST INSERT 7 ... ");
            String str7 = "281";
            str7.insert(0, str7);
            if (str7 != "281281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 281281\n");
                printf(" STUDENT STRING:  %s\n", str7.c_str());
            }
            else if (str7.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281281\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str7.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST INSERT 8 ... ");
            String str8 = "281";
            str8.insert(str8.size(), str8);
            if (str8 != "281281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 281281\n");
                printf(" STUDENT STRING:  %s\n", str8.c_str());
            }
            else if (str8.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281281\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str8.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST INSERT 9 ... ");
            String str9 = "281";
            str9.insert(2, str9);
            if (str9 != "282811") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 281\n");
                printf(" EXPECTED STRING: 282811\n");
                printf(" STUDENT STRING:  %s\n", str9.c_str());
            }
            else if (str9.size() != 6) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 282811\n");
                printf(" EXPECTED SIZE 6, BUT RECEIVED SIZE %zu\n", str9.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/9 TESTS PASSED\n============================================\n", num_correct);
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