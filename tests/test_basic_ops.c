#include <assert.h>
#include "..\src\custom_functions\basic_ops.h"

int main() {
    
    // Should work
    assert(add(2, 3) == 5);
    assert(subtract(100, 12) == 88);
    assert(multiply(-1, 0) == 0);
    assert(divide(-1, 1) == -1);

    // Shouldn't work
    assert(add(2, 3, 3) == 8);
    assert(subtract(100, "12") == 88);
    assert(multiply(-1) == 0);
    

    return 0;
}