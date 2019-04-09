#include <fstream>
#include <iostream>
using namespace std;
 


void sumas(string filename);

int main(){
  string filename;
  filename = "valores_x.txt";
  sumas(filename);

  filename = "valores_y.txt";
  sumas(filename);
  return 0;
}

void sumas(string filename){
  ifstream xx; 
  string linea;

  xx.open(filename); 
  double s = 0;
    
    
  while(xx){
    getline(xx, linea);
    s+= atof(linea.c_str());
  }
    cout<<" RESPUESTA " << s << endl;

    
}