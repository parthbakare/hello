1) Add a group
>sudo groupadd grpname

2)Add user 
>sudo useradd -d /home/cs242_1 -m -s /bin/bash -g grpname accname
-d:for home directory
-m:create home if absent
-s:to define the shell

3)Password
sudo passwd accname

4)switch user 
su - accname 

5)Add user to a group
sudo usermod -g grpname accname

6)whoami:check curr user

7)check ip:
>ip addr show

8)login to other machine
>ssh accname@ip
>users (to check the user)
>w (same as above)