
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int medreg=0;
int pacreg=0;



class Persona
{
    public:
    string nombre,apellido_pa, apellido_ma, direccion, sexo, edo_civil;

    void capturar_datos(void)
    {
       cout<<" Nombre:   ";
       getline(cin,nombre);cout<<endl<<endl;
       cout<<" Apeliido paterno:   ";
       getline(cin,apellido_pa);cout<<endl<<endl;
       cout<<" Apeliido materno:   ";
       getline (cin,apellido_ma);cout<<endl<<endl;
       cout<<" Direccion:   ";
       getline (cin,direccion);cout<<endl<<endl;
       cout<<" Sexo:   ";
       getline(cin,sexo);cout<<endl<<endl;
       cout<<" Estado Civil:   ";
       getline(cin,edo_civil);cout<<endl;
    }


};

class Medico : public Persona{

    public:

    string id_medico,telefono[3];
    int dia, mes, anio, opc,mod,x;

    void capturar()
    {
       system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MENU CAPTURAR      *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" Ingresa los datos del medico que se requieran"<<endl<<endl;
       cout<<" ID:   ";
       cin.ignore();
       getline(cin,id_medico);cout<<endl<<endl;

       capturar_datos();

            for( x=0;x<=2;x++)
            {
                cout<<endl<<" Telefono "<<x+1<<":   "<<endl;
                getline(cin,telefono[x]);
                cout<<endl;
            }
            cout<<endl;
       system("pause");
       system("cls");

    }

    void mostrar()
    {
        system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MENU MOSTRAR       *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" ID "<<id_medico<<endl<<endl;
       cout<<" Nombre: "<<nombre<<endl<<endl;
       cout<<" Apellido paterno: "<<apellido_pa<<endl<<endl;
       cout<<" Apellido materno: "<<apellido_ma<<endl<<endl;
       cout<<" Direccion: "<<direccion<<endl<<endl;
            x=0;
            while(x<3)
            {
            cout<<" Telefono "<<x+1<<":  "<<telefono[x]<<endl<<endl;
            x++;
            }
       cout<<" Sexo: "<<sexo<<endl<<endl;
       cout<<" Estado Civil: "<<edo_civil<<endl<<endl;

       system("pause");

    }

     void modificar()
    {
              do{
                system("cls");
                cout<<"Elige el campo que deseas modificar"<<endl<<endl;
                cout<<"**********************"<<endl;
                cout<<"** 1.-Direccion     **"<<endl;
                cout<<"** 2.-Estado Civil  **"<<endl;
                cout<<"** 3.-Telefono      **"<<endl;
                cout<<"** 4.-Salir         **"<<endl;
                cout<<"**********************"<<endl<<endl;

                cin>>mod;

                    switch(mod)
                    {
                    case 1:
                        cout<<" Direccion:   ";
                        cin.ignore();
                        getline(cin,direccion);cout<<endl;
                        break;

                    case 2:
                        cout<<" Estado Civil:   ";
                        cin.ignore();
                        getline(cin,edo_civil);cout<<endl;
                        break;

                    case 3:

                       do{
                        cout<<"Indica que telefono quieres modificar "<<endl;
                        cin>>x;
                        x = x-1;
                        cin.ignore();
                         }while(x>3);
                        cout<<"Telefono "<<x+1<<":   "<<endl;
                        getline(cin,telefono[x]);
                        break;

                    case 4: break;

                    default:
                        cout<<"Esa opcion es invalida"<<endl;
                        system("pause");

                    }
                 }while(mod!=4);
            }

}prob[10];

int Buscar2(void)
 {
string id_buscar2;
int y;

        system("cls");
       cout<<endl<<" Introduce el id del Medico:   ";
       getline(cin,id_buscar2);
            for(y=0;y<10;y++)
                {
                    if(prob[y].id_medico == id_buscar2)
                    {
                    prob[y].mostrar();
                    return y;
                    }
                }

                cout<<endl<<" ESE ID DE MEDICO NO EXISTE"<<endl<<endl;
                system("pause");
                return 100;

 }

