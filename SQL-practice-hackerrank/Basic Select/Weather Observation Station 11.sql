select distinct(city) from station where city regexp '^[^aeiou]' or city regexp '[^aeiuo]$';