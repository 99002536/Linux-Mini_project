all.out:pch.cpp test.cpp 
	g++ pch.cpp test.cpp -o all.out -lgtest -lgtest_main -lpthread
valgrind:
	./all.out
cppcheck:
	./all.out
run:all.out
	./all.out