class Expediente{
    public:

    string id_exp;
    string fecha,idmedico;
    string medicina[10],hora[10],idpaciente;
    int cantmedi,aux,mod1,med;
    float peso,estatura,dosis[10];

    void capturar(string idp)
    {
        cantmedi=10;
        med=100;
        this->idpaciente=idp;//Manda el ID del paciente en turno
        system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MENU CAPTURAR      *"<<endl;
       cout<<"*        EXPEDIENTE       *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" Ingresa los datos que se requieran"<<endl<<endl;
       cout<<" Fecha:  ";
       getline(cin,fecha);cout<<endl<<endl;
       cout<<" ID del Expediente:   ";
       getline(cin,id_exp);cout<<endl<<endl;

       while(med>99)
        {
        med=Buscar2();
        system("cls");
        }
        idmedico=prob[med].id_medico;

       cout<<" Peso en KG:   ";
       cin>>peso;cout<<endl<<endl;
       cout<<" Estatura en metros:   ";
       cin>>estatura;cout<<endl<<endl;

       while(!(cantmedi<10&&cantmedi>=0))
        {
        system("cls");
       cout<<" Ingresa la cantidad de medicamentos del paciente:  ";
       cin>>cantmedi;cout<<endl<<endl;
       }
       aux=0;
            while(aux<cantmedi)
            {
            system("cls");
           cout<<" Medicina "<<aux+1<<":   ";
           cin>>medicina[aux];cout<<endl<<endl;
           cout<<" Hora en formato de 24 horas:   ";
           cin>>hora[aux];cout<<endl<<endl;
           cout<<" Dosis en mililitros:   ";
           cin>>dosis[aux];cout<<endl<<endl;
           aux++;
            }

       system("pause");
       system("cls");

    }

    void mostrar ()
    {
        system("cls");
       cout<<"***************************"<<endl;
       cout<<"*    MOSTRAR EXPEDIENTE   *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" ID del Expediente: "<<id_exp<<endl<<endl;
       cout<<" ID de Paciente: "<<idpaciente<<endl<<endl;
       cout<<" ID del Medico: "<<idmedico<<endl<<endl;
       cout<<" Peso: "<<peso<<" Kg"<<endl<<endl;
       cout<<" Estatura: "<<estatura<<" mts"<<endl<<endl;

        aux=0;
        while(aux<cantmedi){
       cout<<" Medicina "<<aux+1<<":  "<<medicina[aux]<<endl<<endl;
       cout<<" Dosis "<<aux+1<<":  "<<dosis[aux]<<" ml"<<endl<<endl;
       cout<<" Hora "<<aux+1<<":  "<<hora[aux]<<endl<<endl;
       aux++;
       system("pause");
        }
        if(cantmedi==0)
        {
       system("pause");
        }
    }

    void modificar()
    {
    do{
        med=100;
        system("cls");
        cout<<"Elige el campo que deseas modificar"<<endl<<endl;
        cout<<"**********************"<<endl;
        cout<<"** 1.-ID del Medico **"<<endl;
        cout<<"** 2.-Peso          **"<<endl;
        cout<<"** 3.-Estatura      **"<<endl;
        cout<<"** 4.-Medicinas     **"<<endl;
        cout<<"** 5.-Salir         **"<<endl;
        cout<<"**********************"<<endl<<endl;

        cin>>mod1;
        cout<<endl;

            switch(mod1)
            {
            case 1:
                while(med>99)
                {
                cin.ignore();
                med=Buscar2();
                }
                idmedico=prob[med].id_medico;
                break;

            case 2:
                cout<<" Peso en KG:   ";
               cin>>peso;cout<<endl;

                break;

            case 3:
                cout<<" Estatura en metros:   ";
                cin>>estatura;cout<<endl;

                break;

            case 4:
                aux=10;
                    while(aux>cantmedi)
                    {
                    system("cls");
                    cout<<" Indica que medicina quieres modificar "<<endl;
                    cin>>aux;
                    }
                cout<<endl<<" Medicina "<<aux<<":   ";
               cin>>medicina[aux-1];cout<<endl<<endl;
               cout<<" Hora en formato de 24 horas:   ";
               cin>>hora[aux-1];cout<<endl<<endl;
               cout<<" Dosis:   ";
               cin>>dosis[aux-1];cout<<endl<<endl;
                 break;

            case 5: break;


            default:
                cout<<"Esa opcion es invalida"<<endl;
                system("pause");

            }
         }while(mod1!=5);
      }
    }expe[10];

