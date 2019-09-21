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
        printf(" Running tests for string library replace ...\n");
        printf("============================================");
        {
            // TEST CASE 1
            printf("\n RUNNING TEST REPLACE 1 ... ");
            String path = "root/shared/config";
            path.replace(5, 6, "temp");
            if (path != "root/temp/config") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: root/shared/config\n");
                printf(" EXPECTED STRING: root/temp/config\n");
                printf(" STUDENT STRING:  %s\n", path.c_str());
            }
            else if (path.size() != 16) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: root/temp/config\n");
                printf(" EXPECTED SIZE 16, BUT RECEIVED SIZE %zu\n", path.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 2
            printf("\n RUNNING TEST REPLACE 2 ... ");
            String str2 = "Bing is a good instructor.";
            str2.replace(15, 19, "search engine.");
            if (str2 != "Bing is a good search engine.") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: Bing is a good instructor.\n");
                printf(" EXPECTED STRING: Bing is a good search engine.\n");
                printf(" STUDENT STRING:  %s\n", str2.c_str());
            }
            else if (str2.size() != 29) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: Bing is a good search engine.\n");
                printf(" EXPECTED SIZE 29, BUT RECEIVED SIZE %zu\n", str2.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 3
            printf("\n RUNNING TEST REPLACE 3 ... ");
            String str3 = "fun";
            str3.replace(0, 1, "s");
            if (str3 != "sun") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: fun\n");
                printf(" EXPECTED STRING: sun\n");
                printf(" STUDENT STRING:  %s\n", str3.c_str());
            }
            else if (str3.size() != 3) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: sun\n");
                printf(" EXPECTED SIZE 3, BUT RECEIVED SIZE %zu\n", str3.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 4
            printf("\n RUNNING TEST REPLACE 4 ... ");
            String str4 = "replaceme";
            str4.replace(0, 9, "ok");
            if (str4 != "ok") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: replaceme\n");
                printf(" EXPECTED STRING: ok\n");
                printf(" STUDENT STRING:  %s\n", str4.c_str());
            }
            else if (str4.size() != 2) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: ok\n");
                printf(" EXPECTED SIZE 2, BUT RECEIVED SIZE %zu\n", str4.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 5
            printf("\n RUNNING TEST REPLACE 5 ... ");
            String str5 = "potatoparrot";
            str5.replace(6, 1, " p");
            if (str5 != "potato parrot") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: potatoparrot\n");
                printf(" EXPECTED STRING: potato parrot\n");
                printf(" STUDENT STRING:  %s\n", str5.c_str());
            }
            else if (str5.size() != 13) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: potato parrot\n");
                printf(" EXPECTED SIZE 13, BUT RECEIVED SIZE %zu\n", str5.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 6
            printf("\n RUNNING TEST REPLACE 6 ... ");
            String str6 = "x";
            str6.replace(0, 1, "lab3lab3lab3");
            if (str6 != "lab3lab3lab3") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: x\n");
                printf(" EXPECTED STRING: lab3lab3lab3\n");
                printf(" STUDENT STRING:  %s\n", str6.c_str());
            }
            else if (str6.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: lab3lab3lab3\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str6.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 7
            printf("\n RUNNING TEST REPLACE 7 ... ");
            String str7 = "apple";
            str7.replace(2, 281, "ex");
            if (str7 != "apex") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: apple\n");
                printf(" EXPECTED STRING: apex\n");
                printf(" STUDENT STRING:  %s\n", str7.c_str());
            }
            else if (str7.size() != 4) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: apex\n");
                printf(" EXPECTED SIZE 4, BUT RECEIVED SIZE %zu\n", str7.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 8
            printf("\n RUNNING TEST REPLACE 8 ... ");
            String str8 = "eecs281eecs2811";
            str8.replace(11, 4, "370");
            if (str8 != "eecs281eecs370") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281eecs2811\n");
                printf(" EXPECTED STRING: eecs281eecs370\n");
                printf(" STUDENT STRING:  %s\n", str8.c_str());
            }
            else if (str8.size() != 14) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs281eecs370\n");
                printf(" EXPECTED SIZE 14, BUT RECEIVED SIZE %zu\n", str8.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 9
            printf("\n RUNNING TEST REPLACE 9 ... ");
            String str9 = "koala";
            str9.replace(0, 1, "lala");
            if (str9 != "lalaoala") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: koala\n");
                printf(" EXPECTED STRING: lalaoala\n");
                printf(" STUDENT STRING:  %s\n", str9.c_str());
            }
            else if (str9.size() != 8) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: lalaoala\n");
                printf(" EXPECTED SIZE 8, BUT RECEIVED SIZE %zu\n", str9.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 10
            printf("\n RUNNING TEST REPLACE 10 ... ");
            String str10 = "eecs281";
            str10.replace(0, 10, "");
            if (str10 != "") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: <empty string>\n");
                printf(" STUDENT STRING:  %s\n", str10.c_str());
            }
            else if (str10.size() != 0) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: <empty string>\n");
                printf(" EXPECTED SIZE 0, BUT RECEIVED SIZE %zu\n", str10.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 11
            printf("\n RUNNING TEST REPLACE 11 ... ");
            String str11 = "eecs281";
            str11.replace(0, 4, "");
            if (str11 != "281") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: 281\n");
                printf(" STUDENT STRING:  %s\n", str11.c_str());
            }
            else if (str11.size() != 3) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: 281\n");
                printf(" EXPECTED SIZE 3, BUT RECEIVED SIZE %zu\n", str11.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 12
            printf("\n RUNNING TEST REPLACE 12 ... ");
            String str12 = "eecs281";
            str12.replace(4, 3, "");
            if (str12 != "eecs") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: eecs\n");
                printf(" STUDENT STRING:  %s\n", str12.c_str());
            }
            else if (str12.size() != 4) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eecs\n");
                printf(" EXPECTED SIZE 4, BUT RECEIVED SIZE %zu\n", str12.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        {
            // TEST CASE 13
            printf("\n RUNNING TEST REPLACE 13 ... ");
            String str13 = "eecs281";
            str13.replace(3, 2, str13);
            if (str13 != "eeceecs28181") {
                printf("FAILED\n");
                printf(" ORIGINAL STRING: eecs281\n");
                printf(" EXPECTED STRING: eeceecs28181\n");
                printf(" STUDENT STRING:  %s\n", str13.c_str());
            }
            else if (str13.size() != 12) {
                printf("FAILED\n");
                printf(" INCORRECT STRING SIZE RETURNED\n");
                printf(" CURRENT STRING: eeceecs28181\n");
                printf(" EXPECTED SIZE 12, BUT RECEIVED SIZE %zu\n", str13.size());
            }
            else {
                printf("SUCCESS\n");
                ++num_correct;
            }
            printf("============================================");
        }

        printf("\n %d/13 TESTS PASSED\n============================================\n", num_correct);
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