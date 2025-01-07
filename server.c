#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h> // Pour les fonctions de réseau

#define PORT 8080 // Port sur lequel le serveur écoute

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address; // Structure pour l'adresse du serveur
    int addrlen = sizeof(address);

    // Étape 1 : Créer un socket

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Erreur lors de la création du socket");
        exit(EXIT_FAILURE);
    }
    printf("Socket créé avec succès\n");

    // Étape 2 : Associer le socket à une adresse IP et un port

    address.sin_family = AF_INET; // IPv4
    address.sin_addr.s_addr = INADDR_ANY; // Accepte les connexions depuis toutes les interfaces
    address.sin_port = htons(PORT); // Port converti au format réseau

    if(bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Erreur lors de l'association (bind)");
        close(server_fd);
        exit(EXIT_FAILURE);
    }
    printf("Socket associé au port %d avec succès\n", PORT);

    // Étape 3 : Mettre le socket en écoute

    if (listen(server_fd, 3) < 0) {
        perror("Erreur lors de l'écoute");
        close(server_fd);
        exit(EXIT_FAILURE);
    }
    printf("En attente de connexions...\n");

    // Étape 4 : Accepter une connexion

    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0) {
        perror("Erreur lors de l'acceptation");
        close(server_fd);
        exit(EXIT_FAILURE);
    } 

    printf("Connexion acceptée depuis un client\n");

    // Étape 5 : Fermer les sockets

    close(new_socket);
    close(server_fd);
    printf("Connexion terminée\n");

    return 0;
}