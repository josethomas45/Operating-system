echo "Simple calculator"
echo "Enter the numbers"
read num1 
read num2
echo "1)Addition /n 2)Subtraction /n 3)Multiplication /n 4)Division"
read choice
case $choice in
 1)sum=$(($num1+$num2))
   echo "The sum of the given number is $sum";;
 2)sub=$(($num1-$num2))
   echo "The difference of the given number is $sub";;
 3)pro=$(($num1*$num2))
   echo "The product of the given number is $pro";;
 4)div=$(($num1/$num2))
   echo "The division of the given number is $div";;
 *)echo "Enter a valid choice";;
 esac
