SELECT c.name, r.rentals_date
from customers c
join rentals r 
on r.id_customers = c.id 
and EXTRACT(MONTH FROM r.rentals_date) = 9;
