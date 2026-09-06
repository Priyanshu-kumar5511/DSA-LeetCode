# Write your MySQL query statement below
select P.product_name , S.year, s.price from  Sales S  join product p on s.product_id = p.product_id 