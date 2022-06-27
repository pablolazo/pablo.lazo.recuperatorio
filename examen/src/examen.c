/*
 ============================================================================
 Name        : examen.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


void acualizarRecuperados(ePais pais, int recuperados){
   int aux;
   int nuevos = 0;
	aux = recuperados;
	nuevos + recuperados;
	nuevos = pais.recuperados;

}

int invertirpalabra(char palabra[], int tam)
   {
	int todoOk = 0;
	char auxiliar;
    int longitud = strlen(palabra);
    int i;

   if( palabra != NULL  && tam > 0){
    for (i = 0; i < strlen(palabra) / 2; i++)
    {
         auxiliar = palabra[i];
        palabra[i] = palabra[longitud - i - 1];
        palabra[longitud - i - 1] = auxiliar;
    }
    todoOk=1;
   }

 char ordenarCaracteres(char palabra[]){


	char auxiliar;
	 for (int i = 0;i < strlen(palabra); i++){
	     for (int j = 0; j< strlen(palabra) - 1; j++){
	         if (palabra[i] > palabra[j]){
	             auxiliar = palabra[j];
	             palabra[j] = palabra[j+1];
	             palabra[j+1] = auxiliar;
	         }
	     }
	 }

 }




