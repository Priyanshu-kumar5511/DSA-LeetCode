# Write your MySQL query statement below
select E.name , B.bonus from Employee E left join Bonus B on E.EMPID = B.EMPID where B.bonus<1000 OR B.Bonus IS NULL;