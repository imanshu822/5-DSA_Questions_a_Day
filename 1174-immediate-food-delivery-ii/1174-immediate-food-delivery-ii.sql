-- SELECT ROUND(SUM(if(order_date = customer_pref_delivery_date, 1, 0)) * 100 / count(customer_id), 2) as 
-- immediate_percentage
-- FROM Delivery 
-- WHERE
-- (customer_id, order_date) IN
--     (SELECT customer_id, MIN(order_date) AS first_order_date
--     FROM Delivery
--     GROUP BY customer_id);


SELECT ROUND(avg(order_date = customer_pref_delivery_date) * 100 , 2) as 
immediate_percentage
FROM Delivery 
WHERE
(customer_id, order_date) IN
    (SELECT customer_id, MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id);