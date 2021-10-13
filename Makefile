CXXFLAGS ?= -g -Wall -Wextra -Werror

step_0: main.cpp
	$(CXX) $(CXXFLAGS) -o repl main.cpp
