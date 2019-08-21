1)grep "String" filename
Searches for lines having string in the file 

2)grep -i "string" filename
searches for lines having string irr of case of the string 

3)grep -v "string" filename 
searches for lines that donot contain the 

4)grep -vn "string" filename 
Same as above line no is also mentioned

5)grep "^string" filename
prints line with string as first

6)grep "string$" filename
prints lines having string at the last 

7)grep "..cept" filename
print lines having words that posess two chars followed by cept 

8)grep "t[wo]o" filename
prints lines having words two or too

9)grep "[^c]ode" filename
prints lines that have a char (other than c) before ode 

10)grep "^[A-Z]" filename
prints lines that start with a cap letter

11)grep "[[:upper:]]" filename
same as 10 [:upper:]

12)Repeat Pattern zero or more times 

A)repeat prev char or expression zero or more times 
grep"([A-Za-z ]*)" filename
Find each line that contained an opening and closing parenthesis with only letters and single spaces in between

13)Escape meta characters
>We can escape characters by using blackslash character(\) that would normally have some special meaning 
grep "^[A-Z].*\.$" filename 
.* :print all lines starting with a capital letter and ending at "."

14)Grouping
grep "\(grouping\)" file.txt
grep -E "(grouping)" file.txt
egrep "(grouping)" file.txt

all 3 are same 

egrep "(string1|string2)" filename 
prints lines containing any one of two 

15)Quantifiers 

>To match a character zero or one times, you can use the "?" character. This makes character or character set that came before optional, in essence.

egrep "(copy)?right" filename 

>prints lines with copyright or right

>The "+" character matches an expression one or more times. 
This is almost like the "*" meta-character, but with the "+" character,the expression must match at least once.

egrep "free[^[:space:]]+" filename 

prints all the lines with free with no immediate space but has +

16)Specifying match repeetition

egrep "[AEIOUaeiou]{3}" filename

prints the lines with exactly 3 characters contains the above characters 

egrep "[[:alpha:]]{16,20}" filename

If we want to match any words that have between 16 and 20 characters, we can use the following expression: