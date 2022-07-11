(select concat('Podium: ', team)
	from league
	limit 3
)

union all

(select concat('Demoted: ', team)
	from league 
	where position > (select count(*)-2 from league)
)
