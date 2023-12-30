--Task1
select count(*) as TeachersCount
from Teachers t
join Departments d on t.Id = d.FacultyId
where d.Name = 'Software Development';

--Task2
select count(*) as LectureCount
from Lectures
where TeacherId = (select Id from Teachers where Name = 'Dave' and Surname = 'McQueen');

--Task3
select count(*) as LectureCount
from Lectures
where LectureRoom = 'D201';

--Task4
select LectureRoom, count(*) as LectureCount
from Lectures
group by LectureRoom;

--Task5
select count(*) as StudentCount
from GroupsLectures gl
join Lectures l on gl.LectureId = l.Id
join Teachers t on l.TeacherId = t.Id
where t.Name = 'Jack' and t.Surname = 'Underhill';

--Task6
select avg(Salary) as AverageSalary
from Teachers t
join Departments d on t.Id = d.FacultyId
join Faculties f on d.FacultyId = f.Id
where f.Name = 'Computer Science';

--Task7
select min(StudentsCount) as MinStudentsCount, max(StudentsCount) as MaxStudentsCount
from (select count(*) as StudentsCount from GroupsLectures group by GroupId) as GroupStudents;

--Task8
select avg(Financing) as AverageFinancing
from Departments;

--Task9
select concat(Name, ' ', Surname) as FullName, count(*) as SubjectsTaught
from Teachers t
join Lectures l on t.Id = l.TeacherId
group by t.Id, Name, Surname;

--Task10
select DayOfWeek, count(*) as LectureCount
from Lectures
group by DayOfWeek;

--Task11
select LectureRoom, count(distinct d.Id) as DepartmentsCount
from Lectures l
join Subjects s on l.SubjectId = s.Id
join Departments d on s.Id = d.Id
group by LectureRoom;

--Task12
select f.Name as FacultyName, count(distinct s.Id) as SubjectsCount
from Faculties f
join Departments d on f.Id = d.FacultyId
join Subjects s on d.Id = s.Id
group by f.Name;