# Write your MySQL query statement below
SELECT 
    stock_name,
    SUM(IF(operation = 'buy', -price, price)) as
    capital_gain_loss
FROM
    Stocks  
GROUP BY 
    stock_name;