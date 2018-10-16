#! /bin/bash
#
# Time		2018年 09月 04日 星期二 14:12:11 CST
# Author	root
# Title 	从文件中读取用户名并添加用户
useradd(){
	if `! id $1 &> /dev/null`;then
	#useradd $1 $> /dev/null
	#passwd $1 --stdin $1 &> /dev/null
	echo $1
	fi
}

# $1 检查：不为空且文件存在的时候循环 
if [ -n $1 -a -f $1 ];then
	while read A ;do
		echo $A
	useradd $A
	done < $1
fi

