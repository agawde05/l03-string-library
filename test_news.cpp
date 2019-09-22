#include "String.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

/*
*
*   Lab 3 - String Library News Article Test
*   Assignment Identifier: 5AE7C079A8BF493DDDB6EF76D42136D183D8D7A8
*
*   Test file written by Andrew Zhou for use with the string
*   library coding assignment, last updated Fall 2019.
*
*   Do NOT submit this file to the AG. Follow the instructions on
*   the specs for information on how to use this file.
*
*/

#define STRING_BUFFER 256
#define STDIN_REQUEST "%255s"

// Reads a C-string from stdin, then constructs and returns a String object
String read_string() {
    char str[STRING_BUFFER];
    scanf(STDIN_REQUEST, str);
    return String(str);
}

#include "String.h"
#include <cstring>
#include <stdio.h>   /* printf */

int main() {
    int words_processed = 0, article_number = 0, operations_completed = 0;
    String input = "";
    scanf("%d", &article_number);
    srand(2019);
    try {
        // ARTICLE 1
        if (article_number == 1) {
            printf("PROCESSING ARTICLE:\n\"KFC is testing some kind of Chicken & Donuts ");
            printf("sandwich and we're ready for it\"\nby Leah Asmelash, CNN\nSeptember 17, 2019\n\n");
            for (int i = 0; i < 278; ++i) {
                input = read_string();
                String arr[20] = { "$", "&#$", "$eecs281$EECS281#eecs281!@$", "HUEIAFHEG", "8w4g9!!REe", "parrot", "igyw9839efeur", "gywe", "-_---_-_--faf", "fehafafafi(@)^(@)",
                    "ioehfU", "#&(YRUHEJF)FF(AIEJF", "ufeisiohusopT$*(&YEGUity4irjgoiuij", "uwgefhsnfkl", "536788ir4wo874", "hur8r3", "0", "12934875ruhf", "gwu9hwehh08hwhwehggew", "-wya!" };
                int location = 0, type = 0;
                for (int j = 0; j < 25; ++j) {
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    printf("ATTEMPTING TO INSERT STRING \"%s\" AT POSITION %d:\n", arr[size_t(type)].c_str(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.insert(size_t(location), arr[size_t(type)]);
                    printf("MODIFIED STRING: %s\n", input.c_str());
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    printf("ATTEMPTING TO ERASE STRING OF LENGTH %zu AT POSITION %d:\n", arr[size_t(type)].size(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.erase(size_t(location), arr[size_t(type)].size());
                    printf("MODIFIED STRING: %s\n", input.c_str());
                }
                ++words_processed;
            }
            printf("==============================================================\n");
            printf("TEST COMPLETE: %d WORDS PROCESSED, %d OPERATIONS CALLED\n", words_processed, operations_completed);
            printf("==============================================================\n");
        }

        // ARTICLE 2
        if (article_number == 2) {
            printf("PROCESSING ARTICLE:\n\"Which of the new M&M's flavors are worth trying? Definitely not all of them.\"");
            printf("\nby Maura Judkis, Washington Post\nSeptember 20, 2019\n\n");
            for (int i = 0; i < 341; ++i) {
                input = read_string();
                String arr[20] = { "sefhj", "qubovzv", "$7912JE@#45r", "MIAD9345u", "!!@ghiee", "parrot", "igyw9839efeur", "e", "lfeuhlaef", "xihczu",
                    "naoethirsg", "iouhgyFSUHJ", "*A&TFEFIUYG?", "ugvhgcfxd", "awret", "hur8r3", "1234567890", "qwertgvbnl", "UYTRDFGHJKL", "//:ptpt." };
                int location = 0, type = 0;
                for (int j = 0; j < 25; ++j) {
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    printf("ATTEMPTING TO FIND_FIRST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    size_t res = input.find_first_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_FIRST_OF: %zu\n", res);
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    printf("ATTEMPTING TO FIND_LAST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    res = input.find_last_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_LAST_OF: %zu\n", res);
                }
                ++words_processed;
            }
            printf("==============================================================\n");
            printf("TEST COMPLETE: %d WORDS PROCESSED, %d OPERATIONS CALLED\n", words_processed, operations_completed);
            printf("==============================================================\n");
        }

        // ARTICLE 3
        if (article_number == 3) {
            printf("PROCESSING ARTICLE:\n\"So Apple actually wants to trademark the iPhone 11's 'slofie'\"");
            printf("\nby Dalvin Brown, USA TODAY\nSeptember 18, 2019\n\n");
            for (int i = 0; i < 234; ++i) {
                input = read_string();
                String arr[40] = { "$", "&#$", "$eecs281$EECS281#eecs281!@$", "HUEIAFHEG", "8w4g9!!REe", "parrot", "igyw9839efeur", "gywe", "-_---_-_--faf", "fehafafafi(@)^(@)",
                    "ioehfU", "#&(YRUHEJF)FF(AIEJF", "ufeisiohusopT$*(&YEGUity4irjgoiuij", "uwgefhsnfkl", "536788ir4wo874", "hur8r3", "0", "12934875ruhf", "gwu9hwehh08hwhwehggew", "-wya!",
                    "sefhj", "qubovzv", "$7912JE@#45r", "MIAD9345u", "!!@ghiee", "&&&", "iuyguhjkhjkhuyjjbjkjguhyjvhgfygtvyhjgvyuyhjgyuyhjgg", "e", "lfeuhlaef", "xihczu",
                    "naoethirsg", "iouhgyFSUHJ", "*A&TFEFIUYG?", "ugvhgcfxd", "awret", "3537868943583", "1234567890", "qwertgvbnl", "UYTRDFGHJKL", "//:ptpt." };
                int location = 0, type = 0, len = 0;
                for (int j = 0; j < 50; ++j) {
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    len = rand() % (int(input.size()));
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    printf("ATTEMPTING TO REPLACE %d CHARS WITH \"%s\" AT INDEX %d:\n", len, arr[size_t(type)].c_str(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.replace(size_t(location), len, arr[size_t(type)]);
                    printf("MODIFIED STRING: %s\n", input.c_str());
                }
                ++words_processed;
            }
            printf("==============================================================\n");
            printf("TEST COMPLETE: %d WORDS PROCESSED, %d OPERATIONS CALLED\n", words_processed, operations_completed);
            printf("==============================================================\n");
        }

        // ARTICLE 4
        if (article_number == 4) {
            printf("PROCESSING ARTICLE:\n\"Ash Ketchum has finally become a Pokemon Master\"");
            printf("\nby Harmeet Kaur, CNN\nSeptember 15, 2019\n\n");
            for (int i = 0; i < 334; ++i) {
                input = read_string();
                String arr[70] = { "$", "&#$", "$eecs281$EECS281#eecs281!@$", "HUEIAFHEG", "8w4g9!!REe", "parrot", "igyw9839efeur", "gywe", "-_---_-_--faf", "fehafafafi(@)^(@)",
                    "ioehfU", "#&(YRUHEJF)FF(AIEJF", "ufeisiohusopT$*(&YEGUity4irjgoiuij", "uwgefhsnfkl", "536788ir4wo874", "hur8r3", "0", "12934875ruhf", "gwu9hwehh08hwhwehggew", "-wya!",
                    "sefhj", "qubovzv", "$7912JE@#45r", "MIAD9345u", "!!@ghiee", "&&&", "iuyguhjkhjkhuyjjbjkjguhyjvhgfygtvyhjgvyuyhjgyuyhjgg", "e", "lfeuhlaef", "xihczu",
                    "naoethirsg", "iouhgyFSUHJ", "*A&TFEFIUYG?", "ugvhgcfxd", "awret", "3537868943583", "1234567890", "qwertgvbnl", "UYTRDFGHJKL", "//:ptpt.", "LEL", "ieibfjsb",
                    "4u3ibeLKE:F:", "37t9rwuheofsnd", "3g72h3", "tdnk", "8r4uhgdgtkhm", "113", "niwihethiwti", "43h8th", "~", "ejy500", "neiirg", "hfisehfei", "\"", "he848$$",
                    "8ef", "2", "y5", "23834", "gnieoh", "ihw4thw4htiwh", "fuf7t8f7sf7", "gnergbrjdkfbg", "<>:{}{P(*&^%$#", "sfoikl,f", "saodo", "bipzug", "bdguidgbggbdb", "WERT" };
                int location = 0, type = 0, len = 0;
                for (int j = 0; j < 25; ++j) {
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    printf("ATTEMPTING TO INSERT STRING \"%s\" AT POSITION %d:\n", arr[size_t(type)].c_str(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.insert(size_t(location), arr[size_t(type)]);
                    printf("MODIFIED STRING: %s\n", input.c_str());
                    printf("STRING SIZE: %zu\n", input.size());
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("ATTEMPTING TO ERASE STRING OF LENGTH %zu AT POSITION %d:\n", arr[size_t(type)].size(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.erase(size_t(location), arr[size_t(type)].size());
                    printf("MODIFIED STRING: %s\n", input.c_str());
                    printf("STRING SIZE: %zu\n", input.size());
                    printf("==============================================================\n");
                    if (input.size()) {
                        printf("OPERATION NUMBER: %d\n", ++operations_completed);
                        location = rand() % (int(input.size()) + 1);
                        type = rand() % 70;
                        len = rand() % (int(input.size()));
                        printf("ATTEMPTING TO REPLACE %d CHARS WITH \"%s\" AT INDEX %d:\n", len, arr[size_t(type)].c_str(), location);
                        printf("ORIGINAL STRING: %s\n", input.c_str());
                        input.replace(size_t(location), len, arr[size_t(type)]);
                        printf("MODIFIED STRING: %s\n", input.c_str());
                        printf("STRING SIZE: %zu\n", input.size());
                        printf("==============================================================\n");
                    }
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("ATTEMPTING TO FIND_FIRST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    size_t res = input.find_first_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_FIRST_OF: %zu\n", res);
                }
                ++words_processed;
            }
            printf("==============================================================\n");
            printf("TEST COMPLETE: %d WORDS PROCESSED, %d OPERATIONS CALLED\n", words_processed, operations_completed);
            printf("==============================================================\n");
        }

        // ARTICLE 5
        if (article_number == 5) {
            printf("PROCESSING ARTICLE:\n\"Only a sliver of 'Thoroughbreds' makes its mark\"");
            printf("\nby Stephen Satarino, Michigan Daily\nMarch 14, 2018\n\n");
            for (int i = 0; i < 702; ++i) {
                input = read_string();
                String arr[70] = { "$", "&#$", "$eecs281$EECS281#eecs281!@$", "HUEIAFHEG", "8w4g9!!REe", "parrot", "igyw9839efeur", "gywe", "-_---_-_--faf", "fehafafafi(@)^(@)",
                    "ioehfU", "#&(YRUHEJF)FF(AIEJF", "ufeisiohusopT$*(&YEGUity4irjgoiuij", "uwgefhsnfkl", "536788ir4wo874", "hur8r3", "0", "12934875ruhf", "gwu9hwehh08hwhwehggew", "-wya!",
                    "sefhj", "qubovzv", "$7912JE@#45r", "MIAD9345u", "!!@ghiee", "&&&", "iuyguhjkhjkhuyjjbjkjguhyjvhgfygtvyhjgvyuyhjgyuyhjgg", "e", "lfeuhlaef", "xihczu",
                    "naoethirsg", "iouhgyFSUHJ", "*A&TFEFIUYG?", "ugvhgcfxd", "awret", "3537868943583", "1234567890", "qwertgvbnl", "UYTRDFGHJKL", "//:ptpt.", "LEL", "ieibfjsb",
                    "4u3ibeLKE:F:", "37t9rwuheofsnd", "3g72h3", "tdnk", "8r4uhgdgtkhm", "113", "niwihethiwti", "43h8th", "~", "ejy500", "neiirg", "hfisehfei", "\"", "he848$$",
                    "8ef", "2", "y5", "23834", "gnieoh", "ihw4thw4htiwh", "fuf7t8f7sf7", "gnergbrjdkfbg", "<>:{}{P(*&^%$#", "sfoikl,f", "saodo", "bipzug", "bdguidgbggbdb", "WERT" };
                int location = 0, type = 0, len = 0;
                for (int j = 0; j < 20; ++j) {
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    printf("ATTEMPTING TO INSERT STRING \"%s\" AT POSITION %d:\n", arr[size_t(type)].c_str(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.insert(size_t(location), arr[size_t(type)]);
                    printf("MODIFIED STRING: %s\n", input.c_str());
                    printf("STRING SIZE: %zu\n", input.size());
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    printf("ATTEMPTING TO FIND_LAST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    size_t res = input.find_last_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_LAST_OF: %zu\n", res);
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("ATTEMPTING TO ERASE STRING OF LENGTH %zu AT POSITION %d:\n", arr[size_t(type)].size(), location);
                    printf("ORIGINAL STRING: %s\n", input.c_str());
                    input.erase(size_t(location), arr[size_t(type)].size());
                    printf("MODIFIED STRING: %s\n", input.c_str());
                    printf("STRING SIZE: %zu\n", input.size());
                    printf("==============================================================\n");
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 20;
                    printf("ATTEMPTING TO FIND_LAST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    res = input.find_last_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_LAST_OF: %zu\n", res);
                    printf("==============================================================\n");
                    if (input.size()) {
                        printf("OPERATION NUMBER: %d\n", ++operations_completed);
                        location = rand() % (int(input.size()) + 1);
                        type = rand() % 70;
                        len = rand() % (int(input.size()));
                        printf("ATTEMPTING TO REPLACE %d CHARS WITH \"%s\" AT INDEX %d:\n", len, arr[size_t(type)].c_str(), location);
                        printf("ORIGINAL STRING: %s\n", input.c_str());
                        input.replace(size_t(location), len, arr[size_t(type)]);
                        printf("MODIFIED STRING: %s\n", input.c_str());
                        printf("STRING SIZE: %zu\n", input.size());
                        printf("==============================================================\n");
                    }
                    printf("OPERATION NUMBER: %d\n", ++operations_completed);
                    location = rand() % (int(input.size()) + 1);
                    type = rand() % 70;
                    printf("ATTEMPTING TO FIND_FIRST_OF WITH STRING \"%s\"\n  ON STRING \"%s\"\n  AT POSITION %d:\n", arr[size_t(type)].c_str(), input.c_str(), location);
                    res = input.find_first_of(arr[size_t(type)], size_t(location));
                    printf("INDEX RETURNED BY FIND_FIRST_OF: %zu\n", res);
                }
                ++words_processed;
            }
            printf("==============================================================\n");
            printf("TEST COMPLETE: %d WORDS PROCESSED, %d OPERATIONS CALLED\n", words_processed, operations_completed);
            printf("==============================================================\n");
        }
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