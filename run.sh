 # g++ -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux -o main main.cpp sha1.cpp sha1.hpp -lsystemc -lm -std=c++11
 ./main $1