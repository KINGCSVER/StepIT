CREATE TABLE Groups
(
	Id int primary key identity(1, 1),
	Name nvarchar(10) unique not null,
	Rating int not null check(Rating >= 0 and Rating < 5),
	Year int not null check(Year >= 0 and Year < 5)
)

CREATE TABLE Departments
(
	Id int primary key identity(1, 1),
	Financing int not null check(Financing >= 0) default 0,
	Name nvarchar(100) unique not null
)

CREATE TABLE Faculties
(
	Id int primary key identity(1, 1),
	Name nvarchar(100) unique not null
)

CREATE TABLE Teachers
(
	Id int primary key identity(1, 1),
	EmployantDate date not null check(EmployantDate > '01-01-1990'),
	Name nvarchar(100) unique not null,
	Premium money not null check(Premium >= 0) default 0,
	Salary money not null check(Salary > 0),
	Surname nvarchar(100) unique not null,
)