#! /bin/bash
#
# Time		2018年 09月 05日 星期三 15:29:00 CST
# Author	root
# Title 	自动生成Java文件

# java生成函数
BODY="package $1;\npublic class `basename $1`{\n//#todo\n}"

# to java setter and getter function
#setterAndGetter(){
#
#}

toJava(){
	if [ ! -f $1.java ];then

	echo -e  $BODY >> `basename $1`.java
	fi
}

[ -z $1 ] || toJava $1

