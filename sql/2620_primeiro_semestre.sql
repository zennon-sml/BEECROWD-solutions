SELECT c.name, o.id
from customers c
join orders o on o.id_customers = c.id
WHERE EXTRACT(YEAR FROM o.orders_date) = 2016 
and EXTRACT(MONTH FROM o.orders_date) > 0
and EXTRACT(MONTH FROM o.orders_date) < 7;
/* orders.orders_date >= '2016-01-01' also can be done this way */
