#include "../libf.h"

int main() {
  char buf[16] = {0};
  int n = printf("%d %x %s %c\n", 42, 99, "hello", 'x');
  printf("%d\n", n);
  n = sprintf(buf, "%s", "foobar");
  printf("%s %d\n", buf, n);
  // A compiler issue?
  //n = snprintf(buf, 3, "foobar");
  //printf("%s %d\n", buf, n);
}
