#include <not-my-lib-header-only/not_my_lib_header_only.hh>
#include <cassert>

int main() {
  assert(not_my_lib_header_only::dummyho() == 8);
}
