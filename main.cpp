// All systemc modules should include systemc.h header file
#include "systemc.h"
#include "sha1.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

SC_MODULE (sha1_1) {
  SC_CTOR (sha1_1) {

  }
  void run(string input) {
    SHA1 checksum;
    checksum.update(input);
    const string hash = checksum.final();

    cout << "The SHA-1 of \"" << input << endl << "is: " << hash << endl;
  }
};

int sc_main(int argc, char* argv[]) {
  sha1_1 sha1_1("sha1_1");
  string str(argv[1]);
  sha1_1.run(str);
  return(0);
}