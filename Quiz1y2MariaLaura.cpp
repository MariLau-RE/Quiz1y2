#include <iostream>
using namespace std;

class Noticia {
   public:
    Noticia() //Si los valores ingresados son vacíos se llama a este constructor
    {
       tipo=0;	
       titulo = "";
       fecha = "";
       reportero="";

    }

   Noticia(int n, string  t, string f, string r) //De insertar un titulo y autor se utilizará  este constructor
    {
       tipo= n;
       titulo = t;
       fecha= f;
       reportero = r;

    }

	int tipo;
    string titulo;
    string fecha;
    string reportero;

    
void getinfo(){

	cout<<"Titulo: "<<titulo<<endl;
	cout<<"Fecha: "<<fecha<<endl;
	cout<<"Reportero: "<<reportero<<endl;

}
};


class NoticiaPaper: public Noticia {
	
   public:
    NoticiaPaper() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       ruta="";
    }

   NoticiaPaper(string  t, string f, string r, string Ruta ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       ruta= Ruta;

    }

   	string titulo;
    string fecha;
    string reportero;
    string ruta;
    
void getinfo(){


	cout<<"Ruta: "<<ruta;
}
};




class NoticiaDigital: public Noticia {
   public:
    NoticiaDigital() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       //media=0;
    }

   NoticiaDigital(string  t, string f, string r, int m ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       media=m;
    }

   	string titulo;
    string fecha;
    string reportero;
	int media;


void getinfo(){

	cout<<"Media: "<<media;
}

   friend class Media;
};


class NoticiaRadio: public Noticia {
   public:
    NoticiaRadio() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       audio="";

    }

   NoticiaRadio(string  t, string f, string r, string a ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       audio= a;

    }

   	string titulo;
    string fecha;
    string reportero;
    string audio;


void getinfo(){


	cout<<"URL: "<<audio;
}
        
};

class Media//: public NoticiaDigital 
{
   public:
    Media() //Si los valores ingresados son vacíos se llama a este constructor
    {
       codmedia=0;
	   NombreTipo = "";
       info = "";
       rutamedia="";
    }

   Media(int codigo, string n, string i, string rm) //De insertar un titulo y autor se utilizará  este constructor
    {
       codmedia= codigo;
	   NombreTipo= n;
       info = i;
       rutamedia= rm;
    }


    int codmedia;
    string NombreTipo;
    string info;
    string rutamedia;


void getinfo(){

	//cout<<"Media: "<<codmedia;
	cout<<"Tipo: "<<NombreTipo;
	cout<<"info: "<<info;
	cout<<"Ruta: "<<rutamedia;
}       
};



int main(int argc, char**argv){
	
   Noticia* tipo[3];
   Media* codmedia[3];
   
   NoticiaPaper v1("Zelenski celebra haber complicado los planes perfidos de rusia","02/03/2022","Agencia","https://www.crhoy.com/wp-content/uploads/2022/02/Zelenski.jpg");
   //NoticiaDigital v2("COVID-19: ultimas horas dejaron menos de 2 mil casos","02/03/2022","Jason Urena","");
   //NoticiaRadio v3("Preste atencion:Pasaporte le saldra mas caro por ser biometrico","02/03/2022","Erick Murillo",);
   tipo[0]=&v1;
   //tipo[1]=&v2;
   //tipo[2]=&v3;
   
   
   for (int i=0; i<3; i++){
   	tipo[i]->getinfo();
   	cout<<endl<<endl<<endl;
	   }
   
   return 0;
}
