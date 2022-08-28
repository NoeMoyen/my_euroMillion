##
## EPITECH PROJECT, 2022
## B-NWP-400-PAR-4-1-myteams-florian.damiot
## File description:
## Makefile
##

all:
	@echo "\033[34m\nBuilding myteams project ...\n\033[0m"
	mkdir build | true
	cd build && cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
	cd build && cmake --build .
	@echo "\n\033[34mCompilation successful.\n\033[32mBinary created.\033[0m\n"
	cp build/my_euroMillion .

clean:
	@echo "\033[34m\nRemoving build file ...\n\033[0m"
	rm -rf build


re: fclean all


.PHONY: all clean fclean re