#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

struct complejo
{
  float x;
  float y;
};

struct rectangulo
{
  struct complejo z1;
  struct complejo z2;
};

struct complejo sumar(struct complejo u, struct complejo v)
{
  struct complejo w;
  w.x = u.x + v.x;
  w.y = u.y + v.y;
  return w;
}

float modulo(struct complejo z)
{
  float r;
  r = sqrt(z.x*z.x + z.y*z.y);
  return r;
}

float area(struct rectangulo r1)
{
  return (r1.z2.x - r1.z1.x)*(r1.z1.y-r1.z2.y);
}

void test()
{
  struct complejo z1 = { 1, 2 };
  struct complejo z2 = { 3, 4 };
  struct complejo z3;
  z3 = sumar(z1, z2);
  assert(z3.x == 4);
  assert(z3.y == 6);

}

int main()
{
  // Declaración e inicialización de la variable z1 de tipo complejo
  struct complejo z1 = { 2, 0 };
  struct complejo z2 = { 0, 2 };
  struct complejo z3;
  struct rectangulo r1;
  r1.z1 = z1;
  r1.z2 = z2;
  printf("(%.2f, %.2f)\n", z1.x, z1.y );
  printf("(%.2f, %.2f)\n", z2.x, z2.y );
  z3 = sumar(z1, z2);
  printf("(%.2f, %.2f)\n", z3.x, z3.y );
  printf("modulo(%.2f, %.2f) : %.2f\n", z3.x, z3.y, modulo(z3) );
  printf("área de r1{(%.2f, %.2f), (%.2f, %.2f) } : %.2f\n", r1.z1.x, r1.z1.y, r1.z2.x, r1.z2.y, area(r1) );
  test();
  return 0;
}


