#include "bsq.h"

void ft_display_map(char *map_file)
{
	char **map;
	int fd;
	char buffer[30000];
	int x;
	int errno;
	int y;

	fd = open(map_file, O_RDONLY);
	//if (!(ft_is_error(fd, errno)))
	//{
		read(fd, buffer, 30000);
	//}
	map = ft_split(buffer, "\n");
	x = 0;
	y = 0;
	while (map[x])
	{
		while (map[y])
		{
			ft_putchar(map[x][y]);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
	close(fd);
}


	
	
	