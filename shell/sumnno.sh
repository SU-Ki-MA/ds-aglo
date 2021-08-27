a=0
echo "enter n : "
read n
t=0
while [ $a -le $n ]
do
	t=`expr $t + $a`
	a=`expr $a + 1`
done
echo "sum of n numbers is : " $t
