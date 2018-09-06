#! /bin/bash
#
# Time		2018年 8月 31日 金曜日 16:54:14    
# Title 	100之内的偶数相加，分别用for,while,until实现

declare COUNT=0
declare I=0
case $1 in
	for)
		I=0
		COUNT=0
		for I in {1..100};do
			if [ $[$I%2] -eq 0 ];then
				COUNT=$(($COUNT+$I))
			fi
		done
		;;
	while)
		I=0
		COUNT=0
		while [ $I -le 100 ];do
			if [ $[$I%2] -eq 0 ];then
				COUNT=$(($COUNT+$I))
			fi
			I=$[$I+1]
		done
		;;
	until)
		I=0
		COUNT=0
		until [ $I -gt 100 ];do
			if [ $[$I%2] -eq 0 ];then
				COUNT=$(($COUNT+$I))
			fi
			I=$[$I+1]
		done
		;;
	*)
		echo "USAGE `basename $0` for|while|until"
		;;
esac
echo $COUNT
