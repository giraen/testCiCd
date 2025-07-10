#include <assert.h>
#include "..\src\custom_functions\basic_ops.h"

int main() {
    
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    assert(add(-1, 0) == -1);
    assert(add(-1, 1) == 0);

    return 0;
}