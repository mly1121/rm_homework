#include "factorial.h"

long long calculate(int n)
{
    if(n==0)
    {
        return 1;
    }
    long long result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}