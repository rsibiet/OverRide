#include <unistd.h>
#include <stdio.h>

int main(void)
{
  printf("SHELLCODE address: 0x%x\n", getenv("SHELLCODE"));
  return 0;
}
