#include <stdio.h>
#define OUT 0
#define IN 1

int main() {
    int c, state, wc, cc, lc;
    state = OUT;    
    wc = cc = lc = 0;
    while((c = getchar()) != EOF) {
        ++cc;
        if (c == '\n') {
            ++lc;
        }
        if (c == '\n' || c == '\t' || c == ' ') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++wc;
        }
    }
    printf("lines: %d words: %d chars: %d", lc, wc, cc);
}
