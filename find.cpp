1)Key options
-o : the OR operation to string multiple search criteria together
-name : find files by name
-iname : find files by name, ignoring case
-type f : find only files
-type d : find only directories
-size : find by size
-mtime : find by modified time
-mtime : find by modified time

2)The first argument you give find is where to look.
  By default it is . but is / for root or path for other directories

3)find ~/Movies/ -size +1024M
+M indicates that you’re searching in megabytes, but you can also search in bytes or kilobytes if so desired.

4)find /etc/ -user root -mtime 1
-atime: when the file was last accessed
-ctime: when the file’s permissions were last changed
-mtime: when the file’s data was last modified

5)Find by permissions
find ~ -perm 777

6)Find by type 
find . -type d
d:directories
f:files 
l:links 
s:sockets 

>Root’s ruby files accessed in the last two minutes
>>find /apps/ -user root -type f -amin -2 -name *.rb
