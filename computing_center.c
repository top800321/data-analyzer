#include <stdio.h>
#include <stdlib.h>

int main () {
<----------------------
commit3
---------------------->


<----------------------
commit2
---------------------->
  int *data = fetchData();
<---------------------  
hotfix~~~
---------------------->
  processData(data);
  showData(data);
  return 0;
}

hotfix1(){}
hotfix2(){}
