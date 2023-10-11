#include "syscall.h"

char buffer[100];
int main() {
    int length =0;
    PrintString("enter the length of the string\n");
    length=ReadNum();
    PrintString("enter the String:\n");
    ReadString(buffer, length);
    PrintStringUC(buffer);
}