SELECT prod.name, prov.name, c.name
from products prod
join providers prov on prod.id_providers = prov.id
join categories c on prod.id_categories = c.id
where LOWER(prov.name) = 'sansul sa' and LOWER(c.name) = 'imported';
