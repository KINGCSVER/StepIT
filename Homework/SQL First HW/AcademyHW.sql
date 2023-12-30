--Task1
select t.Name as TeacherName, t.Surname as TeacherSurname, g.Name as GroupName
from Teachers t
cross join Groups g;

--Task2
select f.Name as FacultyName, d.Name as DepartmentName
from Faculties f
join Departments d on f.Id = d.FacultyId
where d.Financing > f.Financing;

--Task3
select c.Surname as CuratorSurname, g.Name as GroupName
from Curators c
join GroupsCurators gc on c.Id = gc.CuratorId
join Groups g on gc.GroupId = g.Id;

--Task4
select distinct t.Name, t.Surname
from Teachers t
join Lectures l on t.Id = l.TeacherId
join GroupsLectures gl on l.Id = gl.LectureId
join Groups g on gl.GroupId = g.Id
where g.Name = 'P107';

--Task5
select distinct t.Surname as TeacherSurname, f.Name as FacultyName
from Teachers t
join Lectures l on t.Id = l.TeacherId
join Subjects s on l.SubjectId = s.Id
join Departments d on s.Id = d.Id
join Faculties f on d.FacultyId = f.Id;

--Task6
select d.Name as DepartmentName, g.Name as GroupName
from Departments d
join Groups g on d.Id = g.DepartmentId;

--Task7
select s.Name
from Subjects s
join Lectures l on s.Id = l.SubjectId
join Teachers t on l.TeacherId = t.Id
where t.Name = 'Samantha' and t.Surname = 'Adams';

--Task8
select d.Name
from Departments d
join Subjects s on d.Id = s.Id
where s.Name = 'Database Theory';

--Task9
select g.Name
from Groups g
join Departments d on g.DepartmentId = d.Id
join Faculties f on d.FacultyId = f.Id
WHERE f.Name = 'Computer Science';

--Task10
select g.Name as GroupName, f.Name as FacultyName
from Groups g
join Departments d on g.DepartmentId = d.Id
join Faculties f on d.FacultyId = f.Id
where g.Year = 5;

--Task11
select CONCAT(t.Name, ' ', t.Surname) as TeacherFullName, s.Name as SubjectName, g.Name as GroupName
from Teachers t
join Lectures l on t.Id = l.TeacherId
join Subjects s on l.SubjectId = s.Id
join GroupsLectures gl on l.Id = gl.LectureId
join Groups g on gl.GroupId = g.Id
where l.LectureRoom = 'B103';