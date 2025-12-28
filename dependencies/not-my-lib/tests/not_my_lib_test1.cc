#include <not-my-lib/not_my_lib.hh>
#include <cassert>

int main() {
  assert(not_my_lib::dummy() == 1);
  assert(not_my_lib::dummy2() == 2);
}
