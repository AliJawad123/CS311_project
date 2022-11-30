#include "/home/jawad/xv6-riscv/kernel/types.h"
#include "/home/jawad/xv6-riscv/kernel/stat.h"
#include "user.h"

int main(void)
{
printf("return val of sys call is %d\n",hello());
printf("Congrats on implementing your first sys call to sv6 OS!!!\n");
exit(0);
}
