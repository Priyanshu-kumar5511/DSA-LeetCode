# Write your MySQL query statement below
select p.project_id,
 Round(AVG(E.experience_years ),2) AS average_years 
 from Project P 
 join Employee E 
 on p.employee_id=E.employee_id 
group by p.project_id  

