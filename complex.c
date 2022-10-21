
#include <stdio.h>
#include <assert.h>
#include "complex.h"

COMPLEX CreateComplex(double real, double imaginary)
{
    COMPLEX newcomplexnum;
    newcomplexnum.real = real ;
    newcomplexnum.imaginary = imaginary ;
    return newcomplexnum ;
}

void DestroyComplex(CPTR complex)
{
    complex->real = 0 ;
    complex->imaginary =0;
}

COMPLEX AddComplex(CPTR first, CPTR second)
{
    COMPLEX addresult ;
    addresult.real = first->real + second->real ;
    addresult.imaginary = first->imaginary + second->imaginary ;
    return addresult ;
}

COMPLEX SubtractComplex(CPTR first, CPTR second)
{
    COMPLEX subresult ;
    subresult.real = first->real - second->real ;
    subresult.imaginary = first->imaginary - second->imaginary ;
    return subresult ;
}

COMPLEX MultiplyComplex(CPTR first, CPTR second)
{
     COMPLEX multresult ;
    multresult.real = (first->real * second->real)-(first->imaginary * second->imaginary );
    multresult.imaginary = (first->imaginary * second->real) + (first->real * second->imaginary) ;
    return multresult ;
}

COMPLEX ConjugateComplex(CPTR complex)
{
    COMPLEX convresult ;
    convresult.real = complex->real;
    convresult.imaginary = complex->imaginary * -1 ;
    return convresult;
}

COMPLEX DivideComplex(CPTR first, CPTR second)
{
    COMPLEX divresult ;
    divresult.real = (((first->real * second->real)+ (first->imaginary  * second->imaginary))/ ((second->real*second->real)+(second->imaginary*second->imaginary)));
    divresult.imaginary = ((first->imaginary * second->real )-(first->real * second->imaginary))/((second->real*second->real)+(second->imaginary*second->imaginary));
    return divresult ;
}

void PrintComplex(CPTR complex)
{
    if(complex->imaginary>=0)
    {
           printf("%lf + %lf i\n" ,complex->real ,complex->imaginary);
    }
    else
    {
              printf("%lf  %lf i\n" ,complex->real ,complex->imaginary);

    }
}

