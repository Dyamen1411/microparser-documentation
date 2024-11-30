/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lr_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 02:10:18 by ale-boud          #+#    #+#             */
/*   Updated: 2024/11/30 15:12:45 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file lr_error.h
 * 
 * @brief Error definition.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-12-14
 * @copyright Copyright (c) 2023
 */

#ifndef LR_ERROR_H
# define LR_ERROR_H

// ************************************************************************** //
// *                                                                        * //
// * Error definition.                                                      * //
// *                                                                        * //
// ************************************************************************** //

/**
 * @brief Every error states the parser can be in.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-12-14
 * @copyright Copyright (c) 2023
 */
typedef enum e_lr_error
{
	/**
	 * @brief OK.
	 */
	LR_OK,
	/**
	 * @brief Congratulation, expression parsed.
	 */
	LR_ACCEPT,
	/**
	 * @brief Malloc returning NULL (buy more ram :3).
	 */
	LR_BAD_ALLOC,
	/**
	 * @brief Parser syntax error.
	 */
	LR_SYNTAX_ERROR,
	/**
	 * @brief Prod callback error (an prod cb return NULL).
	 */
	LR_PROD_ERROR,
	/**
	 * @brief Parser internal error (maybe you fucked'up the LR table ?).
	 */
	LR_INTERNAL_ERROR,
}	t_lr_error;

#endif
