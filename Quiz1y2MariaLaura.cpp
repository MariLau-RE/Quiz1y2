#include <iostream>
using namespace std;

class Noticia {
   public:
    Noticia() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       siguiente = NULL;
       anterior =NULL;
    }

   Noticia(string  t, string f, string r) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       siguiente = NULL;
       anterior =NULL;
    }


    string titulo;
    string fecha;
    string reportero;
    Noticia *siguiente;
    Noticia *anterior;
    

};
typedef Noticia *pNoticia;

class NoticiaPaper {
   public:
    NoticiaPaper() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       ruta="";
       siguiente = NULL;
       anterior =NULL;
    }

   NoticiaPaper(string  t, string f, string r, string Ruta ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       ruta= Ruta;
       siguiente = NULL;
       anterior =NULL;
    }


   	string titulo;
    string fecha;
    string reportero;
    string ruta;
    NoticiaPaper *siguiente;
    NoticiaPaper *anterior;
    
void showinfoP(){

	cout<<"Titulo: "<<titulo;
	cout<<"Fecha: "<<fecha;
	cout<<"Reportero: "<<reportero;
	cout<<"Ruta: "<<ruta;
}
    
        
   friend class Noticia;
};
typedef NoticiaPaper *pNoticiaP;

class NoticiaDigital {
   public:
    NoticiaDigital() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       media=0;
       siguiente = NULL;
       anterior =NULL;
    }

   NoticiaDigital(string  t, string f, string r, int m ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       media=m;
       siguiente = NULL;
       anterior =NULL;
    }


   	string titulo;
    string fecha;
    string reportero;
	int media;
    NoticiaDigital *siguiente;
    NoticiaDigital *anterior;

void showinfoD(){

	cout<<"Titulo: "<<titulo;
	cout<<"Fecha: "<<fecha;
	cout<<"Reportero: "<<reportero;
	cout<<"Media: "<<media;
}

   friend class Noticia;
   friend class Media;
};
typedef NoticiaDigital *pNoticiaD;


class NoticiaRadio {
   public:
    NoticiaRadio() //Si los valores ingresados son vacíos se llama a este constructor
    {
       titulo = "";
       fecha = "";
       reportero="";
       audio="";
       siguiente = NULL;
       anterior =NULL;
    }

   NoticiaRadio(string  t, string f, string r, string a ) //De insertar un titulo y autor se utilizará  este constructor
    {
       titulo = t;
       fecha= f;
       reportero = r;
       audio= a;
       siguiente = NULL;
       anterior =NULL;
    }


   	string titulo;
    string fecha;
    string reportero;
    string audio;
    NoticiaRadio *siguiente;
    NoticiaRadio *anterior;

void showinfoR(){

	cout<<"Titulo: "<<titulo;
	cout<<"Fecha: "<<fecha;
	cout<<"Reportero: "<<reportero;
	cout<<"URL: "<<audio;
}
        
   friend class Noticia;
};
typedef NoticiaRadio *pNoticiaR;

class Media {
   public:
    Media() //Si los valores ingresados son vacíos se llama a este constructor
    {
       codmedia=0;
	   NombreTipo = "";
       info = "";
       rutamedia="";
       siguiente = NULL;
       anterior =NULL;
    }

   Media(int codigo, string n, string i, string rm) //De insertar un titulo y autor se utilizará  este constructor
    {
       codmedia= codigo;
	   NombreTipo= n;
       info = i;
       rutamedia= rm;
       siguiente = NULL;
       anterior =NULL;
    }


    int codmedia;
    string NombreTipo;
    string info;
    string rutamedia;
    Noticia *siguiente;
    Noticia *anterior;

void showinfoM(){

	cout<<"Media: "<<codmedia;
	cout<<"Fecha: "<<NombreTipo;
	cout<<"Reportero: "<<info;
	cout<<"Ruta: "<<rutamedia;
}
        
};
typedef Media *pMedia;


int main()
{
   

   return 0;
}
