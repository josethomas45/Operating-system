echo "Enter the numbers"
read num1
read num2
if(($num1>$num2))
then 
 echo "$num1 is the greatest"
 elif(($num1==$num2))
 then 
  echo "$num1 and $num2 are equal numbers"
  else
  echo "$num2 is the greatest number"
  fi
