SELECT concat('Approved: ', name), grade
from students
where grade >= 7.0
order by grade DESC;
