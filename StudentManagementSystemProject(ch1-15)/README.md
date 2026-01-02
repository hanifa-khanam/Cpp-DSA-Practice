# Student Management System Console based Project 

START
  |
  V
Initialize: students=nullptr, totalStudents=0
  |
  V
MENU LOOP
  |--- 1. Add Student ---> delete old array ---> addStudent() ---> return pointer ---> update totalStudents
  |
  |--- 2. View Students ---> viewStudent() ---> print all or no data
  |
  |--- 3. Search Student ---> searchStudent() ---> linear search
  |
  |--- 4. Save to File ---> savetoFile() ---> write all data to sms.txt
  |
  |--- 5. Load from File ---> loadfromFile() ---> 
            delete old memory ---> allocate new memory ---> read data from sms.txt ---> update totalStudents
  |
  V
Ask exit? (y/n)
  |
  V
If yes: delete students array ---> EXIT
Else: repeat menu
