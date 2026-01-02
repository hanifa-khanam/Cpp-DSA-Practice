# Student Management System Console based Project 

## Program Flow / Logic

START  
Initialize:
- `students = nullptr`
- `totalStudents = 0`

MENU LOOP:
1. **Add Student**  
   - Delete old array (if any)  
   - Call `addStudent()` to input new data  
   - Update `totalStudents`

2. **View Students**  
   - Call `viewStudent()` to display all students  
   - Prints message if no data available

3. **Search Student**  
   - Call `searchStudent()` to search by roll number  
   - Linear search through the array

4. **Save to File**  
   - Call `savetoFile()`  
   - Writes all student data to `sms.txt`

5. **Load from File**  
   - Call `loadfromFile()`  
   - Delete old memory  
   - Allocate new memory dynamically  
   - Read data from `sms.txt` into memory  
   - Update `totalStudents`

Ask user: Exit? (y/n)  
- If yes: delete `students` array → EXIT  
- Else: repeat MENU LOOP


