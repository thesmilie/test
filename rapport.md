Emilie Hela
Maï Leroy
groupe 8

# TP 1.1 Shell - Système d'exploitation

## Exercice 3 - Shell

### Sous-question 1

créer un répertoire nommé "exo":

	mkdir exo
	
pwd affiche le chemin pour aller au répertoire exo.

La commande cd seule permet de se déplacer dans le répertoire de connexion. 

La commande cd .. permet d'aller dans le répertoire parent.


### Sous-question 2

créer un fichier texte nommé "esl" dans le répertoire exo:

	cd exo
	touch esl.txt
ou

	touch ˜/exo/esl.txt

créer un sous-répertoire nommé essai2:

	cd exo
	mkdir essai2
ou 

	mkdir ˜/exo/essai2
	
notes: Ces commandes sont supposées réalisées depuis le répertoire de connexion. Il est donc nécessaire de préciser que le fichier doit se trouver dans exo.


### Sous-question 3

Copier le fichier "esl" dans le répertoire "essai2":

	cp esl.txt ./essai2/
	
Changer le nom de cette copie en "esl-copie":

	mv ./essai2/esl.txt ./essai2/esl-copie.txt
	
Copier le fichier "esl" dans le réportoire "essai2" et changer le nom en "esl-copie" en une seule opération:

	cp esl.txt ./essai2/esl-copie.txt


### Sous-question 4

La commande ls * affiche tous les fichiers et répertoires présents dans le répertoire courant. A ceux-ci s'ajoutent tous les fichiers et les sous-répertoires qu'ils contiennent.

Voir tous les fichiers dont le nom commence par "es":

	ls es*


### Sous-question 5

Supprimer un fichier avec demande de confirmation:

	rm -i <nom_fichier>
	
Supprimer un répertoire et ses sous-répertoires:

	rm -r <nom_repertoire>

	
### Sous-question 6

Afficher la ligne 51 d'un fichier de 100 lignes:

	sed -n 51p <nom_fichier>

Exemple:

	cd exo
	sed -n 51p esl.txt
	
	
### Sous-question 7

Si on exécute la commande grep passwd /ect/*, on observe une erreur: No such file or directory

Supprimer tous les messages d'erreurs:
On peut rediriger les messages d'erreurs pour qu'ils soient écrits dans un autre fichier au lieu de s'afficher sur la console.

	grep passwd /ect/* 2> <nom.du.fichier>
Notes: Pour ne garder aucune trace des erreurs, il faut remplacer <nom.du.fichier> par /dev/null


### Sous-question 8

Trouver tous les fichiers qui commencent par a ou A:

	find -iname "a*"


### Sous-question 9

Trouver les fichiers qui ont été modifiés plus récemment qu'un autre spécifié:
	
	find -newer <nom.fichier.de.référence>


### Sous-question 10

Trouver les fichiers qui se terminent par .o et les supprimer:
	
	find -name "*.o" -exec rm {} \;