-- Task1
select * from Departments
order by Id desc;

-- Task2
select Name as GroupName, Rating as GroupRating
from Groups;

-- Task3
select Surname,(Premium * 100 / Salary) as PremiumToSalaryPercentage, (Premium * 100 / (Salary + Premium)) as SalaryInterestRate
from Teachers;

-- Task4
select concat('The dean of faculty ', Name, ' is ', Dean, '.') as FacultyDean
from Faculties;

-- Task5
select Surname
from Teachers
where IsProfessor = 1 and Salary > 1050;

-- Task6
select Name
from Departments
where Financing < 11000 or Financing > 25000;

-- Task7
select Name
from Faculties
where Name != 'Computer Science';

-- Task8
select Surname, Position
from Teachers
where IsProfessor != 1;

-- Task9
select Surname, Position, Salary, Premium
from Teachers
where IsAssistant = 1 and Premium > 160 and Premium < 550;

-- Task10
select Surname, Salary
from Teachers
where IsAssistant = 1;

-- Task11
select Surname, Position
from Teachers
where EmploymentDate < '2000-01-01';

-- Task12
select Name as NameofDepartment
from Departments
where Name < 'Software Development'
order by Name;

-- Task13
select Name
from Teachers
where IsAssistant = 1 and (Salary + Premium) <= 1200;

-- Task14
select Name
from Groups
where Year = 4 and Rating between 2 and 4;

-- Task15
select Name
from Teachers
where IsAssistant = 1 and (Salary < 550 or Premium < 200);