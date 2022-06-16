SELECT p1.name
from products p1
join providers p2 on p1.id_providers = p2.id
where p1.amount > 10 
and p1.amount < 20
and p2.name LIKE 'P%';
