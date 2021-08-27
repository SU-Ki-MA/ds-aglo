echo "enter no1 : "
read a
echo "enter no2 : "
read b
echo "enter no3 : "
read c
if [ $a -gt $b -a $a -gt $c ]
then
	echo "a is greatest"
elif [ $b -gt $c ]
then
	echo "b is greatest"
else
	echo "c is greatest"
fi
