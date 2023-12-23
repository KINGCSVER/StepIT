select avg(GPA) as AverageGPA
from Students stud
inner join Enrollments enr on stud.StudentID = enr.StudentID
where enr.CourseID = 101;

select max(stud.Age) as MaxAge
from Students stud
inner join Enrollments enr on stud.StudentID = enr.StudentID
where enr.Grade > 3.5;

select count(Difficulty) as DifficultyCount
from Courses
where Difficulty > 3;

select enr.CourseID, cou.CourseName, avg(enr.Grade) as AverageGrade
from Enrollments enr
join Courses cou on enr.CourseID = cou.CourseID
group by enr.CourseID, cou.CourseName;

select *
from Courses
where Difficulty = (select max(Difficulty) from Courses);