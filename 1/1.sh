
#============================================================================
#Name : 1a.c
#Author : GIRISH KUMAR SAHU
#Description : #Create the following types of a files using (i) shell command (ii) system call
#a. soft link (symlink system call)
#Date: 20th Aug, 2024.
#============================================================================
#*/



#!/bin/bash/

#shell command for creating soft link

touch toLink.txt

ln -s toLink.txt

ls -l toLink.txt

