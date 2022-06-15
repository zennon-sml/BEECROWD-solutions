SELECT m.id, m.name
from movies m join prices p on p.id = m.id_prices
where LOWER(p.categorie) = 'promotion';
