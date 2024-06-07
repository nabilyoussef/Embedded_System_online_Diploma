#include <stdio.h>


union job
{
    char name[32];
    float salary;
    int worker_no;
}u;
struct job1{
    char name[32];
    float salary;
    int worker_no;
}s;


int main() {
    printf("size of union = %d\n", sizeof(u)); // size of union = 32
    printf("size of structure = %d\n", sizeof(s)); // size of structure = 40

    return 0;
}