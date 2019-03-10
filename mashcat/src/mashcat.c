
/**
 *  
 *  Foobar is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *  
 */

#include "mashcat.h"


int main()
{
    const char *s0 = "mashcat Copyright (C) 2019 Jose Fernando Lopez Fernandez";
    const char *s1 = "This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.";
    const char *s2 = "This is free software, and you are welcome to redistribute it";
    const char *s3 = "under certain conditions; type `show c' for details.";

    puts(s0);
    puts(s1);
    puts(s2);
    puts(s3);

    return EXIT_SUCCESS;
}
