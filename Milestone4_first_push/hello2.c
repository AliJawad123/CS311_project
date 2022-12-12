#include "/home/jawad/xv6-riscv/kernel/types.h"
#include "/home/jawad/xv6-riscv/kernel/stat.h"
#include "user.h"

int main(void)
{
printf("LETS GOOOOOO is %d\n",hello2());
printf("Congrats on implementing your first sys call to sv6 OS!!!\n");
printf("trying to run pgaccess sys call\n");
printf("pgaccess() returned %d\n",pgaccess());
exit(0);
}