class pagos{
    public:
        string id_pago,cuarto;
        int dias,precio,cantserv,aux1,opc,costo_servicio[10];
        float descuento;
        string servicios[10];

       void capturar(string id_pago1)
        {
            this->id_pago=id_pago1;//Manda el ID del paciente en turno
            system("cls");
           cout<<"***************************"<<endl;
           cout<<"*      MENU CAPTURAR      *"<<endl;
           cout<<"*         Pagos           *"<<endl;
           cout<<"***************************"<<endl<<endl;
           cout<<" Ingresa los datos que se requieran"<<endl<<endl;
           cout<<" Tipo de cuarto:  ";
           getline(cin,cuarto);cout<<endl<<endl;
           cout<<" Dias internado:   ";
           cin>>dias;cout<<endl<<endl;
           cout<<" Precio por dia en pesos:   ";
           cin>>precio;cout<<endl<<endl;
           cout<<" Descuento en porcentaje:  ";
           cin>>descuento;cout<<endl<<endl;
           cout<<" Cuantos servicios extras se desea agregar"<<endl;
           cin>>cantserv;
           cin.ignore();

           aux1=0;
                while(aux1<cantserv)
                {
                cout<<endl<<endl<<" Descripcion de servicio extra "<<aux1+1<<": ";
                getline(cin,servicios[aux1]);
                cout<<endl<<" Precio del servicio: ";
                cin>>costo_servicio[aux1];
                aux1++;
                }
                cout<<endl;
           system("pause");
           system("cls");
        }

        void mostrar ()
        {
        system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MOSTRAR PAGOS      *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" ID "<<id_pago<<endl<<endl;
       cout<<" Dias internado: "<<dias<<endl<<endl;
       cout<<" Tipo de cuarto: "<<cuarto<<endl<<endl;
       cout<<" Precio por dia en pesos: "<<precio<<endl<<endl;
       cout<<" Descuento en porcentaje: "<<descuento<<endl<<endl;
       cout<<" Servicios Extra = "<<cantserv<<endl<<endl;
        aux1=0;
                while(aux1>cantserv)
                {
                cout<<aux1+1<<".- "<<servicios[aux1]<<"  $ "<<costo_servicio[aux1]<<endl;
                aux1++;
                }
       system("pause");
       system("cls");
        }

        void modificar()
        {
            opc=0;
            do{
            system("cls");
            cout<<"Elige el campo que deseas modificar"<<endl<<endl;
            cout<<"**********************"<<endl;
            cout<<"** 1.-Dias interno  **"<<endl;
            cout<<"** 2.-Descuento     **"<<endl;
            cout<<"** 3.-Servicio extra**"<<endl;
            cout<<"** 4.-Salir         **"<<endl;
            cout<<"**********************"<<endl<<endl;

            cin>>opc;

                switch(opc)
                {
                case 1:

                    cout<<" Dias interno:   ";
                    cin>>dias;cout<<endl;
                    break;

                case 2:

                    cout<<" Descuento:   ";
                    cin>>descuento;cout<<endl;
                    break;

                case 3:
                    cantserv=10;
                    while(!(cantserv<10&&cantserv>=0))
                    {
                    cout<<" Cuantos servicios extras se desea agregar"<<endl;
                    cin>>cantserv;
                    }
                   cin.ignore();

                   aux1=0;
                    while(aux1<cantserv)
                    {
                    cout<<endl<<endl<<" Descripcion de servicio extra "<<aux1+1<<": ";
                    getline(cin,servicios[aux1]);
                    cout<<endl<<" Precio del servicio: ";
                    cin>>costo_servicio[aux1];
                    aux1++;
                    }
                    cout<<endl;
                    break;

                case 4: break;

                default:
                    cout<<" Esa opcion es invalida"<<endl;
                    system("pause");
                }
             }while(opc!=4);
        }

