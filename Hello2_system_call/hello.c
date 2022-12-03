#include "/home/jawad/xv6-riscv/kernel/types.h"
#include "/home/jawad/xv6-riscv/kernel/stat.h"
#include "user.h"

int main(void)
{
open("/home/jawad/xv6-riscv/file1.txt",0);
printf("hello ran and trace gave %d = \n",trace("file2.txt"));
//printf("return val of sys call is %d\n",hello());
//printf("Congrats on implementing your first sys call to sv6 OS!!!\n");
exit(0);
}
