#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/* 
*
*   Lab 3 - String Library Erase Test
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Test file written by Andrew Zhou for use with the string
*   library coding assignment, last updated Fall 2019.
*
*   Do NOT submit this file to the AG. The test case used here is 
*   identical to the test case 'erase' on the Autograder.
*   If you pass these tests, you will pass test case 'erase'.
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
        printf(" Running tests for string library erase ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST ERASE 1 ... ");
            String path = "root/shared/user/config";
            path.erase(12, 5);
            if (path != "root/shared/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/shared/user/config\n");
                printf(" EXPECTED STRING: root/shared/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 18) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/shared/config\n");
                printf(" EXPECTED SIZE 18, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST ERASE 2 ... ");
            String pp = "potato parrot";
            pp.erase(12, 4);
            if (pp != "potato parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/shared/user/config\n");
                printf(" EXPECTED STRING: root/shared/config\n");
                printf(" STUDENT STRING:  %s\n", pp.c_str());
            }
            else if (pp.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potato parro\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", pp.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST ERASE 3 ... ");
            String pp2 = "potato parro";
            pp2.erase(5, 1);
            if (pp2 != "potat parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potato parro\n");
                printf(" EXPECTED STRING: potat parro\n");
                printf(" STUDENT STRING:  %s\n", pp2.c_str());
            }
            else if (pp2.size() != 11) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potat parro\n");
                printf(" EXPECTED SIZE 11, BUT RECEIVED SIZE %zu\n", pp2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST ERASE 4 ... ");
            String pp3 = "potat parro";
            pp3.erase(0, 1);
            if (pp3 != "otat parro") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potat parro\n");
                printf(" EXPECTED STRING: otat parro\n");
                printf(" STUDENT STRING:  %s\n", pp3.c_str());
            }
            else if (pp3.size() != 10) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: otat parro\n");
                printf(" EXPECTED SIZE 10, BUT RECEIVED SIZE %zu\n", pp3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST ERASE 5 ... ");
            String pp4 = "otat parro";
            pp4.erase(1, 22);
            if (pp4 != "o") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: otat parro\n");
                printf(" EXPECTED STRING: o\n");
                printf(" STUDENT STRING:  %s\n", pp4.c_str());
            }
            else if (pp4.size() != 1) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: o\n");
                printf(" EXPECTED SIZE 1, BUT RECEIVED SIZE %zu\n", pp4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST ERASE 6 ... ");
            String nums = "0123456789";
            nums.erase(0, 5);
            if (nums != "56789") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 56789\n");
                printf(" STUDENT STRING: %s\n", nums.c_str());
            }
            else if (nums.size() != 5) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 56789\n");
                printf(" EXPECTED SIZE 5, BUT RECEIVED SIZE %zu\n", nums.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST ERASE 7 ... ");
            String nums2 = "0123456789";
            nums2.erase(9, 1);
            if (nums2 != "012345678") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: 0123456789\n");
                printf(" EXPECTED STRING: 012345678\n");
                printf(" STUDENT STRING: %s\n", nums2.c_str());
            }
            else if (nums2.size() != 9) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 012345678\n");
                printf(" EXPECTED SIZE 9, BUT RECEIVED SIZE %zu\n", nums2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST ERASE 8 ... ");
            String str = "eecs 281 is fun";
            str.erase(13);
            if (str != "eecs 281 is f") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs 281 is fun\n");
                printf(" EXPECTED STRING: eecs 281 is f\n");
                printf(" STUDENT STRING: %s\n", str.c_str());
            }
            else if (str.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs 281 is f\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST ERASE 9 ... ");
            String str2 = "thisisalongstring";
            str2.erase(7, 4);
            str2.erase(12, 2);
            if (str2 != "thisisastrin") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: thisisalongstring\n");
                printf(" EXPECTED STRING: thisisastrin\n");
                printf(" STUDENT STRING: %s\n", str2.c_str());
            }
            else if (str2.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: thisisastring\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST ERASE 10 ... ");
            String str3 = "emptystuff";
            str3.erase(5, 5);
            str3.erase(0, 5);
            if (str3 != "") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: emptystuff\n");
                printf(" EXPECTED STRING: <empty string>\n");
                printf(" STUDENT STRING: %s\n", str3.c_str());
            }
            else if (str3.size() != 0) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING IS EMPTY\n");
                printf(" EXPECTED SIZE 0, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/10 TESTS PASSED\n============================================\n", num_correct);
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