        void facturar()
        {
        float total;
        system("cls");
        cout<<"**************************"<<endl;
        cout<<"********* FACTURA ********"<<endl;
        cout<<"**************************"<<endl<<endl;
        cout<<" ID "<<id_pago<<endl;
        cout<<" Dias interno:  "<<dias<<endl;
        cout<<" Tipo de cuarto: "<<cuarto<<endl;
        cout<<" Precio por dia en pesos: $"<<precio<<endl;
        cout<<" Servicios Extra = "<<cantserv<<endl<<endl;
        aux1=0;
                while(aux1<cantserv)
                {
                cout<<aux1+1<<".- "<<servicios[aux1]<<"  $ "<<costo_servicio[aux1]<<endl;
                aux1++;
                }
        cout<<" Descuento en porcentaje: %"<<descuento<<endl;
            total=0;
            aux1=0;
            while(aux1<cantserv)
            {
            total=total+costo_servicio[aux1];
            aux1++;
            }
        total=total+(precio*dias);
        total=total-((total)*(descuento/100));
        cout<<" Importe total a pagar: $"<<total<<endl<<endl;

        system("pause");
        system("cls");

        }
  }pago[10];

class Paciente : public Persona{

    public:

    string id_paciente,telefono;
    int dia, mes, anio,mod,rep;

   void capturar(int w)
   {
       system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MENU CAPTURAR      *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" Ingresa los datos del paciente que se requieran"<<endl<<endl;
       cout<<" ID:   ";
       cin.ignore();
       getline(cin,id_paciente);cout<<endl<<endl;

       capturar_datos();

       cout<<endl<<" Telefono:   ";
       getline(cin,telefono);cout<<endl<<endl;


       system("pause");
       system("cls");
       expe[w].capturar(this->id_paciente);
    }

    void mostrar()
    {
        system("cls");
       cout<<"***************************"<<endl;
       cout<<"*      MENU MOSTRAR       *"<<endl;
       cout<<"***************************"<<endl<<endl;
       cout<<" ID "<<id_paciente<<endl<<endl;
       cout<<" Nombre: "<<nombre<<endl<<endl;
       cout<<" Apellido paterno: "<<apellido_pa<<endl<<endl;
       cout<<" Apellido materno: "<<apellido_ma<<endl<<endl;
       cout<<" Direccion: "<<direccion<<endl<<endl;
       cout<<" Telefono: "<<telefono<<endl<<endl;
       cout<<" Sexo: "<<sexo<<endl<<endl;
       cout<<" Estado Civil: "<<edo_civil<<endl<<endl;

       system("pause");
       system("cls");
    }

    void modificar()
    {
              do{
                system("cls");
                cout<<"Elige el campo que deseas modificar"<<endl<<endl;
                cout<<"**********************"<<endl;
                cout<<"** 1.-Direccion     **"<<endl;
                cout<<"** 2.-Estado Civil  **"<<endl;
                cout<<"** 3.-Telefono      **"<<endl;
                cout<<"** 4.-Salir         **"<<endl;
                cout<<"**********************"<<endl<<endl;

                cin>>mod;

                    switch(mod)
                    {
                    case 1:
                        cin.ignore();
                        cout<<" Direccion:   ";
                        getline(cin,direccion);cout<<endl;
                        break;

                    case 2:

                        cout<<" Estado Civil:   ";
                        cin>>edo_civil;cout<<endl;
                        break;

                    case 3:

                        cout<<" Telefono:   ";
                        cin>>telefono;cout<<endl;
                        break;

                    case 4: break;

                    default:
                        cout<<" Esa opcion es invalida"<<endl;
                        system("pause");

                    }
                 }while(mod!=4);

    }

}obj[10];


