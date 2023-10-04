create table Worker
(WORKER_ID int primary key,
FIRST_NAME VARCHAR(20),
LAST_NAME VARCHAR(20),
SALARY INT,
JOINING_DATE DATETIME,
DEPARTMENT VARCHAR(20));


CREATE TABLE Bonus
(WORKER_REF_ID INT,
BONUS_DATE DATETIME,
BONUS_AMOUNT INT);


CREATE TABLE Title
(WORKER_REF_ID INT,
WORKER_TITLE VARCHAR(50),
AFFECTED_FROM DATETIME);


alter table Bonus ADD FORIEGN KEY (WORKER_REF_ID) references Worker(WORKER_ID);


alter table Title ADD FORIEGN KEY (WORKER_REF_ID) references Worker(WORKER_ID);


INSERT INTO Worker VALUE 
(001,'Monika','Arora',100000,'2014-02-20 09:00:00','HR'),(002,'Niharika','Verma',80000,'2014-06-11 09:00:00','ADMIN'),(003,'Vishal','Singhal',300000,'2014-02-20 09:00:00','HR'),(004,'Amitabh','Singh',500000,'2014-02-20 09:00:00','ADMIN'),(005,'Vivek','Bhati',500000,'2014-06-11 09:00:00','ADMIN'),
(006,'Vipul','Diwan',200000,'2014-06-11 09:00:00','ACCOUNTS'),
(007,'Satish','Kumar',75000,'2014-01-20 09:00:00','ACCOUNTS'),
(008,'Geetika','Chauhan',90000,'2014-04-11 09:00:00','ADMIN');




INSERT INTO Bonus VALUES
(1,'2016-02-20 00:00:00',5000),
(2,'2016-06-11 00:00:00',3000),
(3,'2016-02-20 00:00:00',4000),
(1,'2016-02-20 00:00:00',4500),
(2,'2016-06-11 00:00:00',3500);





INSERT INTO Title VALUES
(1,'MANAGER','2016-02-20 00:00:00'),
(2,'EXECUTIVE','2016-06-11 00:00:00'),
(8,'EXECUTIVE','2016-06-11 00:00:00'),
(5,'MANAGER','2016-06-11 00:00:00'),
(4,'ASST.MANAGER','2016-06-11 00:00:00'),
(7,'EXECUTIVE','2016-06-11 00:00:00'),
(6,'LEAD','2016-06-11 00:00:00'),
(3,'LEAD','2016-06-11 00:00:00');



1. SELECT FIRST_NAME AS WORKER_NAME FROM Worker;


mysql> SELECT FIRST_NAME AS WORKER_NAME FROM Worker;
+-------------+
| WORKER_NAME |
+-------------+
| Monika      |
| Niharika    |
| Vishal      |
| Amitabh     |
| Vivek       |
| Vipul       |
| Satish      |
| Geetika     |
+-------------+
8 rows in set (0.00 sec)

----------------------------------------------------------->

2. SELECT UPPER(FIRST_NAME) FROM Worker;
mysql> SELECT UPPER(FIRST_NAME) FROM Worker;
+-------------------+
| UPPER(FIRST_NAME) |
+-------------------+
| MONIKA            |
| NIHARIKA          |
| VISHAL            |
| AMITABH           |
| VIVEK             |
| VIPUL             |
| SATISH            |
| GEETIKA           |
+-------------------+
8 rows in set (0.00 sec)






3. SELECT DISTINCT(DEPARTMENT) FROM Worker;
mysql> SELECT DISTINCT(DEPARTMENT) FROM Worker;
+------------+
| DEPARTMENT |
+------------+
| HR         |
| ADMIN      |
| ACCOUNTS   |
+------------+
3 rows in set (0.01 sec)




4. SELECT LEFT(FIRST_NAME,3) FROM Worker;

mysql> SELECT LEFT(FIRST_NAME,3) FROM Worker;
+--------------------+
| LEFT(FIRST_NAME,3) |
+--------------------+
| Mon                |
| Nih                |
| Vis                |
| Ami                |
| Viv                |
| Vip                |
| Sat                |
| Gee                |
+--------------------+
8 rows in set (0.00 sec)



