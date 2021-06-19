#include <iostream>
#include <math.h>
#include "triangulo.h"
using namespace std;

tTriangulo t;
tTriangulo::tTri2 tm; 

    void tTriangulo::insere (int la1, int la2, int la3){
        t.lado1 = la1;
        t.lado2 = la2;
        t.lado3 = la3;
    }

    int perimetro(tTriangulo t){
      int perim = t.lado1+t.lado2+t.lado3;
      return perim;
    }

    void doismenores (tTriangulo t){
      if(t.lado1>t.lado2 && t.lado1>t.lado3){
        tm.lm1=t.lado2;
        tm.lm2=t.lado3;
      }
      if(t.lado2>t.lado1 && t.lado2>t.lado3){
        tm.lm1=t.lado1;
        tm.lm2=t.lado3;
      }
      if(t.lado3>t.lado2 && t.lado3>t.lado1){
        tm.lm1=t.lado2;
        tm.lm2=t.lado1;    
      } 
    };

     float area(tTriangulo t){
      doismenores(t);
      float ar = ((tm.lm1*tm.lm2)/2);
      return ar;  
     }

     float hipotenusa(tTriangulo t){
       doismenores(t);
       float hip = sqrt(pow(tm.lm1,2)+pow(tm.lm2,2));
       return hip;
     }

      void tTriangulo::imprime(tTriangulo){
      
        cout << "--------------" << endl;
        cout << "perimetro: " << (int) perimetro(t) << endl;

        cout << "area: " << (float) area(t) << endl;

        cout << "hipotenusa: " << (float) hipotenusa(t) << endl;

        cout << "--------------" << endl;
       }
