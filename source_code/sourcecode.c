#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* 

Script Escrito Em C, Esse "script" automatiza a instalação da interface Cutefish em "qualquer" distribuição linux.
O programa ainda está em desenvolvimento, porém já é possivel instalar a CutefishDE no Arch Linux, Ubuntu e Fedora, e em distros baseadas nas mesmas.
Autor Original do projeto: https://github.com/arrochistas

Esse código é livre, qualquer um pode mexer no seu código fonte e alterar partes para o melhor uso, é isso.

A N D   B E   A   N I C E   G U Y .

*/

int main(){
    int userDistro;
    system("clear");
    printf("Distros:\n\n");
    printf("[ 1 ] = Arch Linux/Manjaro...");
    printf("\n[ 2 ] = Ubuntu/Debian...");
    printf("\n[ 3 ] = Fedora/RedHAT...\n\n");
    printf("> ");
    scanf("%d", &userDistro);
        if (userDistro == 1){
            system("sudo pacman -Syu");
            system("sudo pacman -S cutefish");
            system("clear");
        }
        if (userDistro == 2){
            system("clear");
            system("sh bin/ubuntu.sh");
        }
        if (userDistro == 3){
            system("clear");
            system("sudo dnf update");
            system("sudo dnf copr enable rmnscnce/cutefish-desktop && sudo dnf install cutefish cutefish-desktop");
            system("clear");
        }
        else
        {
            system("clear");
            printf("Invalid Number!\n");
            sleep(2);
            system("./Cutefish");
        }
}