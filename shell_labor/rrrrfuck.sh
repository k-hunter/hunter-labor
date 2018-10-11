#!/bin/bash

extundelete --restore-inode $2 /dev/sda9
ls RECOVERED_FILES/file*
echo "move to $1"
mv RECOVERED_FILES/file* $1
echo "----------------------------------------"
cat $1
ls
