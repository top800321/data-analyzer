#include <stdio.h>
#include <stdlib.h>

int main () {
  int *data = fetchData();
  processData(data);
  showData(data);
  return 0;
}