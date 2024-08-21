# Write your MySQL query statement below
select round(count(distinct(player_id)) / (select COUNT(distinct(player_id)) from activity ) , 2) as fraction
from Activity 
where (player_id, date_sub(event_date, INTERVAL 1 DAY)) IN (
    select player_id, min(event_date) as first_login
    from Activity
    group by player_id
    )


