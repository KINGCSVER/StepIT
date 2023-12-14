CREATE TABLE Groups
( 
	Id int primary key not null,
	Name nvarchar(10) unique not null,
	Rating int not null check(Rating >= 0 and Rating < 5),
	Year int not null check(Year >= 0 and Year < 5)
)

CREATE TABLE Departments
(
	Id int primary key not null,
	Financing int not null check(Financing >= 0) default 0,
	Name nvarchar(100) unique not null
)

CREATE TABLE Faculties
(
	Id int primary key not null,
	Name nvarchar(100) unique not null
)

CREATE TABLE Teachers
(
	Id int primary key not null,
	EmployantDate date not null check(EmployantDate > 01/01/1990),
	Name nvarchar(max) unique not null,
	Premium money not null check(Premium >= 0) default 0,
	Salary money not null check(Salary > 0),
	Surname nvarchar(max) unique not null,

)