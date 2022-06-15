SELECT c.id, c.name
from customers c
where c.id not in(SELECT l.id_customers from locations l WHERE l.id_customers = c.id );
