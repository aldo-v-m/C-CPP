#include <iostream>
/* El programa pide que sea con #define, aunque personalmente prefiero const char */
#define BLANCO "Blanco"
#define NARANJA "Naranja" 
#define MACHO "Macho"
#define HEMBRA "Hembra" 

using namespace std;

class Zoo 
{
    public:
    
      int opc,tig,ca;//tig numero de tigrillo -- ca caracteristica
      float tigri[3][2]; //kilos[i][0] -- peso [i][1]
      char sexo[3][10];  //Sexo [i][0]-- Color [i][1]
      char color[3][10];
      
      void menu()
      {
      cout<<"** Bienvenido al programa del zoologico  **"<<endl;
      cout<<"*******************************************"<<endl;
      cout<<"***  Elige entre las opciones del menu  ***"<<endl;
      cout<<"*******************************************"<<endl;
      cout<<"****** 1.- Capturar el Tigrillo 1   *******"<<endl;
      cout<<"****** 2.- Actualizar el Tigrillo 1 *******"<<endl;      
      cout<<"****** 3.- Capturar el Tigrillo 2   *******"<<endl;
      cout<<"****** 4.- Actualizar el Tigrillo 2 *******"<<endl;
      cout<<"****** 5.- Capturar el Tigrillo 3   *******"<<endl;
      cout<<"****** 6.- Actualizar el Tigrillo 3 *******"<<endl;
      cout<<"****** 7.- Mostrar todos los gatitos ******"<<endl;
      cout<<"*******************************************"<<endl<<endl;
      
      cin>>opc;
      
         switch(opc)
         {
         case 1:
              tig=0; 
              capturar();
              break;
         
         case 2:
               tig=0;
               act();
               break;
         
         case 3: 
              tig=1;
              capturar();
              break;
              
         case 4: 
              tig=1;
              act();
              break;
         
         case 5: 
              tig=2;
              capturar();
              break;
          
        case 6:
             tig=2;
             act();
             break;    
                
        case 7:
             mostrar();
             break;
        
        default: cout<<"Opcion invalida";
                 menu();        
         }   
      }
    
    void capturar()
      {
       cout<<endl<<"Introduce los datos que se requieran"<<endl;
       cout<<" Sexo: 1-Macho  2-Hembra "<<endl;
       cin>>ca;
       
       if(ca==1){
                 sexo[tig][10] = 'MACHO';
                 }
       if(ca==2){
                sexo[tig][10] = 'HEMBRA';
                }
                
       cout<<endl<<"Color:  1-Blanco   2-Naranja "<<endl;
       cin>>ca;
       
       if(ca==1){
                color[tig][10]= 'BLANCO';
                }
        if(ca==2){
                color[tig][10]='NARANJA';
                }  
       
       cout<<endl<<"Cantidad de comida en Kilos"<<endl;
       cin>>tigri[tig][0];
       cout<<endl<<"Peso del animal con decimales"<<endl;
       cin>>tigri[tig][1];
       
       menu();
      }            
      void act()
      {
       cout<<endl<<"Cantidad de comida en Kilos"<<endl;
       cin>>tigri[tig][0];
       cout<<endl<<"Peso del animal con decimales"<<endl;
       cin>>tigri[tig][1];
      }             
       void mostrar()
       {
       cout<<endl<<"A continuacion se muestran los datos de todos los animales"<<endl;
       for(int i=0;i<2;i++)
               {
                cout<<"Tigrillo "<<i<<endl<<endl;
                cout<<"Sexo: "<<sexo[i][10]<<endl;
                cout<<"Color: "<<color[i][10]<<endl;
                cout<<"Peso actual: "<<tigri[i][0]<<endl;
                cout<<"Cantidad de comida: "<<tigri[i][1]<<endl;  
                cout<<endl<<endl;   
               }
               menu();
       }            
                    
};

int main()
{
    Zoo prueba;
    prueba.menu();
    return 0;
}
