/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <viaremko@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:06:25 by viaremko          #+#    #+#             */
/*   Updated: 2024/09/17 14:08:57 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *bzero(void *s,  unsigned int n){
unsigned char *a = s;


while(a[i] && i<n){
a[i] = '\0';
i++;
	}
return(s);
}