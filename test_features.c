#include <stdio.h>
#include "check_support.h"

int main()
{
  check_neon_bf16_support();
  check_sve_support();
  check_streaming_sve_support();
  check_sme_support();
  printf("streaming sve length %d\n", check_sve_streaming_length());
  printf("non-streaming sve length %d\n", check_sve_length());
}
