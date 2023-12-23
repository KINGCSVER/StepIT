INSERT INTO People (Name, Surname, Age)
VALUES
    ('John', 'Doe', 25),
    ('Alice', 'Smith', 30),
    ('Emma', 'Johnson', 22),
    ('Michael', 'Williams', 35),
    ('Olivia', 'Brown', 28),
    ('Sophia', 'Miller', 20),
    ('William', 'Wilson', 28),
    ('Charlotte', 'Moore', 23),
    ('Ethan', 'Anderson', 26),
    ('Ava', 'Lee', 21);;

INSERT INTO Employee (Salary, Experience)
VALUES
    (500, 3),
    (700, 5),
    (400, 2),
    (600, 4),
    (800, 6),
    (550, 4),
    (750, 6),
    (420, 3),
    (680, 5),
    (820, 7);

INSERT INTO Faculty (Name)
VALUES
    ('Science'),
    ('Arts'),
    ('Engineering'),
    ('Medicine'),
    ('Business'),
    ('Law');

INSERT INTO Students (PersonId)
VALUES
    (1),
    (2),
    (3),
    (4),
    (5),
    (6);

INSERT INTO Teachers (PersonId, EmployeeId)
VALUES
    (2, 1),
    (4, 3),
    (6, 5),
    (8, 7);

INSERT INTO Groups (Name, Course, FacultyId)
VALUES
    ('Group A', 1, 1),
    ('Group B', 2, 2),
    ('Group C', 3, 3),
    ('Group D', 4, 1),
    ('Group E', 5, 2),
    ('Group F', 6, 3);

INSERT INTO GroupData (StudentId, GroupId)
VALUES
    (1, 1),
    (3, 2),
    (5, 3),
    (2, 1),
    (4, 2),
    (6, 3);

INSERT INTO StudyPlan (TeacherId, GroupId)
VALUES
    (1, 1),
    (2, 2),
    (3, 1),
    (4, 2);