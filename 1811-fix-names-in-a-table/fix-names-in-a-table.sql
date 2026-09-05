# Write your MySQL query statement below
select user_id , concat(UPPER(left(name,1)) , lower(SUBSTRING(name ,2))) name from users ORDER BY user_id;;