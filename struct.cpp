#include <cstdio>

struct S {

    int i;
    double d;
    const char * c;


};

int main() {

    S s1={3, 47.9, "string ine"};
    printf("s1 : %d, %f, %s\n", s1.i, s1.d, s1.c);

    return 0;
}