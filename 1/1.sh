#Girish Kumar Sahu
#MT2024051

#Create the following types of a files using (i) shell command (ii) system call
#a. soft link (symlink system call)
#b. hard link (link system call)
#c. FIFO (mkfifo Library Function or mknod system call)


#!/bin/bash/

#shell command for creating soft link

touch toLink.txt

ln -s toLink.txt

ls -l toLink.txt

