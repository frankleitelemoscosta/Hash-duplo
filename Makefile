all:

	g++ ./src/main.cpp ./src/Hashtable.hpp ./src/Hashtable.cpp ./src/File.cpp ./src/File.hpp -o ./build/objects/executavel

clean:

	rm -rf ./build/objects/executavel

run:

	./build/objects/executavel