5. mysql> SELECT LOCATE("a","Amitabh");
+-----------------------+
| LOCATE("a","Amitabh") |
+-----------------------+
|                     1 |
+-----------------------+
1 row in set (0.00 sec)


6. mysql> SELECT * FROM Worker ORDER BY FIRST_NAME;
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
|         8 | Geetika    | Chauhan   |  90000 | 2014-04-11 09:00:00 | ADMIN      |
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |
|         2 | Niharika   | Verma     |  80000 | 2014-06-11 09:00:00 | ADMIN      |
|         7 | Satish     | Kumar     |  75000 | 2014-01-20 09:00:00 | ACCOUNTS   |
|         6 | Vipul      | Diwan     | 200000 | 2014-06-11 09:00:00 | ACCOUNTS   |
|         3 | Vishal     | Singhal   | 300000 | 2014-02-20 09:00:00 | HR         |
|         5 | Vivek      | Bhati     | 500000 | 2014-06-11 09:00:00 | ADMIN      |
+-----------+------------+-----------+--------+---------------------+------------+
8 rows in set (0.00 sec)



7. mysql> SELECT * FROM Worker ORDER BY FIRST_NAME ASC, DEPARTMENT DESC;
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
|         8 | Geetika    | Chauhan   |  90000 | 2014-04-11 09:00:00 | ADMIN      |
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |
|         2 | Niharika   | Verma     |  80000 | 2014-06-11 09:00:00 | ADMIN      |
|         7 | Satish     | Kumar     |  75000 | 2014-01-20 09:00:00 | ACCOUNTS   |
|         6 | Vipul      | Diwan     | 200000 | 2014-06-11 09:00:00 | ACCOUNTS   |
|         3 | Vishal     | Singhal   | 300000 | 2014-02-20 09:00:00 | HR         |
|         5 | Vivek      | Bhati     | 500000 | 2014-06-11 09:00:00 | ADMIN      |
+-----------+------------+-----------+--------+---------------------+------------+
8 rows in set (0.00 sec)



8.
mysql> SELECT * FROM Worker WHERE FIRST_NAME IN ('VIPUL','SATISH');
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         6 | Vipul      | Diwan     | 200000 | 2014-06-11 09:00:00 | ACCOUNTS   |
|         7 | Satish     | Kumar     |  75000 | 2014-01-20 09:00:00 | ACCOUNTS   |
+-----------+------------+-----------+--------+---------------------+------------+
2 rows in set (0.00 sec)



9.

mysql> SELECT WORKER_ID,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT FROM Worker WHERE FIRST_NAME IN ('VIPUL','SATISH');
+-----------+-----------+--------+---------------------+------------+
| WORKER_ID | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+-----------+--------+---------------------+------------+
|         6 | Diwan     | 200000 | 2014-06-11 09:00:00 | ACCOUNTS   |
|         7 | Kumar     |  75000 | 2014-01-20 09:00:00 | ACCOUNTS   |
+-----------+-----------+--------+---------------------+------------+
2 rows in set (0.00 sec)



10.
mysql> SELECT * FROM Worker WHERE DEPARTMENT IN ('ADMIN');
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         2 | Niharika   | Verma     |  80000 | 2014-06-11 09:00:00 | ADMIN      |
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
|         5 | Vivek      | Bhati     | 500000 | 2014-06-11 09:00:00 | ADMIN      |
|         8 | Geetika    | Chauhan   |  90000 | 2014-04-11 09:00:00 | ADMIN      |
+-----------+------------+-----------+--------+---------------------+------------+
4 rows in set (0.00 sec)



11. 

mysql> SELECT * FROM Worker WHERE FIRST_NAME LIKE '%a%';
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |
|         2 | Niharika   | Verma     |  80000 | 2014-06-11 09:00:00 | ADMIN      |
|         3 | Vishal     | Singhal   | 300000 | 2014-02-20 09:00:00 | HR         |
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
|         7 | Satish     | Kumar     |  75000 | 2014-01-20 09:00:00 | ACCOUNTS   |
|         8 | Geetika    | Chauhan   |  90000 | 2014-04-11 09:00:00 | ADMIN      |
+-----------+------------+-----------+--------+---------------------+------------+
6 rows in set (0.00 sec)


