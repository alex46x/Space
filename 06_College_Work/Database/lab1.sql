-- Create Database
CREATE DATABASE university;
USE university;

-- ======================
-- Create Tables
-- ======================

CREATE TABLE Dept (
    D_ID INT PRIMARY KEY,
    Name VARCHAR(50)
);

CREATE TABLE Course (
    CID INT PRIMARY KEY,
    C_Name VARCHAR(50),
    Credit INT
);

CREATE TABLE Student (
    ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Phone VARCHAR(15),
    City VARCHAR(50),
    HSC_GPA FLOAT,
    G_Cont VARCHAR(15)
);

CREATE TABLE Teacher (
    T_ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Dept INT,
    FOREIGN KEY (Dept) REFERENCES Dept(D_ID)
);

CREATE TABLE Stud_Result (
    ID INT,
    Course INT,
    GPA FLOAT,
    FOREIGN KEY (ID) REFERENCES Student(ID),
    FOREIGN KEY (Course) REFERENCES Course(CID)
);

-- ======================
-- Insert Data
-- ======================

-- Dept
INSERT INTO Dept VALUES (1, 'CSE');
INSERT INTO Dept VALUES (2, 'EEE');

-- Course
INSERT INTO Course VALUES (101, 'CSE-101', 3);
INSERT INTO Course VALUES (102, 'CSE-102', 3);

-- Student (10 data)
INSERT INTO Student VALUES (1, 'Rahim', '01701', 'Khulna', 4.50, '01801');
INSERT INTO Student VALUES (2, 'Karim', '01702', 'Dhaka', 4.80, '01802');
INSERT INTO Student VALUES (3, 'Sakib', '01703', 'Jessore', 4.20, '01803');
INSERT INTO Student VALUES (4, 'Tamim', '01704', 'Khulna', 4.60, '01804');
INSERT INTO Student VALUES (5, 'Nayeem', '01705', 'Barisal', 4.10, '01805');
INSERT INTO Student VALUES (6, 'Rafi', '01706', 'Dhaka', 4.30, '01806');
INSERT INTO Student VALUES (7, 'Shuvo', '01707', 'Khulna', 4.70, '01807');
INSERT INTO Student VALUES (8, 'Imran', '01708', 'Rajshahi', 4.00, '01808');
INSERT INTO Student VALUES (9, 'Hasan', '01709', 'Sylhet', 4.90, '01809');
INSERT INTO Student VALUES (10, 'Nabil', '01710', 'Chittagong', 4.40, '01810');

-- Teacher
INSERT INTO Teacher VALUES (1, 'Sir A', 1);
INSERT INTO Teacher VALUES (2, 'Sir B', 2);

-- Stud_Result (10 data)
INSERT INTO Stud_Result VALUES (1, 101, 3.75);
INSERT INTO Stud_Result VALUES (2, 102, 3.90);
INSERT INTO Stud_Result VALUES (3, 101, 3.50);
INSERT INTO Stud_Result VALUES (4, 102, 3.80);
INSERT INTO Stud_Result VALUES (5, 101, 3.20);
INSERT INTO Stud_Result VALUES (6, 102, 3.60);
INSERT INTO Stud_Result VALUES (7, 101, 3.95);
INSERT INTO Stud_Result VALUES (8, 102, 3.40);
INSERT INTO Stud_Result VALUES (9, 101, 4.00);
INSERT INTO Stud_Result VALUES (10, 102, 3.70);