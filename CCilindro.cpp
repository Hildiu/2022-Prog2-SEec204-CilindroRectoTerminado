//
// Created by mbermejo on 6/10/2022.
//

#include "CCilindro.h"


tnumero CCilindro::areaSupercieCilindrica()
{
    return 2*PI*radio*radio;
}

tnumero CCilindro::areaLateral()
{
  return 2*PI*radio*altura;
}

tnumero CCilindro::areaTotal()
{
  return (areaSupercieCilindrica() + areaLateral());
}

tnumero CCilindro::volumen()
{
  return PI*radio*radio*altura;
}
