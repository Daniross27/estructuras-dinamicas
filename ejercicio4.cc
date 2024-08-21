#include <iostream>

struct disquera{
    std::string nombre;
    std::string pais;
    int fundacion;
};

struct album
{
   std::string nombre_cantante;
   std::string titulo_cancion;
   int numero_pista;
   float duracion;
   int publicacion;
   int antiguedad;
   struct disquera disq;
};

void DatosAlbum();
void Imprimir(struct album[]);
void AntiguedadAlbum(struct album);

int main(){

    return 0;
}

void DatosAlbum(){
    //solicitud de datos
    struct album disco[2];
    for (int i=0; i<2; i++)
    {
        std:: cout << "Ingrese el nombre del cantante: \n";
        std::cin>>disco[i].nombre_cantante;
        for(int j=0; j<2 ; j++){
        std:: cout << "Ingrese el titulo de la cancion: \n";
        std::cin>>disco[i].titulo_cancion;

        std:: cout << "Ingrese el numero de pista: \n";
        std::cin>>disco[i].numero_pista;

        std:: cout << "Ingrese la duracion de la cancion: \n";
        std::cin>>disco[i].duracion;
        }

        std:: cout << "Ingrese el anho de publicacion:  \n";
        std::cin>>disco[i].publicacion;

        std:: cout << "Ingrese la antiguedad del album: \n";
        std::cin>>disco[i].antiguedad;
    }

}

//imprimir datos
void Imprimir(struct album[]);
for(int i=0; i<2; i++){
    std:: cout << "Nombre del cantante:  \n" << ;

    std:: cout << "Titulo de la cancion:   \n" << ;

    std:: cout << "Numero de pista:   \n" << ;

    std:: cout << "Duracion de la cancion:   \n" << ;

    std:: cout << "Anho de publicacion:   \n" << ;

    std:: cout << "Antiguedad del album:   \n" << ;
}