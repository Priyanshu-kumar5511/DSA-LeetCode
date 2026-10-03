-- # Write your MySQL query statement below
-- SELECT *
-- FROM Users
-- WHERE mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';



select * from Users where mail regexp '^[a-zA-Z][A-Za-z0-9_.-]*@leetcode\\.com$' and
 mail like binary '%@leetcode.com';

