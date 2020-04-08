/** Code du serveur*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<string.h>

/* Port local du serveur*/
#define PORT 9600

int main(int argc, char* argv[]){
	/*
	 * Variables du serveur
	 *
	 * Déclarer ici les variables suivantes:
	 *   - sockfd le descripteur de socket
	 *   - structure d’adresse locale du serveur
	 *   - structure d’adresse du client
	 *   - taille de l’adresse du client
	 */
	
	/*
	 * Codedu serveur
	 *
	 * - Ouvrir le socket du serveur
	 * - Remplirla structure d’adresse locale du serveur:
	 *   - la famille d’adresse
	 *   - l’adresse IP
	 *   - le port
	 * - Spécifier l’adresse locale du socket du serveur
	 */
	
	/*
	 * Boucle générale du serveur (infinie)
	 */
	while(1) {
		/*
		 * Codede l’intrieur de la boucle
		 */
	}

	return 0;
}