echo "Enter the numbers"
read num
fact=1
for((i=1;i<=num;i++))
do 
fact=$(($fact*$i))
done
echo "The factorial is $fact"
