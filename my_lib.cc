#include <my-lib/my_lib.hh>
#include <not-my-lib/not_my_lib.hh>
#include <not-my-lib-header-only/not_my_lib_header_only.hh>

namespace my_lib {

int dummymy() {
  int my = 2;
  return not_my_lib::dummy() * 4 + not_my_lib_header_only::dummyho();
}

} /// namespace my_lib
