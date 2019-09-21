# MAKEFILE FOR LAB 3 STRING LIBRARY
news:
	g++ -std=c++17 -Wall -Wextra -Wconversion -Wno-unused-result -O3 test_news.cpp -o strlib

erase:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_erase.cpp -o strlib

insert:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_insert.cpp -o strlib

replace:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_replace.cpp -o strlib

find_first_of:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_find_first_of.cpp -o strlib

find_last_of:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_find_last_of.cpp -o strlib

clean:
	rm -f strlib

release: strlib