int Buscar1 (void)
{
string id_buscar1;
int x;

        system("cls");
       cout<<" Introduce el id del paciente:   ";
       getline(cin,id_buscar1);
            for(x=0;x<10;x++)
                {
                    if(obj[x].id_paciente == id_buscar1)
                    {
                    obj[x].mostrar();
                    return x;
                    }
                }

                cout<<endl<<" ESE ID DE PACIENTE NO EXISTE"<<endl<<endl;
                system("pause");
                return 100;

}

int Buscar3(void)
 {
string id_buscar3;
int yexp;

        system("cls");
       cout<<" Introduce el id del expediente:   ";
       getline(cin,id_buscar3);
            for(yexp=0;yexp<10;yexp++)
                {
                    if(expe[yexp].id_exp == id_buscar3)
                    {
                    expe[yexp].mostrar();
                    return 1;
                    }
                }
                cout<<" EL ID DE EXPEDIENTE NO EXISTE"<<endl;
                system("pause");
                return 0;

 }

int Buscar4(void)
{
string id_buscar4;
int z;

        system("cls");
       cout<<" Introduce el id del paciente:   ";
       getline(cin,id_buscar4);
            for(z=0;z<10;z++)
                {
                    if(pago[z].id_pago == id_buscar4)
                    {
                    pago[z].mostrar();
                    return 1;
                    }
                }
                cout<<endl<<" ESE PACIENTE NO EXISTE O NO AH SIDO REGISTRADO"<<endl<<endl;
                system("pause");
                return 0;
}


void Menu1(void)
{

    string pa_buscar;
    int g,h,fb,flag,opc;
    g=0;
    h=0;
    fb=0;
    flag=0;
       do{
        system("cls");
        cout<<"***************************"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"*  OPCIONES DEL PACIENTE **"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"*  Introduce el numero   **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"* 1.- Capturar           **"<<endl;
        cout<<"* 2.- Mostrar            **"<<endl;
        cout<<"* 3.- Buscar             **"<<endl;
        cout<<"* 4.- Modificar          **"<<endl;
        cout<<"* 5.- Salir              **"<<endl;
        cout<<"***************************"<<endl<<endl;

        cin>>opc;
        cout<<endl;

            switch (opc)
            {
            case 1:
                if(pacreg<9){
                   obj[pacreg].capturar(pacreg);
                    pacreg++;
                    }
                    break;

            case 2: if(pacreg>0)
                    {
                    for(g=0;g<=pacreg-1;g++)
                    {
                    obj[g].mostrar();
                    }
                    }
                    flag=0;
                    break;

            case 3: if(pacreg>0)
                    {
                    cin.ignore();
                    Buscar1();
                    }

                    break;

            case 4:
                if(pacreg>0)
                    {
                    system("cls");
                    cout<<" Introduce el id del paciente que quieres modificar:  "<<endl<<endl;
                    cin>>pa_buscar;
                    for(h=0;h<=pacreg+1;h++)
                     {
                        if(obj[h].id_paciente == pa_buscar)
                        {
                        obj[h].modificar();
                        fb=1;
                        }
                     }
                     if(fb==0){
                        cout<<" EL NUMERO DE EXPEDIENTE NO EXISTE"<<endl;
                     }
                     system("pause");
                    flag=0;
                    }
                    break;

            case 5: flag=1;
            break;

            default:
                cout<<" Esa opcion es invalida"<<endl;
                system("pause");
                flag = 0;
            }
          }while(flag!=1);
          system("cls");


}

