#!/bin/sh
## deploy.sh for libmy in /home/Dev/Epitech/libmy
## 
## Made by frasse_l
## Login   <frasse_l@epitech.net>
## 
## Started on  Sun Nov 29 16:51:38 2015 frasse_l
## Last update Sun Nov 29 16:51:39 2015 frasse_l
##

if [ $# == 0 ]
then
    echo $0 "<directory>"
else
    if [ -f ./libmy.a ]
    then
	mkdir -p $1/lib > /dev/null
	mkdir -p $1/include > /dev/null
	cp ./libmy.a $1/lib
	cp ./include/* $1/include
    else
	echo "Please compile lib first."
    fi
fi