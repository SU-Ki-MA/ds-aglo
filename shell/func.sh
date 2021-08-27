add()
{
	echo "welcome to add func"
	t=`expr $1 + $2`
	echo "addition of two values is : " $t
}
add 10 20
