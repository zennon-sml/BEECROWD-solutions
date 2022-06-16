SELECT p.name, c.name
from products p
JOIN categories c on p.id_categories = c.id
WHERE p.amount > 100
and p.id_categories in(1,2,3,6,9)
ORDER BY p.id_categories;
