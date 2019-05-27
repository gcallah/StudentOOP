CXXFLAGS=-g -std=c++14 -Wall
CC=$(CXX)

STUDENT_DIR=my_code
TEST_DIR=tests

hello: $(TEST_DIR)/test_hello

$(TEST_DIR)/test_hello: $(STUDENT_DIR)/hello.cpp $(TEST_DIR)/test_hello.cpp

tests: hello
	tests/test_hello

prod: tests
	git commit -a -m "testing new code"
	git push origin master
