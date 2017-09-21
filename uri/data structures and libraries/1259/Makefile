file=1259
debug: $(file).exe
	./$(file).exe < input | diff - output -s

$(file).exe: $(file).cpp
	g++ -g -pedantic -std=gnu++11 -Wall -Wno-long-long -o $(file).exe $(file).cpp
