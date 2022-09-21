gcc -Wall -Wextra -Werror ~/Documents/piscine/$1/$2/*.c ~/Documents/tests/$1/$2/main.c
./a.out $3 $4 $5
rm ./a.out
