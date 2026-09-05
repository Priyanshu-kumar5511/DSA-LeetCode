-- # Write your MySQL query statement below
-- select C.name  AS  Customers from Customers C INNER JOIN Orders O on C.ID =  O.customerId ;



# Write your MySQL query statement below
select C.name  AS  Customers from Customers C where c.id not in (select o.customerId  from orders o);