
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>
#include <glbinding/Version.h>


using namespace gl;

namespace glbinding
{

const std::unordered_map<GLextension, Version> Meta_ReqVersionsByExtension
{
    { GLextension::GL_APPLE_vertex_array_object, { 3, 0 } },
    { GLextension::GL_ARB_color_buffer_float, { 3, 0 } },
    { GLextension::GL_ARB_depth_buffer_float, { 3, 0 } },
    { GLextension::GL_ARB_framebuffer_object, { 3, 0 } },
    { GLextension::GL_ARB_framebuffer_sRGB, { 3, 0 } },
    { GLextension::GL_ARB_half_float_pixel, { 3, 0 } },
    { GLextension::GL_ARB_half_float_vertex, { 3, 0 } },
    { GLextension::GL_ARB_map_buffer_range, { 3, 0 } },
    { GLextension::GL_ARB_texture_compression_rgtc, { 3, 0 } },
    { GLextension::GL_ARB_texture_float, { 3, 0 } },
    { GLextension::GL_ARB_texture_rg, { 3, 0 } },
    { GLextension::GL_EXT_draw_buffers2, { 3, 0 } },
    { GLextension::GL_EXT_framebuffer_blit, { 3, 0 } },
    { GLextension::GL_EXT_framebuffer_multisample, { 3, 0 } },
    { GLextension::GL_EXT_gpu_shader4, { 3, 0 } },
    { GLextension::GL_EXT_packed_depth_stencil, { 3, 0 } },
    { GLextension::GL_EXT_packed_float, { 3, 0 } },
    { GLextension::GL_EXT_texture_array, { 3, 0 } },
    { GLextension::GL_EXT_texture_integer, { 3, 0 } },
    { GLextension::GL_EXT_texture_shared_exponent, { 3, 0 } },
    { GLextension::GL_EXT_transform_feedback, { 3, 0 } },
    { GLextension::GL_NV_conditional_render, { 3, 0 } },
    { GLextension::GL_NV_half_float, { 3, 0 } },
    { GLextension::GL_ARB_copy_buffer, { 3, 1 } },
    { GLextension::GL_ARB_draw_instanced, { 3, 1 } },
    { GLextension::GL_ARB_texture_buffer_object, { 3, 1 } },
    { GLextension::GL_ARB_texture_rectangle, { 3, 1 } },
    { GLextension::GL_ARB_uniform_buffer_object, { 3, 1 } },
    { GLextension::GL_EXT_texture_snorm, { 3, 1 } },
    { GLextension::GL_NV_primitive_restart, { 3, 1 } },
    { GLextension::GL_ARB_depth_clamp, { 3, 2 } },
    { GLextension::GL_ARB_draw_elements_base_vertex, { 3, 2 } },
    { GLextension::GL_ARB_fragment_coord_conventions, { 3, 2 } },
    { GLextension::GL_ARB_geometry_shader4, { 3, 2 } },
    { GLextension::GL_ARB_provoking_vertex, { 3, 2 } },
    { GLextension::GL_ARB_seamless_cube_map, { 3, 2 } },
    { GLextension::GL_ARB_sync, { 3, 2 } },
    { GLextension::GL_ARB_texture_multisample, { 3, 2 } },
    { GLextension::GL_ARB_vertex_array_bgra, { 3, 2 } },
    { GLextension::GL_EXT_vertex_array_bgra, { 3, 2 } },
    { GLextension::GL_ARB_blend_func_extended, { 3, 3 } },
    { GLextension::GL_ARB_explicit_attrib_location, { 3, 3 } },
    { GLextension::GL_ARB_instanced_arrays, { 3, 3 } },
    { GLextension::GL_ARB_occlusion_query2, { 3, 3 } },
    { GLextension::GL_ARB_sampler_objects, { 3, 3 } },
    { GLextension::GL_ARB_texture_rgb10_a2ui, { 3, 3 } },
    { GLextension::GL_ARB_texture_swizzle, { 3, 3 } },
    { GLextension::GL_ARB_timer_query, { 3, 3 } },
    { GLextension::GL_ARB_vertex_type_2_10_10_10_rev, { 3, 3 } },
    { GLextension::GL_ARB_draw_buffers_blend, { 4, 0 } },
    { GLextension::GL_ARB_draw_indirect, { 4, 0 } },
    { GLextension::GL_ARB_gpu_shader5, { 4, 0 } },
    { GLextension::GL_ARB_gpu_shader_fp64, { 4, 0 } },
    { GLextension::GL_ARB_sample_shading, { 4, 0 } },
    { GLextension::GL_ARB_shader_subroutine, { 4, 0 } },
    { GLextension::GL_ARB_tessellation_shader, { 4, 0 } },
    { GLextension::GL_ARB_texture_buffer_object_rgb32, { 4, 0 } },
    { GLextension::GL_ARB_texture_cube_map_array, { 4, 0 } },
    { GLextension::GL_ARB_texture_gather, { 4, 0 } },
    { GLextension::GL_ARB_texture_query_lod, { 4, 0 } },
    { GLextension::GL_ARB_transform_feedback2, { 4, 0 } },
    { GLextension::GL_ARB_transform_feedback3, { 4, 0 } },
    { GLextension::GL_ARB_ES2_compatibility, { 4, 1 } },
    { GLextension::GL_ARB_get_program_binary, { 4, 1 } },
    { GLextension::GL_ARB_separate_shader_objects, { 4, 1 } },
    { GLextension::GL_ARB_shader_precision, { 4, 1 } },
    { GLextension::GL_ARB_vertex_attrib_64bit, { 4, 1 } },
    { GLextension::GL_ARB_viewport_array, { 4, 1 } },
    { GLextension::GL_ARB_base_instance, { 4, 2 } },
    { GLextension::GL_ARB_compressed_texture_pixel_storage, { 4, 2 } },
    { GLextension::GL_ARB_conservative_depth, { 4, 2 } },
    { GLextension::GL_ARB_internalformat_query, { 4, 2 } },
    { GLextension::GL_ARB_map_buffer_alignment, { 4, 2 } },
    { GLextension::GL_ARB_robustness, { 4, 2 } },
    { GLextension::GL_ARB_shader_atomic_counters, { 4, 2 } },
    { GLextension::GL_ARB_shader_image_load_store, { 4, 2 } },
    { GLextension::GL_ARB_shading_language_420pack, { 4, 2 } },
    { GLextension::GL_ARB_texture_compression_bptc, { 4, 2 } },
    { GLextension::GL_ARB_texture_storage, { 4, 2 } },
    { GLextension::GL_ARB_transform_feedback_instanced, { 4, 2 } },
    { GLextension::GL_ARB_ES3_compatibility, { 4, 3 } },
    { GLextension::GL_ARB_arrays_of_arrays, { 4, 3 } },
    { GLextension::GL_ARB_clear_buffer_object, { 4, 3 } },
    { GLextension::GL_ARB_compute_shader, { 4, 3 } },
    { GLextension::GL_ARB_copy_image, { 4, 3 } },
    { GLextension::GL_ARB_debug_output, { 4, 3 } },
    { GLextension::GL_ARB_explicit_uniform_location, { 4, 3 } },
    { GLextension::GL_ARB_framebuffer_no_attachments, { 4, 3 } },
    { GLextension::GL_ARB_internalformat_query2, { 4, 3 } },
    { GLextension::GL_ARB_invalidate_subdata, { 4, 3 } },
    { GLextension::GL_ARB_multi_draw_indirect, { 4, 3 } },
    { GLextension::GL_ARB_program_interface_query, { 4, 3 } },
    { GLextension::GL_ARB_shader_image_size, { 4, 3 } },
    { GLextension::GL_ARB_shader_storage_buffer_object, { 4, 3 } },
    { GLextension::GL_ARB_stencil_texturing, { 4, 3 } },
    { GLextension::GL_ARB_texture_buffer_range, { 4, 3 } },
    { GLextension::GL_ARB_texture_storage_multisample, { 4, 3 } },
    { GLextension::GL_ARB_texture_view, { 4, 3 } },
    { GLextension::GL_ARB_vertex_attrib_binding, { 4, 3 } },
    { GLextension::GL_EXT_debug_label, { 4, 3 } },
    { GLextension::GL_ARB_buffer_storage, { 4, 4 } },
    { GLextension::GL_ARB_clear_texture, { 4, 4 } },
    { GLextension::GL_ARB_enhanced_layouts, { 4, 4 } },
    { GLextension::GL_ARB_multi_bind, { 4, 4 } },
    { GLextension::GL_ARB_query_buffer_object, { 4, 4 } },
    { GLextension::GL_ARB_texture_mirror_clamp_to_edge, { 4, 4 } },
    { GLextension::GL_ARB_texture_stencil8, { 4, 4 } },
    { GLextension::GL_ARB_vertex_type_10f_11f_11f_rev, { 4, 4 } }
};

} // namespace glbinding