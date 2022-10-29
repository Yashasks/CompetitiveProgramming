# Write your MySQL query statement below
SELECT name FROM Customer WHERE id not in (SELECT id FROM Customer WHERE referee_id=2);