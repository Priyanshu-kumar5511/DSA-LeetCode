# Write your MySQL query statement below
select Eu.unique_id ,E.name  from Employees E left join EmployeeUNI Eu on Eu.id =E.id 