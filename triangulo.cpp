#include <iostream>
#include <math.h>
#include "triangulo.h"

using namespace std;

// struct tTriangulo{
//   int lado1;
//   int lado2;
//   int lado3;  

// struct tTri2{
//   int lm1;
//   int lm2; 
// };

  tTriangulo t;
  tTriangulo::tTri2 ta;


    // void insere(int la1, int la2, int la3){
    //     t.lado1 = la1;
    //     t.lado2 = la2;
    //     t.lado3 = la3;
    //     cout << "lados inseridos na struct " << endl;
    // }

    int perimetro(tTriangulo t){
      int perim = t.lado1+t.lado2+t.lado3;
      //cout << "calculou perimetro  " << endl;
      return perim;
    }
      
    tTriangulo::tTri2 doismenores (tTriangulo t){
      tTriangulo::tTri2 tm;
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
     //cout << "calculou 2 lados menores, que sao: " << tm.lm1 << " e " << tm.lm2 << endl; 
     return tm; 
    };

     float area(tTriangulo t){
      tTriangulo::tTri2 ta;
      ta = doismenores(t);
      float ar = ((ta.lm1*ta.lm2)/2);
      //cout << "calculou area " << endl;
      return ar;  
     }

     float hipotenusa(tTriangulo t){
       tTriangulo::tTri2 ta;
       ta = doismenores(t);
       float hip = sqrt(pow(ta.lm1,2)+pow(ta.lm2,2));
       //cout << "calculou hip" << endl;
       return hip;
     }

      void imprime(tTriangulo t){
      
        cout << "--------------" << endl;
        cout << "perimetro: " << (int) perimetro(t) << endl;

        cout << "area: " << (float) area(t) << endl;

        cout << "hipotenusa: " << (float) hipotenusa(t) << endl;

        cout << "--------------" << endl;
       }
 //};