void Menu2 (void)
{
string me_buscar;
int flag1,opc,gm,fm,hm;

opc=0;
gm=0;
fm=0;
hm=0;

        flag1=0;
       while(flag1!=1){
        system("cls");
        cout<<"***************************"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"*  OPCIONES DEL MEDICO   **"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"*  Introduce el numero   **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"* 1.- Capturar           **"<<endl;
        cout<<"* 2.- Mostrar            **"<<endl;
        cout<<"* 3.- Buscar             **"<<endl;
        cout<<"* 4.- Modificar          **"<<endl;
        cout<<"* 5.- Salir              **"<<endl;
        cout<<"***************************"<<endl<<endl;

        cin>>opc;
        cout<<endl;

            switch (opc)
            {
            case 1: flag1=2;
                    if(medreg<9){
                    prob[medreg].capturar();
                    medreg++;
                    }
                    break;

            case 2:
                if(medreg>0){
                for(gm=0;gm<=medreg-1;gm++)
                    {
                   prob[gm].mostrar();
                    }
                }else
                    {
                    cout<<" Captura primero, Por favor"<<endl;
                    system("pause");
                    }
                    flag1=0;
                    break;

            case 3: if(medreg>0)
                    {
                    cin.ignore();
                    Buscar2();
                    }else
                      {
                    cout<<" Captura primero, Por favor"<<endl;
                    system("pause");
                      }
                    break;

            case 4:
                 if(medreg>0)
                    {
                    system("cls");
                    cout<<" Introduce el id del medico que quieres modificar:  "<<endl<<endl;
                    cin>>me_buscar;
                    for(hm=0;hm<medreg;hm++)
                     {
                        if(prob[hm].id_medico == me_buscar)
                        {
                        prob[hm].modificar();
                        fm=1;
                        }
                     }
                     if(fm==0)
                        {
                        cout<<endl<<" EL ID DEL MEDICO NO EXISTE"<<endl;
                       system("pause");
                        }
                    }else
                      {
                    cout<<" Captura primero, Por favor"<<endl;
                    system("pause");
                      }
                    flag1=0;
                    break;

            case 5: flag1=1;
            break;

            default:
                cout<<" Esa opcion es invalida"<<endl;
                system("pause");
                flag1 = 0;
            }
          }
          system("cls");

}

void Menu3 (void)
{
int flag2,opcex,gex,fex,hexp;

flag2=0;
opcex=0;
fex=0;
hexp=0;


string exp_buscar;

        flag2=0;
       while(flag2!=1){
        system("cls");
        cout<<"****************************"<<endl;
        cout<<"*                         **"<<endl;
        cout<<"* OPCIONES DEL EXPEDIENTE **"<<endl;
        cout<<"*                         **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"*  Introduce el numero    **"<<endl;
        cout<<"***************************"<<endl;
      //  cout<<"* 1.- Capturar           **"<<endl;
        cout<<"* 1.- Mostrar             **"<<endl;
        cout<<"* 2.- Buscar              **"<<endl;
        cout<<"* 3.- Modificar           **"<<endl;
        cout<<"* 4.- Salir               **"<<endl;
        cout<<"****************************"<<endl<<endl;

        cin>>opcex;
        cout<<endl;

            switch (opcex)
            {
        /*    case 1: flag2=2;
                    if(iex<9){
                    expe[iex].capturar();
                    iex++;
                    }
                    break;*/

            case 1:
                for(gex=0;gex<pacreg;gex++)
                    {
                   expe[gex].mostrar();
                    }
                    flag2=0;
                    break;

            case 2: if(pacreg>0)
                    {
                    cin.ignore();
                    Buscar3();
                    }else
                      {
                    cout<<"Captura primero, Por favor"<<endl;
                    system("pause");
                      }
                    break;

            case 3:
                system("cls");
                cout<<"Introduce el id del expediente que quieres modificar:  "<<endl<<endl;
                cin>>exp_buscar;
                for(hexp=0;hexp<=pacreg+1;hexp++)
                 {
                    if(expe[hexp].id_exp == exp_buscar)
                    {
                    expe[hexp].modificar();
                    fex=1;
                    }
                 }
                 if(fex==0){
                    cout<<"EL NUMERO DE EXPEDIENTE NO EXISTE"<<endl;
                 }
                 system("pause");
                    flag2=0;
                    break;

            case 4: flag2=1;
            break;

            default:
                cout<<"Esa opcion es invalida"<<endl;
                system("pause");
                flag2 = 0;
            }
          }
          system("cls");

}