12.mysql> SELECT FIRST_NAME FROM Worker WHERE FIRST_NAME LIKE '%a';
+------------+
| FIRST_NAME |
+------------+
| Monika     |
| Niharika   |
| Geetika    |
+------------+
3 rows in set (0.00 sec)



13.

mysql> SELECT FIRST_NAME FROM Worker WHERE FIRST_NAME LIKE '______h';
+------------+
| FIRST_NAME |
+------------+
| Amitabh    |
+------------+
1 row in set (0.00 sec)


14.

mysql> SELECT * FROM Worker WHERE SALARY BETWEEN 100000 AND 500000;
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |
|         3 | Vishal     | Singhal   | 300000 | 2014-02-20 09:00:00 | HR         |
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
|         5 | Vivek      | Bhati     | 500000 | 2014-06-11 09:00:00 | ADMIN      |
|         6 | Vipul      | Diwan     | 200000 | 2014-06-11 09:00:00 | ACCOUNTS   |
+-----------+------------+-----------+--------+---------------------+------------+
5 rows in set (0.00 sec)

mysql> 


15.
mysql> SELECT * FROM Worker WHERE JOINING_DATE LIKE '__14_02%';
+-----------+------------+-----------+--------+---------------------+------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT |
+-----------+------------+-----------+--------+---------------------+------------+
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |
|         3 | Vishal     | Singhal   | 300000 | 2014-02-20 09:00:00 | HR         |
|         4 | Amitabh    | Singh     | 500000 | 2014-02-20 09:00:00 | ADMIN      |
+-----------+------------+-----------+--------+---------------------+------------+
3 rows in set (0.00 sec)



16.

SELECT COUNT(*) FROM Worker WHERE DEPARTMENT IN ('ADMIN');
mysql> SELECT COUNT(*) FROM Worker WHERE DEPARTMENT IN ('ADMIN');
+----------+
| COUNT(*) |
+----------+
|        4 |
+----------+
1 row in set (0.01 sec)



17.
mysql> SELECT FIRST_NAME FROM Worker WHERE SALARY BETWEEN 50000 AND 100000;
+------------+
| FIRST_NAME |
+------------+
| Monika     |
| Niharika   |
| Satish     |
| Geetika    |
+------------+
4 rows in set (0.00 sec)

18.

mysql> SELECT COUNT(*) ,DEPARTMENT FROM Worker GROUP BY DEPARTMENT ;
+----------+------------+
| COUNT(*) | DEPARTMENT |
+----------+------------+
|        2 | HR         |
|        4 | ADMIN      |
|        2 | ACCOUNTS   |
+----------+------------+
3 rows in set (0.00 sec)


19.

mysql> SELECT * FROM Worker INNER JOIN Title ON Worker.WORKER_ID=Title.WORKER_REF_ID WHERE Title.WORKER_TITLE IN ('MANAGER');
+-----------+------------+-----------+--------+---------------------+------------+---------------+--------------+---------------------+
| WORKER_ID | FIRST_NAME | LAST_NAME | SALARY | JOINING_DATE        | DEPARTMENT | WORKER_REF_ID | WORKER_TITLE | AFFECTED_FROM       |
+-----------+------------+-----------+--------+---------------------+------------+---------------+--------------+---------------------+
|         1 | Monika     | Arora     | 100000 | 2014-02-20 09:00:00 | HR         |             1 | MANAGER      | 2016-02-20 00:00:00 |
|         5 | Vivek      | Bhati     | 500000 | 2014-06-11 09:00:00 | ADMIN      |             5 | MANAGER      | 2016-06-11 00:00:00 |
+-----------+------------+-----------+--------+---------------------+------------+---------------+--------------+---------------------+
2 rows in set (0.00 sec)


20.





