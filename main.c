#include <stdio.h>
#include <stdlib.h>

int *fetchData() {
  int *data;
  // fetch data...
  return data;
}

void processData(int data[]) {
  // process data...
}

int main () {
  int *data = fetchData();
  processData(data);

  return 0;
}