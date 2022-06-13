SELECT DISTINCT c.name, sum(p.amount)
from products p 
inner join categories c 
on c.id = p.id_categories
GROUP BY c.name;

