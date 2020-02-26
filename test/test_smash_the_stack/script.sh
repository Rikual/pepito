#!/bin/sh
## script.sh for script in /home/tessie_g//afs/rendu/projets/pepito/test/test_smash_the_stack
## 
## Made by adrian tessier
## Login   <tessie_g@epitech.net>
## 
## Started on  Thu Apr  5 10:42:08 2012 adrian tessier
## Last update Thu Apr  5 13:46:02 2012 adrian tessier
##

let "i = 0"
while [ $i != 100 ]
do
    ./test $i
    let "i = i + 1"
done
