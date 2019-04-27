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

  **The attribute of each kind of information is shown below:**

  - ID: A 9-digit string
  - Name: A string
  - Gender: A string which is “Male” or “Female”
  - Age: An integer bigger than 0 and less than 100
  - Department: A string
  - Position: A string
  - Birthday: A string which is in the format “dd/mm/yyyy”
  - Entry Date: A string which is in the format “dd/mm/yyyy”
  - Expiration Date: A string which is in the format “dd/mm/yyyy”
  - Salary: An integer bigger than 0 and less than than 1000000 (unit HKD per month)
  - Employment Status: A string which is “On the job”, “Fired” or “Internship”
  - Remark: A String (Other information related to the employee)

  **For example, a record is shown below:**

  - ID: 123456789
  - Name: Chen Dawen
  - Gender: Male
  - Age: 36
  - Department: Human Resources 
  - Position: Manager
  - Birthday: 26/12/1983
  - Entry Date: 01/01/2018
  - Expiration Date: 01/01/2019
  - Salary: 100000 (unit HKD per month)
  - Employment Status: On the job
  - Remark: Diabetes, Vegetarian
  
  
  
  
  ### **:thought_balloon:Functionalities and Features:thought_balloon:**
  
  **Functionalities**

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




