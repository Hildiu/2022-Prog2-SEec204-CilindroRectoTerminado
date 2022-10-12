/*--------------------------------------------------
 * Dato de Entrada: radio, altura (double)
 * Dato de Salida : asupercieCilindrica,
 *                  areaLateral
 *                  areaTotal
 *                  Volumen (double)
 ---------------------------------------------------*/

#include "CCilindro.h"
#include <iomanip>


int main()
{ CCilindro   objCilindro;   //--- estamos usando el constructor por defecto
  tnumero r,h;

  cout << "Radio  : "; cin >> r;
  cout << "Altura : "; cin >> h;
  objCilindro.setRadio(r);
  objCilindro.setAltura(h);
  cout << "\n";
  cout << "Creando el primer objeto\n";
  cout << "El area de la superficie cilindrica es : " << objCilindro.areaSupercieCilindrica() << "\n";
  cout << "El area lateral  : " << objCilindro.areaLateral() << "\n";
  cout << "El area Total    : " << objCilindro.areaTotal() << "\n";
  cout << "El volumen       : " << objCilindro.volumen() << "\n";
  //----- ahora usamos un puntero al objeto objCilindro
  cout << "\n";
  cout << "Ahora realizamos un segundo calculo, modificando los atributos del objeto, usando un puntero\n";
  CCilindro     *pobjCilindro = &objCilindro;
  //--- actualizamos el valor del radio en 50 unidades mas
  //--- actualizamos el valor de la altura en 100 unidades mas
  (*pobjCilindro).setRadio((*pobjCilindro).getRadio() + 50);
  pobjCilindro->setAltura(pobjCilindro->getAltura() + 100);
  cout << "El area de la superficie cilindrica es : " << pobjCilindro->areaSupercieCilindrica() << "\n";
  cout << "El area lateral  : " << pobjCilindro->areaLateral() << "\n";
  cout << "El area Total    : " << pobjCilindro->areaTotal() << "\n";
  cout << "El volumen       : " << fixed << setprecision(7) << (*pobjCilindro).volumen() << "\n";
  cout << "\n";
  //-----------------------------------------------------------------------------
  //-- ahora creamos un segundo objeto dinamico
  CCilindro   *pCil2= nullptr;
  cout << "\nAhora leemos datos para el segundo objeto\n";
  cout << "Radio  : "; cin >> r;
  cout << "Altura : "; cin >> h;

  pCil2 = new CCilindro(r,h);
  cout << "El area de la superficie Cilindrica es : " << pCil2->areaSupercieCilindrica() << "\n";
  cout << "El area lateral es : " << pCil2->areaLateral() << "\n";
  cout << "El area total   es : " << pCil2->areaTotal() << "\n";
  cout << "El Volumen      es : " << pCil2->volumen() << "\n";
  delete pCil2;
  pCil2 = nullptr;
  return 0;
}
