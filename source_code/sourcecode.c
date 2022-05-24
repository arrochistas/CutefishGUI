#include <stdio.h>
#include <stdlib.h>

/* 

Horas Totais Gastas No Script: 29H 50min (contando com todos os testes realizados em maquinas virtuais, e na remoção de bugs!)
Por Motivos De Preguiç... quero dizer.. ocupações
Esse código é 100% aberto, caso divulge, por favor deixe os créditos, ele é livre, e qualquer,
um pode mudar e deixar do seu jeito, sem problema algum.

Follow me on Git!

https://github.com/victorbelaw

And Be A Nice Guy, A vida cobra é nois!

@@@victorbelaw@@@

*/

int main(){
    int userDistro;
    system("clear");
    printf("\nDistros:\n\n");
    printf("[ 1 ] .. Arch Linux/Manjaro...");
    printf("\n[ 2 ] .. Ubuntu/Debian...");
    printf("\n[ 3 ] .. Fedora/RedHAT\n\n");
    printf("cutefish installer > ");
    scanf("%d", &userDistro);
        if (userDistro == 1){
            system("sudo pacman -Syu");
            system("sudo pacman -S ruby python");
            system("sudo pacman -S cutefish");
            system("clear");
        }
        if (userDistro == 2){
            system("clear");
            system("sudo apt update");
            system("sudo apt install -y ruby python");
            system("sudo apt install -y git devscripts build-essential cmake ninja-build");
            system("sudo apt install -y qtbase5-dev qtquickcontrols2-5-dev libkf5networkmanagerqt-dev");
            system("sudo apt install -y modemmanager-qt-dev debhelper extra-cmake-modules libkf5kio-dev libkf5screen-dev libqt5sensors5-dev qtdeclarative5-dev qttools5-dev qttools5-dev-tools");
            system("sudo apt install -y libxcb-icccm4-dev qtbase5-private-dev kwin-dev libkdecorations2-dev libqt5xdg-dev libdbusmenu-qt5-dev libxcb-ewmh-dev libicu-dev");
            system("sudo apt install -y libxcb-randr0-dev libsm-dev libxcb-xfixes0-dev libxcb-damage0-dev libxcb-composite0-dev libxcb-shm0-dev libxcb-util-dev libxcb-image0-dev libxtst-dev");
            system("sudo apt install -y libpulse-dev libpolkit-qt5-1-dev libpolkit-agent-1-dev libqt5x11extras5-dev qml-module-qtquick2 qml-module-qtquick-controls2 libkf5bluezqt-dev libkf5bluezqt-dev libqt5opengl5-dev libxcursor-dev");
            system("python3 data/installer.py");
        }
        if (userDistro == 3){
            system("clear");
            system("sudo dnf update");
            system("sudo dnf install ruby python");
            system("sudo dnf copr enable rmnscnce/cutefish-desktop && sudo dnf install cutefish cutefish-desktop");
            system("clear");
        }
}