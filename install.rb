#!/bin/ruby
#made by pepelegal
def ubuntu
    system"clear"
    system"sudo sh uwu.sh"
    system"clear && echo Success! && sleep 3 && exit"
end

def fedora
    system"sudo dnf update"
    system"sudo dnf copr enable rmnscnce/cutefish-desktop"
    system"sudo dnf in cutefish-desktop"
    system"clear && echo Success! && sleep 3 && exit"
end

def arch
    system"clear"
    system"sudo pacman -Syu"
    system"pacman -Ss cutefish && sleep 2"
    system"sudo pacman -S cutefish"
    system"clear && echo Success! && sleep 3 && exit"
end

def slack
    #CREDITS: https://gitlab.com/slackernetuk
    system"clear"
    system"sh owo.sh"
    system"clear && echo Success! && sleep 3 && exit"
end

def main
    loop do
        system"clear"
        puts"Select your Distro:"
        puts()
        puts"[ 1 ] = Ubuntu"
        puts"[ 2 ] = Fedora"
        puts"[ 3 ] = Arch"
        puts"[ 4 ] = Slackware"
        puts()
        print"insert: "
        distroSet = gets.chomp.to_i
        if distroSet == "1"
            ubuntu
            break
        end
        if distroSet == "2"
            fedora
            break
        end
        if distroSet == "3"
            arch
            break
        end
        if distroSet == "4"
            slack
            break
        end
        system"clear"
    end
end
##init script
main