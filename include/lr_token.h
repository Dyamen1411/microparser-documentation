/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lr_token.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:36:04 by ale-boud          #+#    #+#             */
/*   Updated: 2024/12/02 09:52:27 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file lr_token.h
 * 
 * @brief Definition of tokens.
 * 
 * @warning
 * The user must define `MP_TOKEN_TYPE` with the type of the token ! \n
 * \n
 * 	**Example 1** :
 * 	@code
 * 	#define MP_TOKEN_TYPE int
 * 	@endcode
 * \n
 * 	**Example 2** :
 * 	@code
 * 	#define MP_TOKEN_TYPE	\
 * 	struct					\
 * 	{						\
 * 		int a;				\
 * 		bool b;				\
 * 		char* ptr;			\
 * 	}
 * 	@endcode
 * \n
 * 	**Example 3** :
 * 	@code
 * 	#define MP_TOKEN_TYPE	\
 * 	union					\
 * 	{						\
 * 		int a;				\
 * 		bool b;				\
 * 		char* ptr;			\
 * 	}
 * 	@endcode
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
 * @brief The state id from which a token is created.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef int				t_lr_token_id;

/**
 * @brief A callback to free the user defined token type.
 * 
 * @param data Token data.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef void			(*t_lr_token_free_cb)(t_lr_token_type *data);

/**
 * @brief Token description.
 * 
 * @param id The state id from which this token is created.
 * @param data The data contained in this token.
 * 
 * @author ale-boud (ale-boud@student.42.fr)
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */
typedef struct s_lr_token
{
	/**
	 * @brief The state id from which a token is created.
	 */
	t_lr_token_id	id;
	/**
	 * @brief The data contained in this token.
	 */
	t_lr_token_type	data;
}	t_lr_token;

#endif
