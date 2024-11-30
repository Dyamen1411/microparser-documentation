/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <massias.antoine.pro@gmail.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:45:46 by ale-boud          #+#    #+#             */
/*   Updated: 2024/11/30 19:39:53 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file parser.c
 * @author ale-boud (ale-boud@student.42.fr)
 * @brief The LR parser implementation.
 * @date 2023-11-29
 * @copyright Copyright (c) 2023
 */

// ************************************************************************** //
// *                                                                        * //
// * Includes.                                                              * //
// *                                                                        * //
// ************************************************************************** //

#include "lr_parser.h"

// ************************************************************************** //
// *                                                                        * //
// * Header functions.                                                      * //
// *                                                                        * //
// ************************************************************************** //

t_lr_error	lr_parser_init(
				t_lr_parser_ctx *ctx,
				void *usrptr
				)
{
	t_lr_stack_item	axiom;
	t_lr_error		err;

	err = lr_stack_init(&ctx->stack, ctx->token_free_cbs, usrptr);
	if (err != LR_OK)
		return (err);
	axiom = (t_lr_stack_item){.type = ITEM_AXIOM, .data = {}, .state_id = 0};
	err = lr_stack_push(&ctx->stack, &axiom);
	if (err != LR_OK)
	{
		lr_stack_destroy(&ctx->stack);
		return (err);
	}
	ctx->usrptr = usrptr;
	return (LR_OK);
}

t_lr_error	lr_parser_exec(
				t_lr_parser_ctx *ctx,
				const t_lr_token *token,
				void **derived
				)
{
	t_lr_error	r;

	r = _lr_parser_exec(ctx, token);
	if (r != LR_ACCEPT)
		return (r);
	if (lr_stack_used(&ctx->stack) != 2)
	{
		lr_stack_destroy(&ctx->stack);
		return (LR_INTERNAL_ERROR);
	}
	*derived = ctx->stack.data[1].data.derived.data;
	ctx->stack.used = 1;
	return (LR_ACCEPT);
}

void	lr_parser_destroy(
			t_lr_parser_ctx *ctx
			)
{
	lr_stack_destroy(&ctx->stack);
}
