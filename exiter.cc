#include <cstdlib>

int main() {
    exit(0);
}
$ c++ -std=gnu++2a -Wall -g -O3 exiter.cc -o exiter
$ ./exiter
$ rm -f exiter
$ make exiter
  COMPILE exiter.cc
  LINK exiter
$ ./exiter