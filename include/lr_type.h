/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lr_type.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 02:47:15 by ale-boud          #+#    #+#             */
/*   Updated: 2024/12/03 00:47:21 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file lr_type.h
 * 
 * @brief The types definition for LR parser.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */

#ifndef LR_TYPE_H
# define LR_TYPE_H

// ************************************************************************** //
// *                                                                        * //
// * Typedefs.                                                              * //
// *                                                                        * //
// ************************************************************************** //

/**
 * @brief A type to represent the automata state ids.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef int	t_lr_state_id;

/**
 * @brief A type to represent the automata production ids.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef int	t_lr_prod_id;

#endif
