#include <stdio.h>
#include <stdlib.h>

int *fetchData() {
  int *data;
  // fetch data...
  return data;
}

void processData(int data[]) {
  // process data...
  // using parallel mechanism to divide task to each CPU
  // Fix bug
}

void showData(int data[]) {
  // print data...
}

int main () {
  int *data = fetchData();
  processData(data);
  showData(data);
  return 0;
}