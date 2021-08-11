#pragma once
#include "paddle_lite_factory_helper.h"

USE_LITE_OP(fake_quantize_moving_average_abs_max);
USE_LITE_OP(beam_search_decode);
USE_LITE_OP(__xpu__mmdnn_bid_emb_grnn_att);
USE_LITE_OP(__xpu__mmdnn_bid_emb_grnn_att2);
USE_LITE_OP(__xpu__mmdnn_bid_emb_att);
USE_LITE_OP(__xpu__mmdnn_match_conv_topk);
USE_LITE_OP(__xpu__mmdnn_merge_all);
USE_LITE_OP(im2sequence);
USE_LITE_OP(select_input);
USE_LITE_OP(sin);
USE_LITE_OP(yolo_box);
USE_LITE_OP(bilinear_interp_v2);
USE_LITE_OP(nearest_interp_v2);
USE_LITE_OP(sum);
USE_LITE_OP(reduce_sum);
USE_LITE_OP(expand_v2);
USE_LITE_OP(tile);
USE_LITE_OP(subgraph);
USE_LITE_OP(elementwise_sub);
USE_LITE_OP(elementwise_add);
USE_LITE_OP(elementwise_mul);
USE_LITE_OP(elementwise_max);
USE_LITE_OP(elementwise_min);
USE_LITE_OP(elementwise_div);
USE_LITE_OP(elementwise_floordiv);
USE_LITE_OP(elementwise_mod);
USE_LITE_OP(elementwise_pow);
USE_LITE_OP(density_prior_box);
USE_LITE_OP(sequence_reshape);
USE_LITE_OP(layer_norm);
USE_LITE_OP(__xpu__conv2d);
USE_LITE_OP(increment);
USE_LITE_OP(__xpu__logit);
USE_LITE_OP(pow);
USE_LITE_OP(search_group_padding);
USE_LITE_OP(anchor_generator);
USE_LITE_OP(argsort);
USE_LITE_OP(search_seq_softmax);
USE_LITE_OP(sequence_mask);
USE_LITE_OP(scatter_nd_add);
USE_LITE_OP(fill_any_like);
USE_LITE_OP(meshgrid);
USE_LITE_OP(fusion_elementwise_sub_activation);
USE_LITE_OP(fusion_elementwise_add_activation);
USE_LITE_OP(fusion_elementwise_mul_activation);
USE_LITE_OP(fusion_elementwise_max_activation);
USE_LITE_OP(fusion_elementwise_min_activation);
USE_LITE_OP(fusion_elementwise_div_activation);
USE_LITE_OP(flatten);
USE_LITE_OP(flatten2);
USE_LITE_OP(flatten_contiguous_range);
USE_LITE_OP(reduce_max);
USE_LITE_OP(reduce_min);
USE_LITE_OP(sequence_pool_concat);
USE_LITE_OP(__xpu__generate_sequence);
USE_LITE_OP(io_copy);
USE_LITE_OP(flip);
USE_LITE_OP(correlation);
USE_LITE_OP(lod_array_length);
USE_LITE_OP(fake_quantize_dequantize_abs_max);
USE_LITE_OP(calib);
USE_LITE_OP(one_hot);
USE_LITE_OP(lookup_table_dequant);
USE_LITE_OP(roi_perspective_transform);
USE_LITE_OP(range);
USE_LITE_OP(split);
USE_LITE_OP(tensor_array_to_tensor);
USE_LITE_OP(while);
USE_LITE_OP(conditional_block);
USE_LITE_OP(sequence_conv);
USE_LITE_OP(collect_fpn_proposals);
USE_LITE_OP(top_k);
USE_LITE_OP(sign);
USE_LITE_OP(reduce_mean);
USE_LITE_OP(grid_sampler);
USE_LITE_OP(calib_once);
USE_LITE_OP(shuffle_channel);
USE_LITE_OP(__xpu__resnet50);
USE_LITE_OP(gather);
USE_LITE_OP(top_k_v2);
USE_LITE_OP(crop);
USE_LITE_OP(linspace);
USE_LITE_OP(clip);
USE_LITE_OP(where_index);
USE_LITE_OP(write_back);
USE_LITE_OP(__xpu__fc);
USE_LITE_OP(cast);
USE_LITE_OP(gru);
USE_LITE_OP(__xpu__softmax_topk);
USE_LITE_OP(sequence_expand);
USE_LITE_OP(crop_tensor);
USE_LITE_OP(equal);
USE_LITE_OP(not_equal);
USE_LITE_OP(less_than);
USE_LITE_OP(less_equal);
USE_LITE_OP(greater_than);
USE_LITE_OP(greater_equal);
USE_LITE_OP(io_copy_once);
USE_LITE_OP(gather_tree);
USE_LITE_OP(prior_box);
USE_LITE_OP(sequence_unpad);
USE_LITE_OP(layout);
USE_LITE_OP(mul);
USE_LITE_OP(search_seq_depadding);
USE_LITE_OP(distribute_fpn_proposals);
USE_LITE_OP(decode_bboxes);
USE_LITE_OP(pixel_shuffle);
USE_LITE_OP(lstm);
USE_LITE_OP(attention_padding_mask);
USE_LITE_OP(search_attention_padding_mask);
USE_LITE_OP(search_aligned_mat_mul);
USE_LITE_OP(expand_as);
USE_LITE_OP(strided_slice);
USE_LITE_OP(fetch);
USE_LITE_OP(scatter);
USE_LITE_OP(matmul);
USE_LITE_OP(assign_value);
USE_LITE_OP(affine_channel);
USE_LITE_OP(expand);
USE_LITE_OP(batch_norm);
USE_LITE_OP(sync_batch_norm);
USE_LITE_OP(instance_norm);
USE_LITE_OP(__xpu__multi_encoder);
USE_LITE_OP(uniform_random);
USE_LITE_OP(conv2d_transpose);
USE_LITE_OP(depthwise_conv2d_transpose);
USE_LITE_OP(lrn);
USE_LITE_OP(__xpu__sfa_head);
USE_LITE_OP(concat);
USE_LITE_OP(retinanet_detection_output);
USE_LITE_OP(norm);
USE_LITE_OP(p_norm);
USE_LITE_OP(lookup_table);
USE_LITE_OP(fake_channel_wise_dequantize_max_abs);
USE_LITE_OP(__xpu__block_fuse_op);
USE_LITE_OP(feed);
USE_LITE_OP(is_empty);
USE_LITE_OP(negative);
USE_LITE_OP(affine_grid);
USE_LITE_OP(pad3d);
USE_LITE_OP(shape);
USE_LITE_OP(beam_search);
USE_LITE_OP(scale);
USE_LITE_OP(roi_align);
USE_LITE_OP(box_coder);
USE_LITE_OP(read_from_array);
USE_LITE_OP(search_grnn);
USE_LITE_OP(sequence_pool);
USE_LITE_OP(max_pool2d_with_index);
USE_LITE_OP(search_seq_fc);
USE_LITE_OP(sequence_topk_avg_pooling);
USE_LITE_OP(matmul_v2);
USE_LITE_OP(unstack);
USE_LITE_OP(crf_decoding);
USE_LITE_OP(pool2d);
USE_LITE_OP(fc);
USE_LITE_OP(layout_once);
USE_LITE_OP(merge_lod_tensor);
USE_LITE_OP(__xpu__resnet_cbam);
USE_LITE_OP(one_hot_v2);
USE_LITE_OP(unsqueeze);
USE_LITE_OP(unsqueeze2);
USE_LITE_OP(fill_constant);
USE_LITE_OP(box_clip);
USE_LITE_OP(__xpu__embedding_with_eltwise_add);
USE_LITE_OP(sequence_pad);
USE_LITE_OP(arg_max);
USE_LITE_OP(sequence_expand_as);
USE_LITE_OP(match_matrix_tensor);
USE_LITE_OP(conv2d);
USE_LITE_OP(depthwise_conv2d);
USE_LITE_OP(mean);
USE_LITE_OP(sequence_concat);
USE_LITE_OP(multiclass_nms);
USE_LITE_OP(multiclass_nms2);
USE_LITE_OP(multiclass_nms3);
USE_LITE_OP(slice);
USE_LITE_OP(fake_quantize_dequantize_moving_average_abs_max);
USE_LITE_OP(fill_zeros_like);
USE_LITE_OP(__xpu__bigru);
USE_LITE_OP(lookup_table_v2);
USE_LITE_OP(fill_constant_batch_size_like);
USE_LITE_OP(reshape);
USE_LITE_OP(reshape2);
USE_LITE_OP(generate_proposals);
USE_LITE_OP(__xpu__mmdnn_search_attention);
USE_LITE_OP(pad2d);
USE_LITE_OP(fake_dequantize_max_abs);
USE_LITE_OP(cumsum);
USE_LITE_OP(assign);
USE_LITE_OP(fake_channel_wise_quantize_dequantize_abs_max);
USE_LITE_OP(fake_quantize_range_abs_max);
USE_LITE_OP(fake_quantize_abs_max);
USE_LITE_OP(polygon_box_transform);
USE_LITE_OP(search_fc);
USE_LITE_OP(where);
USE_LITE_OP(gru_unit);
USE_LITE_OP(reduce_prod);
USE_LITE_OP(transpose);
USE_LITE_OP(transpose2);
USE_LITE_OP(sequence_reverse_embedding);
USE_LITE_OP(var_conv_2d);
USE_LITE_OP(reduce_all);
USE_LITE_OP(matrix_nms);
USE_LITE_OP(tril_triu);
USE_LITE_OP(sequence_arithmetic);
USE_LITE_OP(search_seq_arithmetic);
USE_LITE_OP(square);
USE_LITE_OP(relu_clipped);
USE_LITE_OP(swish);
USE_LITE_OP(log);
USE_LITE_OP(exp);
USE_LITE_OP(abs);
USE_LITE_OP(floor);
USE_LITE_OP(hard_sigmoid);
USE_LITE_OP(sqrt);
USE_LITE_OP(rsqrt);
USE_LITE_OP(softsign);
USE_LITE_OP(gelu);
USE_LITE_OP(hard_swish);
USE_LITE_OP(reciprocal);
USE_LITE_OP(mish);
USE_LITE_OP(group_norm);
USE_LITE_OP(write_to_array);
USE_LITE_OP(dropout);
USE_LITE_OP(gather_nd);
USE_LITE_OP(ctc_align);
USE_LITE_OP(softmax);
USE_LITE_OP(split_lod_tensor);
USE_LITE_OP(__xpu__squeeze_excitation_block);
USE_LITE_OP(rnn);
USE_LITE_OP(squeeze);
USE_LITE_OP(squeeze2);
USE_LITE_OP(deformable_conv);
USE_LITE_OP(sigmoid);
USE_LITE_OP(tanh);
USE_LITE_OP(relu);
USE_LITE_OP(leaky_relu);
USE_LITE_OP(relu6);
USE_LITE_OP(prelu);
USE_LITE_OP(thresholded_relu);
USE_LITE_OP(elu);
USE_LITE_OP(erf);
USE_LITE_OP(softplus);
USE_LITE_OP(logical_xor);
USE_LITE_OP(logical_and);
USE_LITE_OP(logical_or);
USE_LITE_OP(logical_not);
USE_LITE_OP(print);
USE_LITE_OP(sequence_softmax);
USE_LITE_OP(axpy);
USE_LITE_OP(stack);
USE_LITE_OP(lod_reset);
USE_LITE_OP(generate_proposals_v2);
USE_LITE_OP(topk_pooling);
USE_LITE_OP(cos);
USE_LITE_OP(nearest_interp);
USE_LITE_OP(bilinear_interp);
USE_LITE_OP(sequence_reverse);