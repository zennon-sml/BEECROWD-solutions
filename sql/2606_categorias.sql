SELECT p.id, p.name
from products p 
inner join categories c on p.id_categories = c.id
where LOWER(c.name) like 'super%';
