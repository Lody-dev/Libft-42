/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:52:55 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/11 15:14:51 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isalpha(int c){

if ((c>=65 && c<=90)||(c>=97 && c<=122)){
	return 1;
	}
return 0;
}
