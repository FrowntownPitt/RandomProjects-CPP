#include <cstdio>
//#include "lib.h"

extern "C" {
#include "lib/lib.h"
}

int main(){
    printf("%d\n", addOne(1));
    return 0;
}
