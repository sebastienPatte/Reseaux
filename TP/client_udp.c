/** Codedu client*/
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<string.h>

#define SIZE 100
#define PORT 9600

int main(int argc,char* argv[]){
	/*
	 * Variables du client
	 *
	 * Déclarer ici les variables suivantes:
	 *   - sockfd le descripteur de socket
	 *   - structure d’adresse du serveur
	 *   - pointeur vers la structure descriptive de machine (hostent)
	 *   - zone de mémoiredestinée à accueillir la chaîne 
	 *     entrée au clavier
	 *   - taille de la chaîne à envoyer
	 */
	/*
	 * Code du client
	 *
	 * - Ouvrir le socket du client
	 * - Récupérer l’adresseIP du serveur à partir de son nom
	 *   donné en lignede commande
	 * - Remplir la structure d’adresse du serveur
	 * - Lire une ligne de l’entrée standard
	 * - Envoyer la chaîne lue au serveur
	 */
	return 0;
}