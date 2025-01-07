# **Serveur Web Simple en C**

Ce projet est une implémentation d'un serveur réseau minimaliste en langage C, conçu pour apprendre et manipuler les concepts fondamentaux des sockets. Le serveur utilise le protocole TCP pour accepter des connexions et permettre des échanges basiques.

## **Fonctionnalités**
1. Création d'un socket pour la communication réseau.
2. Association du socket à une adresse IP et un port.
3. Mise en écoute des connexions entrantes.
4. Acceptation des connexions client.
5. Confirmation de la connexion via un message dans le terminal.

---

## **Contexte**
Ce projet a été conçu pour explorer les bases de la programmation réseau avec C. Il s'appuie sur les concepts suivants :  
- **Sockets TCP/IP** : pour établir des connexions fiables.
- **Modèle client-serveur** : un serveur en attente de connexions et un client initiant la communication.
- **Communication réseau bas-niveau** : manipulation des adresses, ports, et structures réseau.

---

## **Comment ça marche ?**
Le serveur fonctionne de la manière suivante :
1. Le programme crée un socket et le configure pour écouter les connexions entrantes sur un port donné (par défaut : 8080).
2. Lorsque le serveur détecte une connexion, il l'accepte et affiche un message dans le terminal.
3. Le serveur reste en attente pour d'autres connexions (jusqu'à ce qu'il soit arrêté manuellement).

### **Exemple de test**
Pour tester le serveur, un client Telnet peut être utilisé pour se connecter au serveur et valider son fonctionnement.

---

## **Utilisation prévue**
Ce projet est une base simple pour des projets plus complexes. Il peut être utilisé comme point de départ pour :
- Un serveur HTTP minimaliste.
- Une application réseau en temps réel.
- Des exercices pédagogiques sur la programmation réseau.
