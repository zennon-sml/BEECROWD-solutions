SELECT name, cast(EXTRACT(DAY FROM payday) as int)
from loan
