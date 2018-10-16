#!/bin/bash
# 脚本做成时的必要信息和格式的显示

# getfilename 
if [ $# -ne 1 ];then
	echo "input your bash file name:"
	read FileName
else
	FileName=$1
fi

# check effect
while [ -e $FileName ];do
	echo "the file $FileName exists,please input other file name"
	read FileName
done

# make file

cat <<EOF > $FileName 
#! /bin/bash
#
# Time		`date`
# Author	`whoami`
# Title 	
EOF
`which vim &> /dev/null` && vim $FileName
