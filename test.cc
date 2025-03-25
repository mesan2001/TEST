/*
1-> installer git
2-> rentrer dans le repertoire du projet
3-> AJouter des fichiers au dépot
    -- git add .
    -- git add fichier.cc ou index.html( le nom du fichier qu'on veut ajouter ici)
4-> Valider les fichiers ici
    -- git commit -m "Premier commit par exemple"
5-> Creer un depot distant(si on souhaite mettre notre projet sur un serveur distant
    -- git remote add origine votre--lien--git/nom projet
6-> Pousser les changements vers le depot
    -- git push -origin master
7-> verification
    -- git status
8-> Facultatif pour une clé ssh: git remote set-url origin git@github.com:mesan2001/TEST.git
paraphrase : Joseph/20001
*/
#include <iostream>


int main(){
    std::cout << "Hello World !\n";
}
