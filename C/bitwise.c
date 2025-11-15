<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 520c1e359d20e898cf8912a5c81e369acd0bf715
#include<stdio.h>

int rangeBitwiseAnd(int m, int n)
{
    int shift =0;
    while(m<n)
    {
        m>>=1;
        n>>=1;
        shift++;
    }
    m<<=shift;
    return m;
}


int main()
{
    puts("Bitwise AND of Numbers Range:");
    printf("%d\n", rangeBitwiseAnd(5,7));
    return 0;
<<<<<<< HEAD
=======
#include<stdio.h>

int rangeBitwiseAnd(int m, int n)
{
    int shift =0;
    while(m<n)
    {
        m>>=1;
        n>>=1;
        shift++;
    }
    m<<=shift;
    return m;
}


int main()
{
    puts("Bitwise AND of Numbers Range:");
    printf("%d\n", rangeBitwiseAnd(5,7));
    return 0;
>>>>>>> main
=======
>>>>>>> 520c1e359d20e898cf8912a5c81e369acd0bf715
}