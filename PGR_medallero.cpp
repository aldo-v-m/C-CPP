#include <iostream>

using namespace std;

class medallero
{
    public:

    int eua[3] = {45,45,20};
    int alem[3] = {30,55,30};
    int cuba[3] = {20,30,70};
    int mex[3] = {18,50,40};
    int suma = 0,prom = 0;


    void suma_eua()
    {
        suma=0;
        prom=0;
        for(int i=0;i<=2;i++)
            {
            suma=suma+eua[i];
            }
        cout<<"El total de medallas de "<<"EU es = "<<suma<<" medallas"<<endl;
        prom = suma/3;
        cout<<"El promedio de medallas de "<<"EU es = "<<prom<<endl;
        suma = (eua[0]*50)+(eua[1]*30)+(eua[2]*25);
        cout<<"El puntaje obtenido de "<<"EU es = "<<suma<<endl<<endl;
    }

     void suma_alem()
    {
        suma=0;
        prom=0;
        for(int i=0;i<=2;i++)
            {
            suma=suma+alem[i];
            }
        cout<<"El total de medallas de "<<"Alemania es = "<<suma<<" medallas"<<endl;
        prom = suma/3;
        cout<<"El promedio de medallas de "<<"Alemania es = "<<prom<<endl;
        suma = (alem[0]*50)+(alem[1]*30)+(alem[2]*25);
        cout<<"El puntaje obtenido de "<<"Alemania es = "<<suma<<endl<<endl;
    }

    void suma_cuba()
    {
        suma=0;
        prom=0;
        for(int i=0;i<=2;i++)
            {
            suma=suma+cuba[i];
            }
        cout<<"El total de medallas de "<<"Cuba es = "<<suma<<" medallas"<<endl;
        prom = suma/3;
        cout<<"El promedio de medallas de "<<"Cuba es = "<<prom<<endl;
        suma = (cuba[0]*50)+(cuba[1]*30)+(cuba[2]*25);
        cout<<"El puntaje obtenido de "<<"Cuba es = "<<suma<<endl<<endl;
    }

    void suma_mex()
    {
        suma=0;
        prom=0;
        for(int i=0;i<=2;i++)
            {
            suma=suma+mex[i];
            }
        cout<<"El total de medallas de "<<"Mexico es = "<<suma<<" medallas"<<endl;
        prom = suma/3;
        cout<<"El promedio de medallas de "<<"Mexico es = "<<prom<<endl;
        suma = (mex[0]*50)+(mex[1]*30)+(mex[2]*25);
        cout<<"El puntaje obtenido de "<<"Mexico es = "<<suma<<endl<<endl;
    }

    void total()
    {

        suma=0;
     for(int x=0;x<=2;x++)
        {
        suma=suma+eua[x];
        }
     for(int x=0;x<=2;x++)
        {
        suma=suma+alem[x];
        }
    for(int x=0;x<=2;x++)
        {
        suma=suma+cuba[x];
        }
    for(int x=0;x<=2;x++)
        {
        suma=suma+mex[x];
        }
    cout<<"El total de medallas entregadas es = "<<suma<<" medallas"<<endl<<endl;
    }
    void promedio()
    {
   int oro=0,plata=0,bronce=0;

   oro= (eua[0]+alem[2]+cuba[0]+mex[0])/4;
   cout<<"El promedio de medallas de oro entregadas fue de "<<oro<<" medallas"<<endl<<endl;

   plata= (eua[1]+alem[1]+cuba[1]+mex[1])/4;
   cout<<"El promedio de medallas de Plata entregadas fue de "<<plata<<" medallas"<<endl<<endl;

   bronce= (eua[2]+alem[2]+cuba[2]+mex[2])/4;
   cout<<"El promedio de medallas de bronce entregadas fue de "<<bronce<<" medallas"<<endl<<endl;

    }
};

int main (void){
    using namespace std;

medallero tabla;

tabla.suma_eua();
tabla.suma_alem();
tabla.suma_cuba();
tabla.suma_mex();
tabla.total();
tabla.promedio();

return 0;

}
