#include <iostream>
#include <math.h>

using namespace std;

struct tTriangulo{
  int lado1;
  int lado2;
  int lado3;  

struct tTri2{
  int lm1;
  int lm2; 
};

    void insere(int la1, int la2, int la3){
        lado1 = la1;
        lado2 = la2;
        lado3 = la3;
        //cout << "lados inseridos na struct " << endl;
    }

    int perimetro(tTriangulo t){
      int perim = lado1+lado2+lado3;
      //cout << "calculou perimetro  " << endl;
      return perim;
    }
    tTri2 doismenores (tTriangulo t){
      tTri2 tm;
      if(lado1>lado2 && lado1>lado3){
        tm.lm1=lado2;
        tm.lm2=lado3;
      }
      if(lado2>lado1 && lado2>lado3){
        tm.lm1=lado1;
        tm.lm2=lado3;
      }
      if(lado3>lado2 && lado3>lado1){
        tm.lm1=lado2;
        tm.lm2=lado1;    
      }
     //cout << "calculou 2 lados menores, que sao: " << tm.lm1 << " e " << tm.lm2 << endl; 
     return tm; 
    };

     float area(tTriangulo t){
      tTri2 ta;
      ta = doismenores(t);
      float ar = ((ta.lm1*ta.lm2)/2);
      //cout << "calculou area " << endl;
      return ar;  
     }

     float hipotenusa(tTriangulo t){
       tTri2 ta;
       ta = doismenores(t);
       float hip = sqrt(pow(ta.lm1,2)+pow(ta.lm2,2));
       //cout << "calculou hip" << endl;
       return hip;
     }

      void imprime(tTriangulo){
        tTriangulo t;
      
        cout << "--------------" << endl;
        cout << "perimetro: " << (int) perimetro(t) << endl;

        cout << "area: " << (float) area(t) << endl;

        cout << "hipotenusa: " << (float) hipotenusa(t) << endl;

        cout << "--------------" << endl;
       }
 };
