# Write your MySQL query statement below
select employee_id  from Employees 
 where salary<30000 AND manager_id IS NOT NULL AND
  manager_id not in (select employee_id  from employees )ORDER BY employee_id;;


