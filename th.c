#include <stdio.h>
 
void th(int, char, char, char);
 
int main()
{
    int n;
    scanf("%d", &n);
    th(n, 'A', 'C', 'B');
    return 0;
}
void th(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from, to);
        return;
    }
    th(num - 1, from, aux, to);
    printf("\n Move disk %d from peg %c to peg %c", n, from, to);
    th(n-1, aux, to, from);
}
