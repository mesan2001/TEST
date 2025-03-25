/*
1-> installer git
2-> rentrer dans le repertoire du projet et faire
    -- git init
3-> AJouter des fichiers au dépot
    -- git add .
    -- git add fichier.cc ou index.html( le nom du fichier qu'on veut ajouter ici)
4-> Valider les fichiers ici
    -- git commit -m "Premier commit par exemple"
5-> Creer un depot distant(si on souhaite mettre notre projet sur un serveur distant
    -- git remote add origin https://github.com/mesan2001/Stage-l3-pilote.git
    mais pour une connexion ssh :
    git remote add origin git@github.com:mesan2001/Stage-l3-pilote.git
6-> Pousser les changements vers le depot
    -- git push -origin master
7-> verification
    -- git status

8-> Facultatif pour une clé ssh: git remote set-url origin git@github.com:mesan2001/TEST.git
paraphrase : Joseph/20001
pout tester la connexion :ssh -T git@github.com

git remote add origin git@github.com:mesan2001/Stage-l3-pilote.git
*/


        //--UTILISATION DE SSH POUR CONNEXION
//ssh-keygen -t ed25519 -C "ton-email@example.com"

/*
2️ Ajouter la clé SSH à ton agent SSH

Avant d'utiliser ta clé SSH, tu dois t'assurer que l'agent SSH est bien actif. Lance cette commande :

eval "$(ssh-agent -s)"

Puis ajoute ta clé privée à l'agent SSH :

ssh-add ~/.ssh/id_ed25519

3️ Copier la clé publique

Maintenant, copie le contenu de ta clé publique (et non privée !) :

cat ~/.ssh/id_ed25519.pub

Tu verras une longue clé qui commence par ssh-ed25519 suivi d'une suite de caractères.

Copie cette clé.
4️ Ajouter la clé SSH à ton compte GitHub

    Va sur GitHub → SSH Keys.

    Clique sur "New SSH Key".

    Mets un nom (par exemple : "Mon PC Debian").

    Colle ta clé publique dans le champ prévu.

    Clique sur "Add SSH key".

5️ Tester la connexion SSH

Retourne dans ton terminal et tape :

ssh -T git@github.com

Si tout est bien configuré, tu verras un message du style :

Hi mesan2001! You've successfully authenticated, but GitHub does not provide shell access.

6️ Changer l'URL du dépôt pour utiliser SSH

Enfin, dans ton projet Git, remplace l'URL HTTPS par l'URL SSH :

git remote set-url origin git@github.com:mesan2001/TEST.git

Tu peux maintenant faire un git push sans entrer de mot de passe :

git push origin master

*/

#include <iostream>


int main(){
    std::cout << "Hello World !\n";
}
