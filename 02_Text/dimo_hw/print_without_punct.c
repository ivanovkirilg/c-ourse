#include <stdio.h>

int check_if_punct(char c) {
    if ( (c >= '!') && (c <= '/') || (c >= ':') && (c <= '@') || (c >= '[') && (c <= '`') || (c >= '{') && (c <= '~')  ) {
        return 1;
    }
    return 0;
}


int main(){

    char c = getchar();

    while(c != EOF) {
        if(!check_if_punct(c)) {
            putchar(c);
        }
        c = getchar();
    }

}