/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:11:26 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/21 12:27:27 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str){
	int i = 0;
if (*str != '\0'){
	str++;
	i++;
	}
return(i);
}
