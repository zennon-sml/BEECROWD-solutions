SELECT prod.name, prov.name, prod.price
from products prod
JOIN providers prov on prod.id_providers = prov.id
JOIN categories c on prod.id_categories = c.id
WHERE prod.price > 1000 and LOWER(c.name) = 'super luxury';
