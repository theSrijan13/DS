# Write your MySQL query statement below

SELECT * FROM Cinema
WHERE mod(id,2) AND description <> 'boring'
ORDER BY rating desc;