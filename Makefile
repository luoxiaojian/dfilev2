all: test

test: dfile.cc test.cc
	g++ dfile.cc test.cc -o test