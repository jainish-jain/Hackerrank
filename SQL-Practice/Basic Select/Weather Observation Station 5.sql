select city, length(city) from station where((length(city))=(select distinct min(length(city)) from station )) ORDER BY city LIMIT 1;
select city, length(city) from station where((length(city))=(select distinct max(length(city)) from station )) ORDER BY city LIMIT 1;