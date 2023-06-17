//Complex Number 
#include <stdio.h>
#include <stdlib.h>

//STRUCTURE
struct comp_number
{
    float real ;
    float img ;
};

//FUNCTION PROTOTYPES 
struct comp_number read_comp() ;
void disp_comp(struct comp_number c);
struct comp_number add_comp(struct comp_number c1 , struct comp_number c2);
struct comp_number sub_comp(struct comp_number c1 , struct comp_number c2);
struct comp_number mult_com(struct comp_number c1 , struct comp_number c2)

int main()
{
    struct comp_number c1 , c2 , res ;
    c1 = read_comp();
    c2 = read_comp();
    //disp_comp(c);
    res = add_comp(c1 , c2);
    disp_comp(res);
    res = sub_comp(c1, c2);
    disp_comp(res);
    return 0;
}

struct comp_number read_comp()
{
    struct comp_number a1 ;
    printf("Enter real part : ");
    scanf("%f",&a1.real);
    printf("Enter imaginary part : ");
    scanf("%f",&a1.img);
    return a1;
}
void disp_comp(struct comp_number c)
{
    printf("%f + (%f)i", c.real , c.img);
}

struct comp_number add_comp(struct comp_number c1 , struct comp_number c2)
{
    struct comp_number sum ;
    sum.real = c1.real + c2.real ;
    sum.img = c1.img + c2.img ;
    return sum ;
}

struct comp_number sub_comp(struct comp_number c1 , struct comp_number c2)
{
    struct comp_number diff ;
    diff.real = c1.real - c2.real ;
    diff.img = diff.img - diff.img ;
    return diff ;
}

struct comp_number mult_com(struct comp_number c1 , struct comp_number c2)
{
    struct comp_number mul;
    mul.real = c1.real * c2.real;
    mul.img = c1.img * c2.img ;
    return mul ;
}
