#ifndef INPUT_H
#define INPUT_H

typedef char key_code;

typedef struct
{
    int x;
    int y;
} Vector2;


typedef struct
{
    key_code a;
    key_code w;
    key_code s;
    key_code d;
} Key;

typedef struct
{
    bool getkey;
} Input;


int validate_key(key_code *key, Vector2 *vect);
bool getkey(key_code *key, Vector2 *vect);

#endif