CREATE TABLE Employees (
    EmpID INT PRIMARY KEY,
    Name VARCHAR(50),
    Department VARCHAR(50),
    Salary INT,
    City VARCHAR(50),
    JoinDate DATE
);

INSERT INTO Employees VALUES
(1,'Rahim','IT',50000,'Dhaka','2022-01-10'),
(2,'Karim','HR',40000,'Chittagong','2021-03-15'),
(3,'Salma','Finance',45000,'Dhaka','2020-07-20'),
(4,'Jamal','IT',55000,'Khulna','2019-05-11'),
(5,'Rina','Marketing',42000,'Rajshahi','2023-02-01'),
(6,'Tanvir','IT',60000,'Dhaka','2018-09-09'),
(7,'Mitu','Finance',48000,'Barisal','2022-06-18'),
(8,'Hasan','HR',39000,'Sylhet','2020-11-25'),
(9,'Nadia','Marketing',41000,'Dhaka','2021-12-30'),
(10,'Sabbir','IT',53000,'Chittagong','2019-08-14');

SELECT * FROM Employees;