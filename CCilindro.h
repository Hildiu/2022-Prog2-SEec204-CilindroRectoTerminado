//
// Created by mbermejo on 6/10/2022.
//

#ifndef PROY2_CILINDRO_CCILINDRO_H
#define PROY2_CILINDRO_CCILINDRO_H

#include <iostream>
using namespace  std;

using tnumero = double;
const tnumero PI=3.141516;

class CCilindro {
private:
    tnumero radio;
    tnumero altura;
public:
    CCilindro(){ radio =0; altura=0;}   //--- constructor por defecto
    CCilindro( tnumero r, tnumero a) : radio(r), altura(a) {}
    virtual ~CCilindro() {  cout << "\nDestruyendome.......";}
    tnumero areaSupercieCilindrica();
    tnumero areaLateral();
    tnumero areaTotal();
    tnumero volumen();
    //-------metodos de acceso
    void setRadio(tnumero r) { radio=r; }
    void setAltura(tnumero a) { altura=a;}
    tnumero getRadio(){ return radio;}
    tnumero getAltura() { return altura;}
};


#endif //PROY2_CILINDRO_CCILINDRO_H
