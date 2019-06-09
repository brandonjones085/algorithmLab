CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -pedantic-errors
CXXFLAGS += -Wall
LDFLAGS = -lboost_date_time
OBJS = main.o binarySearch.o linearSearch.o sortArray.o
SRCS = main.cpp binarySearch.cpp linearSearch.cpp sortArray.cpp
HEADERS =  binarySearch.hpp linearSearch.hpp sortArray.hpp

main: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o main

${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

.PHONY: clean


clean: 
	-rm ${OBJS} main