void Menu4 (void)
{
int flag3,opcpag,gpag,fpag,hpag,auxpa,xpag,posicion;

auxpa=0;
xpag=0;
posicion=0;


string pag_buscar,idpago;

        flag3=0;
       while(flag3!=1){
        system("cls");
        cout<<"***************************"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"*   OPCIONES DE PAGOS    **"<<endl;
        cout<<"*                        **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"*  Introduce la opcion   **"<<endl;
        cout<<"***************************"<<endl;
        cout<<"* 1.- Capturar           **"<<endl;
        cout<<"* 2.- Mostrar            **"<<endl;
        cout<<"* 3.- Buscar             **"<<endl;
        cout<<"* 4.- Modificar          **"<<endl;
        cout<<"* 5.- Facturar           **"<<endl;
        cout<<"* 6.- Salir              **"<<endl;
        cout<<"***************************"<<endl<<endl;

        cin>>opcpag;

            switch (opcpag)
            {
            case 1: flag3=2;
            cout<<" Capturar pago para: "<<endl;
            cin.ignore();
            posicion=Buscar1();
               if(posicion < 100)
               {
                pago[posicion].capturar(obj[posicion].id_paciente);
               }
                    break;

            case 2:
                    gpag=0;
                    while(!(pago[gpag].id_pago.empty()))
                    {
                   pago[gpag].mostrar();
                   gpag++;
                    }
                    flag3=2;
                    break;

            case 3: if(flag3==2)
                    {
                    cin.ignore();
                    Buscar4();
                    }else
                      {
                    cout<<" Captura primero, Por favor"<<endl;
                    system("pause");
                      }
                    break;

            case 4:
                fpag=0;
                system("cls");
                cout<<" Introduce el id del paciente del pago que quieres modificar:  "<<endl<<endl;
                cin>>pag_buscar;
                for(hpag=0;hpag<=9;hpag++)
                 {
                    if(pago[hpag].id_pago == pag_buscar)
                    {
                    pago[hpag].modificar();
                    fpag=1;
                    }
                 }
                 if(fpag==0){
                    cout<<endl<<" EL NUMERO DE EXPEDIENTE NO EXISTE"<<endl<<endl;
                 }
                 system("pause");
                    flag3=2;
                    break;

            case 5:
                cout<<" Datos de Facturacion: "<<endl;
                cin.ignore();
                posicion=Buscar1();
               if(posicion < 100)
               {
                pago[posicion].facturar();
               }

            break;

            case 6:flag3=1;
            break;

            default:
                cout<<" Esa opcion es invalida"<<endl;
                system("pause");
                flag3 = 2;
            }
          }
          system("cls");
}


int main (void){
int menuopc;
        while(menuopc!=5)
        {
            system("cls");
            cout<<"***************************"<<endl;
            cout<<"*                        **"<<endl;
            cout<<"*  Control Hospitalario  **"<<endl;
            cout<<"*                        **"<<endl;
            cout<<"***************************"<<endl;
            cout<<"*     Menu Principal     **"<<endl;
            cout<<"***************************"<<endl;
            cout<<"* 1.- Paciente           **"<<endl;
            cout<<"* 2.- Medico             **"<<endl;
            cout<<"* 3.- Expediente         **"<<endl;
            cout<<"* 4.- Pagos              **"<<endl;
            cout<<"* 5.- Salir              **"<<endl;
            cout<<"***************************"<<endl<<endl;
            cin>>menuopc;

            switch(menuopc)
            {
            case 1:
                    if(medreg>0)
                    {
                    Menu1();
                    }
                    break;

            case 2: Menu2();
                    break;

            case 3: if(pacreg>0)
                    {
                    Menu3();
                    }
                    break;

            case 4: if(pacreg>0)
                    {
                    Menu4();
                    }
                    break;

            case 5: return 0;

            default: cout<<" Opcion invalida";
                     system("pause");
            }
        }

return 0 ;

}
