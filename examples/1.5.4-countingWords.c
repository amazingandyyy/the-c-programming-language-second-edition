#include <stdio.h>

#define  IN     1
#define  OUT    0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    /* count lines, words, and charaters in input */
    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("\nlines\twords\tcharaters\n");
    printf("%4d\t%4d\t%4d\n", nl, nw, nc);
}