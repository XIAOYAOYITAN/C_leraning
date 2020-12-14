#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#error This programme cannot compile at Windows Platform
#endif

int main() {
    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("File : %s\n", __FILE__);
    printf("Line : %d\n", __LINE__);
    system("pause");
    return 0;
}