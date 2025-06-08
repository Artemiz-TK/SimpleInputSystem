#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <conio.h>
#include "include/input.h"

int main()
{
    key_code key;
    Input in;
    Vector2 vetcor = {0, 0};

    in.getkey = getkey(&key, &vetcor);
    return 0;
}
