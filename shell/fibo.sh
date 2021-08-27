echo "enter a term : "
read no
no=`expr $no - 2`
a=0
b=1
i=1
echo $a
echo $b
while [ $i -le $no ]
do
	c=`expr $a + $b`
	a=$b
	b=$c
	echo $c
	i=`expr $i + 1`
done
