# gr43_stage2
## **ENGG1340 Group Project Stage 1**


### **Group :four::three:**
#### **:girl:Chen Jiaying(3035533123) @missjy**
#### **:boy:Gao Enge(3035533070) @Fdax**
## 
## **Staff Management System**

### **:thought_balloon:Problem Statement:thought_balloon:**

When the scale of a small business enlarges, it is hard for employers to know employees' quantity, status as well as prepare for approaching red-letter day beforehand through memories or simple calendar function. Therefore, aiming to let employers show solicitude for employees in terms of having a better knowledge of their information and their working status, this system also launches reminder functions like the upcoming birthday or expiration time of certain employees in addition to basic functions. Furthermore, not only can this employee management system guarantee the efficiency of the human source management, but it can also improve employees' satisfaction towards work thus commit more dedication to work.



### **:thought_balloon:Problem Setting:thought_balloon:**

In order to cope with the problem mentioned above, a series of methods are adapted to build up our employee management system thus fulfill the expectation of this project. Within the project, we aim to gather basic information of employees from the user input and help to classify and manage the information. Our employee management system will include several functions below:  
Create a new employee record with the necessary information: ID, Name, Gender, Age, Role, Birthday, Entry Date, Expiration Date, Salary and Employment Status  
Search for employees through ID, Name, Age, Role, Birthday and Employment Status  
Fire an employee and change his Employment Status  
Edit the details of an existing employee  
Search for employees with a salary higher or lower than a user input  
Allow adding user-defined attributes, the value of a new attribute of the existing employee should be empty or undefined  
Work as a reminder to show the upcoming date ranging from some employees’ birthdays to the contract expiration date  
Exit the system  

When using this system, the user should log in the system with his username and password. Then, a menu will be presented for him to choose the operation. In the end, he can choose to exit the system.


  
### **:thought_balloon:Functionalities and Features:thought_balloon:**
  
  **:pin:Functionalities**

  1. **Add the information of a new employee** (function name as: add_Employee)  
     This function is used to add a new employee to the system, which append all his/her information to the database. It requires the        administrator to enter the new employee's information piece by piece and initializes each person's employment status with 'on the        job'. After saving all the information into a form of a structure, which is standardized at first, **the system will print out the        information of the new employee**.  
     
  2. **Search for employees** (function name as: search_Employee)  
     This function is used to search for existing employees through basic information. At first, it requires the administrator to enter      the sequence number of the categories, which will be provided as a menu accordingly. Then the system will ask the administrator to      enter the key word that he/she want to search about under the specfic category. After that, corresponding employees' information        will be printed out **and the number of corresponding records will be printed out at the end as well**.
     
  3. **Fire an employee** (function name as: fire)  
     This funcition is used to fire an employee by changing his/her employment status into 'Fired'. It will first **call the search          function** to make it easier for the administrator to get the target employee.
     
  4. **Edit the information of an employee** (function name as: edit)  
     This function is used for information update. It will first **call the search function** as well, and ask the user to enter the          number of the category that he/she want to edit then the new information. After editing, the updated information will be printed        out.
     
  5. **Search by salary level** (function name as: search_by_salary)  
     This function is used to find the group of employees through salary level. It asks the user to enter an amount of salary, which          will work as a limit. Then it prints out a menu of orders paired with comparitions (such as greater than, smaller than, equal,          greater and equal, smaller and equal). Finally, it will list all the employees that satisfy the conditions.
     
  6. **Edit attributes of an employee** (function name as: edit_attribute)  
     This function is used to add attribute of a sepcific employee. For example, an employee's diseases and dietary restrictions are          essential to be added to the information of an employee.
     
  7. **Reminder** (function name as reminder)  
     This function works as its name, reminder. It asks the administrator to enter a month number, then prints out the corresponding          people in three groups, which are birthday, entry date and expiration date, whose dates are in the same month as the input.              Moreover, the employees'name will be printed out along with its birthday, entry date and expiration date so that it's clear for the      user to aquire. In this way, the administrator can get the upcoming date in the certain month in an obvious way.
  
  
  ##**Features**##
  
  1. **Reminder:**  
     Our reminder is the highlight of our system. There's no need for the administrator to add the birthdays of all the employees to          his/her calendar. Instead, the administrator can just log into the system and aquire the upcoming dates. This can not only              guarantee the efficiency of the human source management, but also improve the relationship between employers and employees thus          make the whole unity more harmonious.
     
  2. Menu printing:  
     Whenever our system needs the administrator to enter an order, we provide a specific menu for the user to form his/her input, which      will definitely make the program to run more efficiently.
     
  3. Print out the updated information afterwards:  
     Every time the administrator has editted the database, our system will print out the new information of the target employee, which      will make the user have a clearer knowledge of what he/she has done.
     
  4. Use of dynamic arrray:  
     We use dynamic array to save the space of our database. As a staff management system, we need to save the internal storage as much      as possible.
     
  5. Log in safety:  
     Our program need the user to enter proper user ID as well as password to log in the system, which protect the information to some        extent.
     
  6. Database:  
     We save all the information of the employees into a database and whenever we have to use them, we log into the system to operate.        In this way, we can store all the information in a safer place. Every time we do some changes, we edit the dynamic arrays then make      change to the database.
     


### **:thought_balloon:Input specifications:thought_balloon:**

  -ID: A 9-digit string  
  -Name: A string without blank space  
  -Gender: A char which is “M” or “F”  
  -Age: An integer bigger than 0 and less than 100  
  -Department: A string without blank space  
  -Position: A string without blank space  
  -Birthday: A string which is in the format “yyyymmdd”  
  -Entry Date: A string which is in the format “yyyymmdd”  
  -Expiration Date: A string which is in the format “yyyymmdd”  
  -Salary: An integer bigger than 0 and less than than 1000000 (unit HKD per month)  
  -Employment Status: A string which is “On the job”, “Fired” or “Internship”  
  -Attribute: A String (Other information related to the employee) without blank space  
 
 ### **:thought_balloon:Sample input:thought_balloon:**
 
  -ID: 123456789  
  -Name: ChenDawen  
  -Gender: M  
  -Age: 36  
  -Department: HumanResources  
  -Position: Manager  
  -Birthday: 19831226  
  -Entry Date: 20180101  
  -Expiration Date: 20190101  
  -Salary: 100000  
  -Employment Status: On the job  
  -Attribute: Diabetes,Vegetarian  
 
 
 ### **:thought_balloon:Compilation and execution instructions:thought_balloon:**
   **C++ environment**


