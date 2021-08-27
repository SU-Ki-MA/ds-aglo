echo "enter the first no : "
read a 
echo "enter the second number : "
read b
c=`expr $a + $b`
d=`expr $a - $b`
e=`expr $a \* $b`
f=`expr $a / $b`
g=`expr $a % $b `
echo $c $d $e $f $g
