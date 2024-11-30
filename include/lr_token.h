/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lr_token.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:36:04 by ale-boud          #+#    #+#             */
/*   Updated: 2024/11/30 15:25:02 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file lr_token.h
 * 
 * @brief Definition of tokens.
 * 
 * @par
 * 	You must define `MP_TOKEN_TYPE` with the type of the token !
 * @endparblock
 * 
 * @par
 * 	Example 1 :
 * 	@code
 * 	#define MP_TOKEN_TYPE int
 * 	@endcode
 * @endparblock
 * 
 * @par
 * 	Example 2 :
 * 	@code
 * 	#define MP_TOKEN_TYPE	\
 * 	struct			\
 * 	{				\
 * 		int a;		\
 * 		bool b;		\
 * 		char* ptr;	\
 * 	}
 * 	@endcode
 * @endparblock
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */

#ifndef LR_TOKEN_H
# define LR_TOKEN_H

// ************************************************************************** //
// *                                                                        * //
// * Structure definitions.                                                 * //
// *                                                                        * //
// ************************************************************************** //

# ifdef MP_TOKEN_TYPE

typedef MP_TOKEN_TYPE	t_lr_token_type;

# else

#  error MP_TOKEN_TYPE must be defined !

# endif

/**
 * @brief The state from which this token is created.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef int				t_lr_token_id;

/**
 * @brief A callback to free your token type.
 * 
 * @param data A token data.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef void			(*t_lr_token_free_cb)(t_lr_token_type *data);

/**
 * @brief A token description.
 * 
 * @param id The state id.
 * @param data The data contained in this token.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef struct s_lr_token
{
	t_lr_token_id	id;
	t_lr_token_type	data;
}	t_lr_token;

#endif
