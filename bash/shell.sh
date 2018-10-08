#!/bin/bash

# user inputa o diretório dos arquivos 
read -p "Diretório dos arquivos: " diretorio

# navega até a pasta do arquivo
alias cdgit="cd $diretorio"

# recebe nome do arquivo ou se ele não existe
read -p "Nome do arquivo .csv (se não existir deixar em branco): " isarchive

# checa se o arquivo existe, se existir abre o arquivo .ino
if [ -z "$isarchive" ]
then
    echo "Por favor crie um csv."
    exit 0
# se existir um aquivo csv então checa se existe arquivo .ino
else
    # checa se ja existe um arquivo .ino
    read -p "Nome do arquivo arduino (se não existir deixar em branco): " isarduino

    if [ -z "$isarduino" ]
    then # se não existe, da a possbilidade de criar
        read -p "Você deseja criar um arquivo .ino?(digite sim ou nao): " iscreate
        # se o user quiser criar
        if [ "$iscreate" == sim ]
        then
            read -p "Nome do novo arquivo .ino: " inoarchive
            touch "$inoarchive"
            sudo arduino "$inoarchive"
        # se não quiser
        elif [ "$iscreate" == nao ]
        then
            echo "Volte sempre."
            exit 0
        # se colocar outro input alem do permitido
        else
            "ERROR: INPUT INVALIDO"
            exit 1
        fi
    # se existir abre a IDE do arduino ja com o arquivo
    else
        sudo arduino "$isarduino"
    fi
fi
