#include<stdio.h>
#include<stdint.h>

int main(void) {
    int i = 0x1B2B3B4B;
    int* pi = &i;
    uintptr_t addr = (uintptr_t)pi;

    printf("i      = %X\n", i);
    printf("&i     = %p\n", &i);
    printf("pi     = %p\n", pi);
    printf("*pi    = %X\n", *pi);

    printf("addr   = %08lx, *(char*)addr     = %X\n", addr, *(char*)addr);
    printf("addr+1 = %08lX, *(char*)(addr+1) = %X\n", addr+1, *(char*)(addr+1));
    printf("addr+2 = %08lX, *(char*)(addr+2) = %X\n", addr+2, *(char*)(addr+2));
    printf("addr+3 = %08lX, *(char*)(addr+3) = %X\n", addr+3, *(char*)(addr+3));

    return 0;

}