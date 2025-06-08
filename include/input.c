#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <conio.h>
#include "input.h"

int validate_key(key_code *key, Vector2 *vect)
{
    Key key_str = {'a', 'w', 's', 'd'};
    printf("\nPress any key: ");
    key_code Another_key = getch();
    *key = Another_key;

    if (*key == key_str.a) {
        printf("You pressed %c Key\n", *key);
        vect->x -= 1;
        printf("\nx = %d\ny = %d\n", vect->x, vect->y);
        return 1;
    } else if (*key == key_str.d) {
        printf("You pressed %c Key\n", *key);
        vect->x += 1;
        printf("\nx = %d\ny = %d\n", vect->x, vect->y);
        return 1;
    } else if (*key == key_str.w) {
        printf("You pressed %c Key\n", *key);
        vect->y += 1;
        printf("\nx = %d\ny = %d\n", vect->x, vect->y);
        return 1;
    } else if (*key == key_str.s) {
        printf("You pressed %c Key\n", *key);
        vect->y -= 1;
        printf("\nx = %d\ny = %d\n", vect->x, vect->y);
        return 1;
    } else {
        printf("Exiting...");
        return 0;
    }
    return 0;
}

bool getkey(key_code *key, Vector2 *vect)
{
    while (validate_key(key, vect) != 0) {
        validate_key(key, vect);
    }
}