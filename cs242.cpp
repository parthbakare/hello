1)pwd:check current directory

2)mkdir:make directory
> mkdir -p directory/subdirectory1/subdirectoryofsub1
> mkdir -p /directory/subdirectory (if directory already exists)
> mkdir -p directory1 directory2 directory3 (multiple directories
  
3)cd:
>cd directory
>cd ~ (go to home directory)
>cd ..(go back by 1 directory)
>cd - (undo to prev directory both way)
>cd / (go to root directory)


4)rm:
>rm file.txt
>rm -i file.txt (interactive removal)
>rmdir directory (to remove empty directory)
>rm -d directory/ (to remove empty directory)
>rm -r directory/ (to remove directory and all sub directories)
>rm -ri directory/ (same as above just remove interactively)

5)wget:
>wget url (download the file)
>wget -m url(download entire website)
>wget -r url(download entire dicrectory)

6)tar 
>tar xvzf file.tar.gz(to extract the files)
>tar -xvzf file.tar.gz test.doc (to extract test.doc.file)
>tar -tvf file.tar.gz(detailed content by listing all files in archive)

x: This option tells tar to extract the files.
v: The “v” stands for “verbose.” This option will list all of the files one by one in the archive.
z: The z option is very important and tells the tar command to uncompress the file (gzip).
f: This options tells tar that you are going to give it a file name to work with

7)tree 
to generate the tree 

8)ls 
>ls (list the contents of the directory)
>ls -l(shows file permissions,owners,directory ,date modified,time and date)
>ls -a(show hidden files)
>ls -lS(increasing order file size)
>ls -X(alphabetical order)
>ls -t(sort by time newest first)
>ls -tr(sort by time in reverse order)

9)touch file1 file2 file3 file4

10)echo
>echo "string" (display the text on terminal)
>echo "string">file.txt(redirect output to file.txt overwriting would take place)
>echo "string">>file.txt(append to the file.txt)

11)cat
>cat file.txt(display content of the file)

>cat >file.txt(overwrite contents)
string1
string2
..
ctrl+d

>cat >>file.txt(append contents)
string1
string2
..
ctrl+d

> std input is > whereas output is <

12)permission change (chmod)
a)first char
"-" :indicates file 
"d" :indicates directory
"l" :indiactes link

b)next 3 char (OWNER)
rwx:read write execute

c)next 3 char (group)
rwx:read write execute

d)next 3 char (users)
rwx:read write execute

>chmod g+w file  (g:group)
>chmod u-r file  (u:user aka owner)
>chmod o+wx file (o:other)
>chmod a+r file  (a:all)

0 = ---
1 = --x
2 = -w-
3 = -wx
4 = r-
5 = r-x
6 = rw-
7 = rwx

chmod 327 foldername will give write and execute (3) permission for the user, w (2) for the group, and read, write, and execute for the users.

13)reboot 
>reboot the OS 

14)List all the files present and all its sub directories which have an extension of ".txt" 
ls -R **/*.txt  

*/
15)wc 
>wc -l(no of lines)
>wc -w(no of words)
>wc -m(no of characters)

16)Avoid whitespaces '1000000 Sales Records.csv' use single quotes

17)tail 
>tail -n no_of_lines /path/to/file
(prints last n lines)

18)head 
>head -n no_of_lines /path/to file 
(prints first n lines)

>head -n no_of_lines /path/to file | tail -n no_of lines
>print lines between a and b 
 head -n b /path/to file | tail -n b-a 

19)cut 
>cut -c2 file.txt ()
>cut -d ',' -f2 

20)sort
used to sort alphabetically

21)uniq
uniq elements printed

22)top or ps
find the current running process 

23)ps -aux | grep name_of_browser

24)kill:
>kill process id