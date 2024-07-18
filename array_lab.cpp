#include "array_lab.h"

array_lab::array_lab(int x)
{
    a = x;
    p = new int [a];
}

array_lab:: array_lab (array_lab & t)
{
    a = t.a;
    p = new int [a];
    if (p)
    {
        for (int i=0; i <a; i++)
        {
            p [i] = t.p[i];
        }
    }
}

