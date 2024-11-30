/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lr_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:16:04 by ale-boud          #+#    #+#             */
/*   Updated: 2024/11/30 15:25:28 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file lr_utils.h
 * 
 * @brief The helpers definition.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */

#ifndef LR_UTILS_H
# define LR_UTILS_H

// ************************************************************************** //
// *                                                                        * //
// * Includes.                                                              * //
// *                                                                        * //
// ************************************************************************** //

# include <stdlib.h>

// ************************************************************************** //
// *                                                                        * //
// * Function prototypes.                                                   * //
// *                                                                        * //
// ************************************************************************** //

void	*ft_realloc(
			void *p,
			size_t oldsize,
			size_t newsize
			);

void	*ft_memcpy(
			void *dst,
			const void *src,
			size_t n
			);

int		ft_strlen(
			const char *str
			);

char	*ft_strdup(
			const char *str
			);

#endif
