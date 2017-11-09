# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_gen.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 13:47:22 by lhernand          #+#    #+#              #
#    Updated: 2017/07/17 13:54:58 by lhernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++)
{
    for (my $j = 0; $j < $x; $j++) 
	{
        if (int(rand($y) * 2) < $density) 
		{
            print "o";
        }
        else
	   	{
            print ".";
        }
    }
    print "\n";
}
