SELECT c.name, o.id
from customers c
join orders o on o.id_customers = c.id
WHERE YEAR(o.orders_date) = 2016 
and MONTH(o.orders_date) > 0 
and MONTH(o.orders_date) < 7;
