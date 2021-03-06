/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */

/*
 * Test header file
 *
 * AUTOMATICALLY GENERATED FILE.  Edits will be lost on regen.
 */

#if !defined(_TEST_COMMON_H_)
#define _TEST_COMMON_H_

#define DISABLE_WARN_UNUSED_RESULT
#include <loci/loci.h>
#include <locitest/of_dup.h>
#include <locitest/unittest.h>

extern int global_error;
extern int exit_on_error;

/* @todo Make option for -k to continue tests if errors */
#define RUN_TEST(test) do {                                             \
        int rv;                                                         \
        TESTCASE(test, rv);                                             \
        if (rv != TEST_PASS) {                                          \
            global_error=1;                                             \
            if (exit_on_error) return(1);                               \
        }                                                               \
    } while(0)

#define TEST_OK(op) TEST_ASSERT((op) == OF_ERROR_NONE)
#define TEST_INDIGO_OK(op) TEST_ASSERT((op) == INDIGO_ERROR_NONE)

/*
 * Declarations of functions to populate scalar values in a a class
 */

extern void of_test_str_fill(uint8_t *buf, int value, int len);
extern int of_test_str_check(uint8_t *buf, int value, int len);


extern int of_octets_populate(of_octets_t *octets, int value);
extern int of_octets_check(of_octets_t *octets, int value);
extern int of_match_populate(of_match_t *match, of_version_t version,
                             int value);
extern int of_match_check(of_match_t *match, of_version_t version, int value);
extern int test_ident_macros(void);
extern int test_dump_objs(void);

/* In test_match_utils.c */
extern int test_match_utils(void);

extern int run_unified_accessor_tests(void);
extern int run_match_tests(void);
extern int run_utility_tests(void);

extern int run_scalar_acc_tests(void);
extern int run_list_tests(void);
extern int run_message_tests(void);
extern int run_setup_from_add_tests(void);

extern int run_validator_tests(void);

extern int run_list_limits_tests(void);

extern int test_ext_objs(void);
extern int test_datafiles(void);


extern int of_aggregate_stats_reply_OF_VERSION_1_0_populate(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_0_check(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_0_check_scalars(
    of_aggregate_stats_reply_t *obj, int value);

extern int of_aggregate_stats_request_OF_VERSION_1_0_populate(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_0_check(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_0_populate_scalars(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_0_check_scalars(
    of_aggregate_stats_request_t *obj, int value);

extern int of_bad_action_error_msg_OF_VERSION_1_0_populate(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_0_check(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_0_populate_scalars(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_0_check_scalars(
    of_bad_action_error_msg_t *obj, int value);

extern int of_bad_request_error_msg_OF_VERSION_1_0_populate(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_0_check(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_0_populate_scalars(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_0_check_scalars(
    of_bad_request_error_msg_t *obj, int value);

extern int of_barrier_reply_OF_VERSION_1_0_populate(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_0_check(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_0_populate_scalars(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_0_check_scalars(
    of_barrier_reply_t *obj, int value);

extern int of_barrier_request_OF_VERSION_1_0_populate(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_0_check(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_0_populate_scalars(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_0_check_scalars(
    of_barrier_request_t *obj, int value);

extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_0_populate(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_0_check(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);

extern int of_bsn_bw_clear_data_request_OF_VERSION_1_0_populate(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_0_check(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);

extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_0_populate(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_0_check(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);

extern int of_bsn_bw_enable_get_request_OF_VERSION_1_0_populate(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_0_check(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);

extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_0_populate(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_0_check(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);

extern int of_bsn_bw_enable_set_request_OF_VERSION_1_0_populate(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_0_check(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_0_check_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);

extern int of_bsn_get_interfaces_reply_OF_VERSION_1_0_populate(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_0_check(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);

extern int of_bsn_get_interfaces_request_OF_VERSION_1_0_populate(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_0_check(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_0_check_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);

extern int of_bsn_get_ip_mask_reply_OF_VERSION_1_0_populate(
    of_bsn_get_ip_mask_reply_t *obj, int value);
extern int of_bsn_get_ip_mask_reply_OF_VERSION_1_0_check(
    of_bsn_get_ip_mask_reply_t *obj, int value);
extern int of_bsn_get_ip_mask_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_ip_mask_reply_t *obj, int value);
extern int of_bsn_get_ip_mask_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_get_ip_mask_reply_t *obj, int value);

extern int of_bsn_get_ip_mask_request_OF_VERSION_1_0_populate(
    of_bsn_get_ip_mask_request_t *obj, int value);
extern int of_bsn_get_ip_mask_request_OF_VERSION_1_0_check(
    of_bsn_get_ip_mask_request_t *obj, int value);
extern int of_bsn_get_ip_mask_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_ip_mask_request_t *obj, int value);
extern int of_bsn_get_ip_mask_request_OF_VERSION_1_0_check_scalars(
    of_bsn_get_ip_mask_request_t *obj, int value);

extern int of_bsn_get_l2_table_reply_OF_VERSION_1_0_populate(
    of_bsn_get_l2_table_reply_t *obj, int value);
extern int of_bsn_get_l2_table_reply_OF_VERSION_1_0_check(
    of_bsn_get_l2_table_reply_t *obj, int value);
extern int of_bsn_get_l2_table_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_l2_table_reply_t *obj, int value);
extern int of_bsn_get_l2_table_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_get_l2_table_reply_t *obj, int value);

extern int of_bsn_get_l2_table_request_OF_VERSION_1_0_populate(
    of_bsn_get_l2_table_request_t *obj, int value);
extern int of_bsn_get_l2_table_request_OF_VERSION_1_0_check(
    of_bsn_get_l2_table_request_t *obj, int value);
extern int of_bsn_get_l2_table_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_l2_table_request_t *obj, int value);
extern int of_bsn_get_l2_table_request_OF_VERSION_1_0_check_scalars(
    of_bsn_get_l2_table_request_t *obj, int value);

extern int of_bsn_get_mirroring_reply_OF_VERSION_1_0_populate(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_0_check(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);

extern int of_bsn_get_mirroring_request_OF_VERSION_1_0_populate(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_0_check(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_0_check_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);

extern int of_bsn_header_OF_VERSION_1_0_populate(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_0_check(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_0_populate_scalars(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_0_check_scalars(
    of_bsn_header_t *obj, int value);

extern int of_bsn_hybrid_get_reply_OF_VERSION_1_0_populate(
    of_bsn_hybrid_get_reply_t *obj, int value);
extern int of_bsn_hybrid_get_reply_OF_VERSION_1_0_check(
    of_bsn_hybrid_get_reply_t *obj, int value);
extern int of_bsn_hybrid_get_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_hybrid_get_reply_t *obj, int value);
extern int of_bsn_hybrid_get_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_hybrid_get_reply_t *obj, int value);

extern int of_bsn_hybrid_get_request_OF_VERSION_1_0_populate(
    of_bsn_hybrid_get_request_t *obj, int value);
extern int of_bsn_hybrid_get_request_OF_VERSION_1_0_check(
    of_bsn_hybrid_get_request_t *obj, int value);
extern int of_bsn_hybrid_get_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_hybrid_get_request_t *obj, int value);
extern int of_bsn_hybrid_get_request_OF_VERSION_1_0_check_scalars(
    of_bsn_hybrid_get_request_t *obj, int value);

extern int of_bsn_pdu_rx_reply_OF_VERSION_1_0_populate(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_0_check(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);

extern int of_bsn_pdu_rx_request_OF_VERSION_1_0_populate(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_0_check(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_0_check_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);

extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_0_populate(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_0_check(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_0_populate_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_0_check_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);

extern int of_bsn_pdu_tx_reply_OF_VERSION_1_0_populate(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_0_check(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);

extern int of_bsn_pdu_tx_request_OF_VERSION_1_0_populate(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_0_check(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_0_check_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);

extern int of_bsn_set_ip_mask_OF_VERSION_1_0_populate(
    of_bsn_set_ip_mask_t *obj, int value);
extern int of_bsn_set_ip_mask_OF_VERSION_1_0_check(
    of_bsn_set_ip_mask_t *obj, int value);
extern int of_bsn_set_ip_mask_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_ip_mask_t *obj, int value);
extern int of_bsn_set_ip_mask_OF_VERSION_1_0_check_scalars(
    of_bsn_set_ip_mask_t *obj, int value);

extern int of_bsn_set_l2_table_reply_OF_VERSION_1_0_populate(
    of_bsn_set_l2_table_reply_t *obj, int value);
extern int of_bsn_set_l2_table_reply_OF_VERSION_1_0_check(
    of_bsn_set_l2_table_reply_t *obj, int value);
extern int of_bsn_set_l2_table_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_l2_table_reply_t *obj, int value);
extern int of_bsn_set_l2_table_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_set_l2_table_reply_t *obj, int value);

extern int of_bsn_set_l2_table_request_OF_VERSION_1_0_populate(
    of_bsn_set_l2_table_request_t *obj, int value);
extern int of_bsn_set_l2_table_request_OF_VERSION_1_0_check(
    of_bsn_set_l2_table_request_t *obj, int value);
extern int of_bsn_set_l2_table_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_l2_table_request_t *obj, int value);
extern int of_bsn_set_l2_table_request_OF_VERSION_1_0_check_scalars(
    of_bsn_set_l2_table_request_t *obj, int value);

extern int of_bsn_set_mirroring_OF_VERSION_1_0_populate(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_0_check(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_0_check_scalars(
    of_bsn_set_mirroring_t *obj, int value);

extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0_populate(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0_check(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);

extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_0_populate(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_0_check(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_0_check_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);

extern int of_bsn_shell_command_OF_VERSION_1_0_populate(
    of_bsn_shell_command_t *obj, int value);
extern int of_bsn_shell_command_OF_VERSION_1_0_check(
    of_bsn_shell_command_t *obj, int value);
extern int of_bsn_shell_command_OF_VERSION_1_0_populate_scalars(
    of_bsn_shell_command_t *obj, int value);
extern int of_bsn_shell_command_OF_VERSION_1_0_check_scalars(
    of_bsn_shell_command_t *obj, int value);

extern int of_bsn_shell_output_OF_VERSION_1_0_populate(
    of_bsn_shell_output_t *obj, int value);
extern int of_bsn_shell_output_OF_VERSION_1_0_check(
    of_bsn_shell_output_t *obj, int value);
extern int of_bsn_shell_output_OF_VERSION_1_0_populate_scalars(
    of_bsn_shell_output_t *obj, int value);
extern int of_bsn_shell_output_OF_VERSION_1_0_check_scalars(
    of_bsn_shell_output_t *obj, int value);

extern int of_bsn_shell_status_OF_VERSION_1_0_populate(
    of_bsn_shell_status_t *obj, int value);
extern int of_bsn_shell_status_OF_VERSION_1_0_check(
    of_bsn_shell_status_t *obj, int value);
extern int of_bsn_shell_status_OF_VERSION_1_0_populate_scalars(
    of_bsn_shell_status_t *obj, int value);
extern int of_bsn_shell_status_OF_VERSION_1_0_check_scalars(
    of_bsn_shell_status_t *obj, int value);

extern int of_bsn_stats_reply_OF_VERSION_1_0_populate(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_0_check(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_stats_reply_t *obj, int value);

extern int of_bsn_stats_request_OF_VERSION_1_0_populate(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_0_check(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_0_check_scalars(
    of_bsn_stats_request_t *obj, int value);

extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_0_populate(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_0_check(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);

extern int of_bsn_virtual_port_create_request_OF_VERSION_1_0_populate(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_0_check(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_0_check_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);

extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_0_populate(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_0_check(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_0_populate_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_0_check_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);

extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_0_populate(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_0_check(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_0_populate_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_0_check_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);

extern int of_desc_stats_reply_OF_VERSION_1_0_populate(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_0_check(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_0_check_scalars(
    of_desc_stats_reply_t *obj, int value);

extern int of_desc_stats_request_OF_VERSION_1_0_populate(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_0_check(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_0_populate_scalars(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_0_check_scalars(
    of_desc_stats_request_t *obj, int value);

extern int of_echo_reply_OF_VERSION_1_0_populate(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_0_check(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_0_populate_scalars(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_0_check_scalars(
    of_echo_reply_t *obj, int value);

extern int of_echo_request_OF_VERSION_1_0_populate(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_0_check(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_0_populate_scalars(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_0_check_scalars(
    of_echo_request_t *obj, int value);

extern int of_error_msg_OF_VERSION_1_0_populate(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_0_check(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_0_populate_scalars(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_0_check_scalars(
    of_error_msg_t *obj, int value);

extern int of_experimenter_OF_VERSION_1_0_populate(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_0_check(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_0_populate_scalars(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_0_check_scalars(
    of_experimenter_t *obj, int value);

extern int of_experimenter_stats_reply_OF_VERSION_1_0_populate(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_0_check(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_0_check_scalars(
    of_experimenter_stats_reply_t *obj, int value);

extern int of_experimenter_stats_request_OF_VERSION_1_0_populate(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_0_check(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_0_populate_scalars(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_0_check_scalars(
    of_experimenter_stats_request_t *obj, int value);

extern int of_features_reply_OF_VERSION_1_0_populate(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_0_check(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_0_populate_scalars(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_0_check_scalars(
    of_features_reply_t *obj, int value);

extern int of_features_request_OF_VERSION_1_0_populate(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_0_check(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_0_populate_scalars(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_0_check_scalars(
    of_features_request_t *obj, int value);

extern int of_flow_add_OF_VERSION_1_0_populate(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_0_check(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_0_populate_scalars(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_0_check_scalars(
    of_flow_add_t *obj, int value);

extern int of_flow_delete_OF_VERSION_1_0_populate(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_0_check(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_0_populate_scalars(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_0_check_scalars(
    of_flow_delete_t *obj, int value);

extern int of_flow_delete_strict_OF_VERSION_1_0_populate(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_0_check(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_0_populate_scalars(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_0_check_scalars(
    of_flow_delete_strict_t *obj, int value);

extern int of_flow_mod_OF_VERSION_1_0_populate(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_0_check(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_0_populate_scalars(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_0_check_scalars(
    of_flow_mod_t *obj, int value);

extern int of_flow_mod_failed_error_msg_OF_VERSION_1_0_populate(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_0_check(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_0_populate_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_0_check_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);

extern int of_flow_modify_OF_VERSION_1_0_populate(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_0_check(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_0_populate_scalars(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_0_check_scalars(
    of_flow_modify_t *obj, int value);

extern int of_flow_modify_strict_OF_VERSION_1_0_populate(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_0_check(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_0_populate_scalars(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_0_check_scalars(
    of_flow_modify_strict_t *obj, int value);

extern int of_flow_removed_OF_VERSION_1_0_populate(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_0_check(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_0_populate_scalars(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_0_check_scalars(
    of_flow_removed_t *obj, int value);

extern int of_flow_stats_reply_OF_VERSION_1_0_populate(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_0_check(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_0_check_scalars(
    of_flow_stats_reply_t *obj, int value);

extern int of_flow_stats_request_OF_VERSION_1_0_populate(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_0_check(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_0_populate_scalars(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_0_check_scalars(
    of_flow_stats_request_t *obj, int value);

extern int of_get_config_reply_OF_VERSION_1_0_populate(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_0_check(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_0_populate_scalars(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_0_check_scalars(
    of_get_config_reply_t *obj, int value);

extern int of_get_config_request_OF_VERSION_1_0_populate(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_0_check(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_0_populate_scalars(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_0_check_scalars(
    of_get_config_request_t *obj, int value);

extern int of_hello_OF_VERSION_1_0_populate(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_0_check(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_0_populate_scalars(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_0_check_scalars(
    of_hello_t *obj, int value);

extern int of_hello_failed_error_msg_OF_VERSION_1_0_populate(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_0_check(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_0_populate_scalars(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_0_check_scalars(
    of_hello_failed_error_msg_t *obj, int value);

extern int of_nicira_controller_role_reply_OF_VERSION_1_0_populate(
    of_nicira_controller_role_reply_t *obj, int value);
extern int of_nicira_controller_role_reply_OF_VERSION_1_0_check(
    of_nicira_controller_role_reply_t *obj, int value);
extern int of_nicira_controller_role_reply_OF_VERSION_1_0_populate_scalars(
    of_nicira_controller_role_reply_t *obj, int value);
extern int of_nicira_controller_role_reply_OF_VERSION_1_0_check_scalars(
    of_nicira_controller_role_reply_t *obj, int value);

extern int of_nicira_controller_role_request_OF_VERSION_1_0_populate(
    of_nicira_controller_role_request_t *obj, int value);
extern int of_nicira_controller_role_request_OF_VERSION_1_0_check(
    of_nicira_controller_role_request_t *obj, int value);
extern int of_nicira_controller_role_request_OF_VERSION_1_0_populate_scalars(
    of_nicira_controller_role_request_t *obj, int value);
extern int of_nicira_controller_role_request_OF_VERSION_1_0_check_scalars(
    of_nicira_controller_role_request_t *obj, int value);

extern int of_nicira_header_OF_VERSION_1_0_populate(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_0_check(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_0_populate_scalars(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_0_check_scalars(
    of_nicira_header_t *obj, int value);

extern int of_packet_in_OF_VERSION_1_0_populate(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_0_check(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_0_populate_scalars(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_0_check_scalars(
    of_packet_in_t *obj, int value);

extern int of_packet_out_OF_VERSION_1_0_populate(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_0_check(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_0_populate_scalars(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_0_check_scalars(
    of_packet_out_t *obj, int value);

extern int of_port_mod_OF_VERSION_1_0_populate(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_0_check(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_0_populate_scalars(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_0_check_scalars(
    of_port_mod_t *obj, int value);

extern int of_port_mod_failed_error_msg_OF_VERSION_1_0_populate(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_0_check(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_0_populate_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_0_check_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);

extern int of_port_stats_reply_OF_VERSION_1_0_populate(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_0_check(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_0_check_scalars(
    of_port_stats_reply_t *obj, int value);

extern int of_port_stats_request_OF_VERSION_1_0_populate(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_0_check(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_0_populate_scalars(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_0_check_scalars(
    of_port_stats_request_t *obj, int value);

extern int of_port_status_OF_VERSION_1_0_populate(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_0_check(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_0_populate_scalars(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_0_check_scalars(
    of_port_status_t *obj, int value);

extern int of_queue_get_config_reply_OF_VERSION_1_0_populate(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_0_check(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_0_populate_scalars(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_0_check_scalars(
    of_queue_get_config_reply_t *obj, int value);

extern int of_queue_get_config_request_OF_VERSION_1_0_populate(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_0_check(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_0_populate_scalars(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_0_check_scalars(
    of_queue_get_config_request_t *obj, int value);

extern int of_queue_op_failed_error_msg_OF_VERSION_1_0_populate(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_0_check(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_0_populate_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_0_check_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);

extern int of_queue_stats_reply_OF_VERSION_1_0_populate(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_0_check(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_0_check_scalars(
    of_queue_stats_reply_t *obj, int value);

extern int of_queue_stats_request_OF_VERSION_1_0_populate(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_0_check(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_0_populate_scalars(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_0_check_scalars(
    of_queue_stats_request_t *obj, int value);

extern int of_set_config_OF_VERSION_1_0_populate(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_0_check(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_0_populate_scalars(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_0_check_scalars(
    of_set_config_t *obj, int value);

extern int of_stats_reply_OF_VERSION_1_0_populate(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_0_check(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_0_check_scalars(
    of_stats_reply_t *obj, int value);

extern int of_stats_request_OF_VERSION_1_0_populate(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_0_check(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_0_populate_scalars(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_0_check_scalars(
    of_stats_request_t *obj, int value);

extern int of_table_mod_OF_VERSION_1_0_populate(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_0_check(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_0_populate_scalars(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_0_check_scalars(
    of_table_mod_t *obj, int value);

extern int of_table_stats_reply_OF_VERSION_1_0_populate(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_0_check(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_0_populate_scalars(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_0_check_scalars(
    of_table_stats_reply_t *obj, int value);

extern int of_table_stats_request_OF_VERSION_1_0_populate(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_0_check(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_0_populate_scalars(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_0_check_scalars(
    of_table_stats_request_t *obj, int value);

extern int of_action_bsn_OF_VERSION_1_0_populate(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_0_check(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_0_populate_scalars(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_0_check_scalars(
    of_action_bsn_t *obj, int value);

extern int of_action_bsn_mirror_OF_VERSION_1_0_populate(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_0_check(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_0_populate_scalars(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_0_check_scalars(
    of_action_bsn_mirror_t *obj, int value);

extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_0_populate(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_0_check(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_0_populate_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_0_check_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);

extern int of_action_enqueue_OF_VERSION_1_0_populate(
    of_action_enqueue_t *obj, int value);
extern int of_action_enqueue_OF_VERSION_1_0_check(
    of_action_enqueue_t *obj, int value);
extern int of_action_enqueue_OF_VERSION_1_0_populate_scalars(
    of_action_enqueue_t *obj, int value);
extern int of_action_enqueue_OF_VERSION_1_0_check_scalars(
    of_action_enqueue_t *obj, int value);

extern int of_action_experimenter_OF_VERSION_1_0_populate(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_0_check(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_0_populate_scalars(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_0_check_scalars(
    of_action_experimenter_t *obj, int value);

extern int of_action_header_OF_VERSION_1_0_populate(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_0_check(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_0_populate_scalars(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_0_check_scalars(
    of_action_header_t *obj, int value);

extern int of_action_nicira_OF_VERSION_1_0_populate(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_0_check(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_0_populate_scalars(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_0_check_scalars(
    of_action_nicira_t *obj, int value);

extern int of_action_nicira_dec_ttl_OF_VERSION_1_0_populate(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_0_check(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_0_populate_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_0_check_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);

extern int of_action_output_OF_VERSION_1_0_populate(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_0_check(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_0_populate_scalars(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_0_check_scalars(
    of_action_output_t *obj, int value);

extern int of_action_set_dl_dst_OF_VERSION_1_0_populate(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_0_check(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_0_populate_scalars(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_0_check_scalars(
    of_action_set_dl_dst_t *obj, int value);

extern int of_action_set_dl_src_OF_VERSION_1_0_populate(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_0_check(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_0_populate_scalars(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_0_check_scalars(
    of_action_set_dl_src_t *obj, int value);

extern int of_action_set_nw_dst_OF_VERSION_1_0_populate(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_0_check(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_0_populate_scalars(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_0_check_scalars(
    of_action_set_nw_dst_t *obj, int value);

extern int of_action_set_nw_src_OF_VERSION_1_0_populate(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_0_check(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_0_populate_scalars(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_0_check_scalars(
    of_action_set_nw_src_t *obj, int value);

extern int of_action_set_nw_tos_OF_VERSION_1_0_populate(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_0_check(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_0_populate_scalars(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_0_check_scalars(
    of_action_set_nw_tos_t *obj, int value);

extern int of_action_set_tp_dst_OF_VERSION_1_0_populate(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_0_check(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_0_populate_scalars(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_0_check_scalars(
    of_action_set_tp_dst_t *obj, int value);

extern int of_action_set_tp_src_OF_VERSION_1_0_populate(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_0_check(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_0_populate_scalars(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_0_check_scalars(
    of_action_set_tp_src_t *obj, int value);

extern int of_action_set_vlan_pcp_OF_VERSION_1_0_populate(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_0_check(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_0_populate_scalars(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_0_check_scalars(
    of_action_set_vlan_pcp_t *obj, int value);

extern int of_action_set_vlan_vid_OF_VERSION_1_0_populate(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_0_check(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_0_populate_scalars(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_0_check_scalars(
    of_action_set_vlan_vid_t *obj, int value);

extern int of_action_strip_vlan_OF_VERSION_1_0_populate(
    of_action_strip_vlan_t *obj, int value);
extern int of_action_strip_vlan_OF_VERSION_1_0_check(
    of_action_strip_vlan_t *obj, int value);
extern int of_action_strip_vlan_OF_VERSION_1_0_populate_scalars(
    of_action_strip_vlan_t *obj, int value);
extern int of_action_strip_vlan_OF_VERSION_1_0_check_scalars(
    of_action_strip_vlan_t *obj, int value);

extern int of_bsn_interface_OF_VERSION_1_0_populate(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_0_check(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_0_populate_scalars(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_0_check_scalars(
    of_bsn_interface_t *obj, int value);

extern int of_bsn_vport_header_OF_VERSION_1_0_populate(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_0_check(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_0_populate_scalars(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_0_check_scalars(
    of_bsn_vport_header_t *obj, int value);

extern int of_bsn_vport_q_in_q_OF_VERSION_1_0_populate(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_0_check(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_0_populate_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_0_check_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);

extern int of_flow_stats_entry_OF_VERSION_1_0_populate(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_0_check(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_0_check_scalars(
    of_flow_stats_entry_t *obj, int value);

extern int of_header_OF_VERSION_1_0_populate(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_0_check(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_0_populate_scalars(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_0_check_scalars(
    of_header_t *obj, int value);

extern int of_match_v1_OF_VERSION_1_0_populate(
    of_match_v1_t *obj, int value);
extern int of_match_v1_OF_VERSION_1_0_check(
    of_match_v1_t *obj, int value);
extern int of_match_v1_OF_VERSION_1_0_populate_scalars(
    of_match_v1_t *obj, int value);
extern int of_match_v1_OF_VERSION_1_0_check_scalars(
    of_match_v1_t *obj, int value);

extern int of_packet_queue_OF_VERSION_1_0_populate(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_0_check(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_0_populate_scalars(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_0_check_scalars(
    of_packet_queue_t *obj, int value);

extern int of_port_desc_OF_VERSION_1_0_populate(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_0_check(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_0_populate_scalars(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_0_check_scalars(
    of_port_desc_t *obj, int value);

extern int of_port_stats_entry_OF_VERSION_1_0_populate(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_0_check(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_0_check_scalars(
    of_port_stats_entry_t *obj, int value);

extern int of_queue_prop_header_OF_VERSION_1_0_populate(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_0_check(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_0_populate_scalars(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_0_check_scalars(
    of_queue_prop_header_t *obj, int value);

extern int of_queue_prop_min_rate_OF_VERSION_1_0_populate(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_0_check(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_0_populate_scalars(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_0_check_scalars(
    of_queue_prop_min_rate_t *obj, int value);

extern int of_queue_stats_entry_OF_VERSION_1_0_populate(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_0_check(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_0_check_scalars(
    of_queue_stats_entry_t *obj, int value);

extern int of_table_stats_entry_OF_VERSION_1_0_populate(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_0_check(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_0_check_scalars(
    of_table_stats_entry_t *obj, int value);

extern int of_list_action_OF_VERSION_1_0_populate(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_0_check(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_0_populate_scalars(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_0_check_scalars(
    of_list_action_t *obj, int value);

extern int of_list_bsn_interface_OF_VERSION_1_0_populate(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_0_check(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_0_populate_scalars(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_0_check_scalars(
    of_list_bsn_interface_t *obj, int value);

extern int of_list_flow_stats_entry_OF_VERSION_1_0_populate(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_0_check(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_0_check_scalars(
    of_list_flow_stats_entry_t *obj, int value);

extern int of_list_packet_queue_OF_VERSION_1_0_populate(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_0_check(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_0_populate_scalars(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_0_check_scalars(
    of_list_packet_queue_t *obj, int value);

extern int of_list_port_desc_OF_VERSION_1_0_populate(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_0_check(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_0_populate_scalars(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_0_check_scalars(
    of_list_port_desc_t *obj, int value);

extern int of_list_port_stats_entry_OF_VERSION_1_0_populate(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_0_check(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_0_check_scalars(
    of_list_port_stats_entry_t *obj, int value);

extern int of_list_queue_prop_OF_VERSION_1_0_populate(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_0_check(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_0_populate_scalars(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_0_check_scalars(
    of_list_queue_prop_t *obj, int value);

extern int of_list_queue_stats_entry_OF_VERSION_1_0_populate(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_0_check(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_0_check_scalars(
    of_list_queue_stats_entry_t *obj, int value);

extern int of_list_table_stats_entry_OF_VERSION_1_0_populate(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_0_check(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_0_populate_scalars(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_0_check_scalars(
    of_list_table_stats_entry_t *obj, int value);

extern int of_aggregate_stats_reply_OF_VERSION_1_1_populate(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_1_check(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_1_check_scalars(
    of_aggregate_stats_reply_t *obj, int value);

extern int of_aggregate_stats_request_OF_VERSION_1_1_populate(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_1_check(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_1_populate_scalars(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_1_check_scalars(
    of_aggregate_stats_request_t *obj, int value);

extern int of_bad_action_error_msg_OF_VERSION_1_1_populate(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_1_check(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_1_populate_scalars(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_1_check_scalars(
    of_bad_action_error_msg_t *obj, int value);

extern int of_bad_instruction_error_msg_OF_VERSION_1_1_populate(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_1_check(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_1_populate_scalars(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_1_check_scalars(
    of_bad_instruction_error_msg_t *obj, int value);

extern int of_bad_match_error_msg_OF_VERSION_1_1_populate(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_1_check(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_1_populate_scalars(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_1_check_scalars(
    of_bad_match_error_msg_t *obj, int value);

extern int of_bad_request_error_msg_OF_VERSION_1_1_populate(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_1_check(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_1_populate_scalars(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_1_check_scalars(
    of_bad_request_error_msg_t *obj, int value);

extern int of_barrier_reply_OF_VERSION_1_1_populate(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_1_check(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_1_populate_scalars(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_1_check_scalars(
    of_barrier_reply_t *obj, int value);

extern int of_barrier_request_OF_VERSION_1_1_populate(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_1_check(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_1_populate_scalars(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_1_check_scalars(
    of_barrier_request_t *obj, int value);

extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_1_populate(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_1_check(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);

extern int of_bsn_bw_clear_data_request_OF_VERSION_1_1_populate(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_1_check(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);

extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_1_populate(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_1_check(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);

extern int of_bsn_bw_enable_get_request_OF_VERSION_1_1_populate(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_1_check(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);

extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_1_populate(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_1_check(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);

extern int of_bsn_bw_enable_set_request_OF_VERSION_1_1_populate(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_1_check(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_1_check_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);

extern int of_bsn_get_interfaces_reply_OF_VERSION_1_1_populate(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_1_check(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);

extern int of_bsn_get_interfaces_request_OF_VERSION_1_1_populate(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_1_check(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_1_check_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);

extern int of_bsn_get_mirroring_reply_OF_VERSION_1_1_populate(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_1_check(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);

extern int of_bsn_get_mirroring_request_OF_VERSION_1_1_populate(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_1_check(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_1_check_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);

extern int of_bsn_header_OF_VERSION_1_1_populate(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_1_check(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_1_populate_scalars(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_1_check_scalars(
    of_bsn_header_t *obj, int value);

extern int of_bsn_pdu_rx_reply_OF_VERSION_1_1_populate(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_1_check(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);

extern int of_bsn_pdu_rx_request_OF_VERSION_1_1_populate(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_1_check(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_1_check_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);

extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_1_populate(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_1_check(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_1_populate_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_1_check_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);

extern int of_bsn_pdu_tx_reply_OF_VERSION_1_1_populate(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_1_check(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);

extern int of_bsn_pdu_tx_request_OF_VERSION_1_1_populate(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_1_check(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_1_check_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);

extern int of_bsn_set_mirroring_OF_VERSION_1_1_populate(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_1_check(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_1_populate_scalars(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_1_check_scalars(
    of_bsn_set_mirroring_t *obj, int value);

extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1_populate(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1_check(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);

extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_1_populate(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_1_check(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_1_check_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);

extern int of_bsn_stats_reply_OF_VERSION_1_1_populate(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_1_check(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_stats_reply_t *obj, int value);

extern int of_bsn_stats_request_OF_VERSION_1_1_populate(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_1_check(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_1_check_scalars(
    of_bsn_stats_request_t *obj, int value);

extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_1_populate(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_1_check(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);

extern int of_bsn_virtual_port_create_request_OF_VERSION_1_1_populate(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_1_check(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_1_check_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);

extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_1_populate(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_1_check(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_1_populate_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_1_check_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);

extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_1_populate(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_1_check(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_1_populate_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_1_check_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);

extern int of_desc_stats_reply_OF_VERSION_1_1_populate(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_1_check(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_1_check_scalars(
    of_desc_stats_reply_t *obj, int value);

extern int of_desc_stats_request_OF_VERSION_1_1_populate(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_1_check(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_1_populate_scalars(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_1_check_scalars(
    of_desc_stats_request_t *obj, int value);

extern int of_echo_reply_OF_VERSION_1_1_populate(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_1_check(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_1_populate_scalars(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_1_check_scalars(
    of_echo_reply_t *obj, int value);

extern int of_echo_request_OF_VERSION_1_1_populate(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_1_check(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_1_populate_scalars(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_1_check_scalars(
    of_echo_request_t *obj, int value);

extern int of_error_msg_OF_VERSION_1_1_populate(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_1_check(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_1_populate_scalars(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_1_check_scalars(
    of_error_msg_t *obj, int value);

extern int of_experimenter_OF_VERSION_1_1_populate(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_1_check(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_1_populate_scalars(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_1_check_scalars(
    of_experimenter_t *obj, int value);

extern int of_experimenter_stats_reply_OF_VERSION_1_1_populate(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_1_check(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_1_check_scalars(
    of_experimenter_stats_reply_t *obj, int value);

extern int of_experimenter_stats_request_OF_VERSION_1_1_populate(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_1_check(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_1_populate_scalars(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_1_check_scalars(
    of_experimenter_stats_request_t *obj, int value);

extern int of_features_reply_OF_VERSION_1_1_populate(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_1_check(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_1_populate_scalars(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_1_check_scalars(
    of_features_reply_t *obj, int value);

extern int of_features_request_OF_VERSION_1_1_populate(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_1_check(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_1_populate_scalars(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_1_check_scalars(
    of_features_request_t *obj, int value);

extern int of_flow_add_OF_VERSION_1_1_populate(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_1_check(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_1_populate_scalars(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_1_check_scalars(
    of_flow_add_t *obj, int value);

extern int of_flow_delete_OF_VERSION_1_1_populate(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_1_check(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_1_populate_scalars(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_1_check_scalars(
    of_flow_delete_t *obj, int value);

extern int of_flow_delete_strict_OF_VERSION_1_1_populate(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_1_check(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_1_populate_scalars(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_1_check_scalars(
    of_flow_delete_strict_t *obj, int value);

extern int of_flow_mod_OF_VERSION_1_1_populate(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_1_check(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_1_populate_scalars(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_1_check_scalars(
    of_flow_mod_t *obj, int value);

extern int of_flow_mod_failed_error_msg_OF_VERSION_1_1_populate(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_1_check(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);

extern int of_flow_modify_OF_VERSION_1_1_populate(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_1_check(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_1_populate_scalars(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_1_check_scalars(
    of_flow_modify_t *obj, int value);

extern int of_flow_modify_strict_OF_VERSION_1_1_populate(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_1_check(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_1_populate_scalars(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_1_check_scalars(
    of_flow_modify_strict_t *obj, int value);

extern int of_flow_removed_OF_VERSION_1_1_populate(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_1_check(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_1_populate_scalars(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_1_check_scalars(
    of_flow_removed_t *obj, int value);

extern int of_flow_stats_reply_OF_VERSION_1_1_populate(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_1_check(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_1_check_scalars(
    of_flow_stats_reply_t *obj, int value);

extern int of_flow_stats_request_OF_VERSION_1_1_populate(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_1_check(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_1_populate_scalars(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_1_check_scalars(
    of_flow_stats_request_t *obj, int value);

extern int of_get_config_reply_OF_VERSION_1_1_populate(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_1_check(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_1_populate_scalars(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_1_check_scalars(
    of_get_config_reply_t *obj, int value);

extern int of_get_config_request_OF_VERSION_1_1_populate(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_1_check(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_1_populate_scalars(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_1_check_scalars(
    of_get_config_request_t *obj, int value);

extern int of_group_desc_stats_reply_OF_VERSION_1_1_populate(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_1_check(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_1_check_scalars(
    of_group_desc_stats_reply_t *obj, int value);

extern int of_group_desc_stats_request_OF_VERSION_1_1_populate(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_1_check(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_1_populate_scalars(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_1_check_scalars(
    of_group_desc_stats_request_t *obj, int value);

extern int of_group_mod_OF_VERSION_1_1_populate(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_1_check(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_1_populate_scalars(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_1_check_scalars(
    of_group_mod_t *obj, int value);

extern int of_group_mod_failed_error_msg_OF_VERSION_1_1_populate(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_1_check(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);

extern int of_group_stats_reply_OF_VERSION_1_1_populate(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_1_check(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_1_check_scalars(
    of_group_stats_reply_t *obj, int value);

extern int of_group_stats_request_OF_VERSION_1_1_populate(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_1_check(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_1_populate_scalars(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_1_check_scalars(
    of_group_stats_request_t *obj, int value);

extern int of_hello_OF_VERSION_1_1_populate(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_1_check(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_1_populate_scalars(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_1_check_scalars(
    of_hello_t *obj, int value);

extern int of_hello_failed_error_msg_OF_VERSION_1_1_populate(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_1_check(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_hello_failed_error_msg_t *obj, int value);

extern int of_nicira_header_OF_VERSION_1_1_populate(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_1_check(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_1_populate_scalars(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_1_check_scalars(
    of_nicira_header_t *obj, int value);

extern int of_packet_in_OF_VERSION_1_1_populate(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_1_check(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_1_populate_scalars(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_1_check_scalars(
    of_packet_in_t *obj, int value);

extern int of_packet_out_OF_VERSION_1_1_populate(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_1_check(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_1_populate_scalars(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_1_check_scalars(
    of_packet_out_t *obj, int value);

extern int of_port_mod_OF_VERSION_1_1_populate(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_1_check(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_1_populate_scalars(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_1_check_scalars(
    of_port_mod_t *obj, int value);

extern int of_port_mod_failed_error_msg_OF_VERSION_1_1_populate(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_1_check(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);

extern int of_port_stats_reply_OF_VERSION_1_1_populate(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_1_check(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_1_check_scalars(
    of_port_stats_reply_t *obj, int value);

extern int of_port_stats_request_OF_VERSION_1_1_populate(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_1_check(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_1_populate_scalars(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_1_check_scalars(
    of_port_stats_request_t *obj, int value);

extern int of_port_status_OF_VERSION_1_1_populate(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_1_check(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_1_populate_scalars(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_1_check_scalars(
    of_port_status_t *obj, int value);

extern int of_queue_get_config_reply_OF_VERSION_1_1_populate(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_1_check(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_1_populate_scalars(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_1_check_scalars(
    of_queue_get_config_reply_t *obj, int value);

extern int of_queue_get_config_request_OF_VERSION_1_1_populate(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_1_check(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_1_populate_scalars(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_1_check_scalars(
    of_queue_get_config_request_t *obj, int value);

extern int of_queue_op_failed_error_msg_OF_VERSION_1_1_populate(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_1_check(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);

extern int of_queue_stats_reply_OF_VERSION_1_1_populate(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_1_check(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_1_check_scalars(
    of_queue_stats_reply_t *obj, int value);

extern int of_queue_stats_request_OF_VERSION_1_1_populate(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_1_check(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_1_populate_scalars(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_1_check_scalars(
    of_queue_stats_request_t *obj, int value);

extern int of_set_config_OF_VERSION_1_1_populate(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_1_check(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_1_populate_scalars(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_1_check_scalars(
    of_set_config_t *obj, int value);

extern int of_stats_reply_OF_VERSION_1_1_populate(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_1_check(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_1_check_scalars(
    of_stats_reply_t *obj, int value);

extern int of_stats_request_OF_VERSION_1_1_populate(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_1_check(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_1_populate_scalars(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_1_check_scalars(
    of_stats_request_t *obj, int value);

extern int of_switch_config_failed_error_msg_OF_VERSION_1_1_populate(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_1_check(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);

extern int of_table_mod_OF_VERSION_1_1_populate(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_1_check(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_1_populate_scalars(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_1_check_scalars(
    of_table_mod_t *obj, int value);

extern int of_table_mod_failed_error_msg_OF_VERSION_1_1_populate(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_1_check(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_1_populate_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_1_check_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);

extern int of_table_stats_reply_OF_VERSION_1_1_populate(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_1_check(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_1_populate_scalars(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_1_check_scalars(
    of_table_stats_reply_t *obj, int value);

extern int of_table_stats_request_OF_VERSION_1_1_populate(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_1_check(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_1_populate_scalars(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_1_check_scalars(
    of_table_stats_request_t *obj, int value);

extern int of_action_bsn_OF_VERSION_1_1_populate(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_1_check(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_1_populate_scalars(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_1_check_scalars(
    of_action_bsn_t *obj, int value);

extern int of_action_bsn_mirror_OF_VERSION_1_1_populate(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_1_check(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_1_populate_scalars(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_1_check_scalars(
    of_action_bsn_mirror_t *obj, int value);

extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_1_populate(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_1_check(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_1_populate_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_1_check_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);

extern int of_action_copy_ttl_in_OF_VERSION_1_1_populate(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_1_check(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_1_populate_scalars(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_1_check_scalars(
    of_action_copy_ttl_in_t *obj, int value);

extern int of_action_copy_ttl_out_OF_VERSION_1_1_populate(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_1_check(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_1_populate_scalars(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_1_check_scalars(
    of_action_copy_ttl_out_t *obj, int value);

extern int of_action_dec_mpls_ttl_OF_VERSION_1_1_populate(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_1_check(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_1_populate_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_1_check_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);

extern int of_action_dec_nw_ttl_OF_VERSION_1_1_populate(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_1_check(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_1_populate_scalars(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_1_check_scalars(
    of_action_dec_nw_ttl_t *obj, int value);

extern int of_action_experimenter_OF_VERSION_1_1_populate(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_1_check(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_1_populate_scalars(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_1_check_scalars(
    of_action_experimenter_t *obj, int value);

extern int of_action_group_OF_VERSION_1_1_populate(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_1_check(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_1_populate_scalars(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_1_check_scalars(
    of_action_group_t *obj, int value);

extern int of_action_header_OF_VERSION_1_1_populate(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_1_check(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_1_populate_scalars(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_1_check_scalars(
    of_action_header_t *obj, int value);

extern int of_action_nicira_OF_VERSION_1_1_populate(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_1_check(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_1_populate_scalars(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_1_check_scalars(
    of_action_nicira_t *obj, int value);

extern int of_action_nicira_dec_ttl_OF_VERSION_1_1_populate(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_1_check(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_1_populate_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_1_check_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);

extern int of_action_output_OF_VERSION_1_1_populate(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_1_check(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_1_populate_scalars(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_1_check_scalars(
    of_action_output_t *obj, int value);

extern int of_action_pop_mpls_OF_VERSION_1_1_populate(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_1_check(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_1_populate_scalars(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_1_check_scalars(
    of_action_pop_mpls_t *obj, int value);

extern int of_action_pop_vlan_OF_VERSION_1_1_populate(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_1_check(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_1_populate_scalars(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_1_check_scalars(
    of_action_pop_vlan_t *obj, int value);

extern int of_action_push_mpls_OF_VERSION_1_1_populate(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_1_check(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_1_populate_scalars(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_1_check_scalars(
    of_action_push_mpls_t *obj, int value);

extern int of_action_push_vlan_OF_VERSION_1_1_populate(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_1_check(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_1_populate_scalars(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_1_check_scalars(
    of_action_push_vlan_t *obj, int value);

extern int of_action_set_dl_dst_OF_VERSION_1_1_populate(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_1_check(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_1_populate_scalars(
    of_action_set_dl_dst_t *obj, int value);
extern int of_action_set_dl_dst_OF_VERSION_1_1_check_scalars(
    of_action_set_dl_dst_t *obj, int value);

extern int of_action_set_dl_src_OF_VERSION_1_1_populate(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_1_check(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_1_populate_scalars(
    of_action_set_dl_src_t *obj, int value);
extern int of_action_set_dl_src_OF_VERSION_1_1_check_scalars(
    of_action_set_dl_src_t *obj, int value);

extern int of_action_set_mpls_label_OF_VERSION_1_1_populate(
    of_action_set_mpls_label_t *obj, int value);
extern int of_action_set_mpls_label_OF_VERSION_1_1_check(
    of_action_set_mpls_label_t *obj, int value);
extern int of_action_set_mpls_label_OF_VERSION_1_1_populate_scalars(
    of_action_set_mpls_label_t *obj, int value);
extern int of_action_set_mpls_label_OF_VERSION_1_1_check_scalars(
    of_action_set_mpls_label_t *obj, int value);

extern int of_action_set_mpls_tc_OF_VERSION_1_1_populate(
    of_action_set_mpls_tc_t *obj, int value);
extern int of_action_set_mpls_tc_OF_VERSION_1_1_check(
    of_action_set_mpls_tc_t *obj, int value);
extern int of_action_set_mpls_tc_OF_VERSION_1_1_populate_scalars(
    of_action_set_mpls_tc_t *obj, int value);
extern int of_action_set_mpls_tc_OF_VERSION_1_1_check_scalars(
    of_action_set_mpls_tc_t *obj, int value);

extern int of_action_set_mpls_ttl_OF_VERSION_1_1_populate(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_1_check(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_1_populate_scalars(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_1_check_scalars(
    of_action_set_mpls_ttl_t *obj, int value);

extern int of_action_set_nw_dst_OF_VERSION_1_1_populate(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_1_check(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_1_populate_scalars(
    of_action_set_nw_dst_t *obj, int value);
extern int of_action_set_nw_dst_OF_VERSION_1_1_check_scalars(
    of_action_set_nw_dst_t *obj, int value);

extern int of_action_set_nw_ecn_OF_VERSION_1_1_populate(
    of_action_set_nw_ecn_t *obj, int value);
extern int of_action_set_nw_ecn_OF_VERSION_1_1_check(
    of_action_set_nw_ecn_t *obj, int value);
extern int of_action_set_nw_ecn_OF_VERSION_1_1_populate_scalars(
    of_action_set_nw_ecn_t *obj, int value);
extern int of_action_set_nw_ecn_OF_VERSION_1_1_check_scalars(
    of_action_set_nw_ecn_t *obj, int value);

extern int of_action_set_nw_src_OF_VERSION_1_1_populate(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_1_check(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_1_populate_scalars(
    of_action_set_nw_src_t *obj, int value);
extern int of_action_set_nw_src_OF_VERSION_1_1_check_scalars(
    of_action_set_nw_src_t *obj, int value);

extern int of_action_set_nw_tos_OF_VERSION_1_1_populate(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_1_check(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_1_populate_scalars(
    of_action_set_nw_tos_t *obj, int value);
extern int of_action_set_nw_tos_OF_VERSION_1_1_check_scalars(
    of_action_set_nw_tos_t *obj, int value);

extern int of_action_set_nw_ttl_OF_VERSION_1_1_populate(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_1_check(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_1_populate_scalars(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_1_check_scalars(
    of_action_set_nw_ttl_t *obj, int value);

extern int of_action_set_queue_OF_VERSION_1_1_populate(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_1_check(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_1_populate_scalars(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_1_check_scalars(
    of_action_set_queue_t *obj, int value);

extern int of_action_set_tp_dst_OF_VERSION_1_1_populate(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_1_check(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_1_populate_scalars(
    of_action_set_tp_dst_t *obj, int value);
extern int of_action_set_tp_dst_OF_VERSION_1_1_check_scalars(
    of_action_set_tp_dst_t *obj, int value);

extern int of_action_set_tp_src_OF_VERSION_1_1_populate(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_1_check(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_1_populate_scalars(
    of_action_set_tp_src_t *obj, int value);
extern int of_action_set_tp_src_OF_VERSION_1_1_check_scalars(
    of_action_set_tp_src_t *obj, int value);

extern int of_action_set_vlan_pcp_OF_VERSION_1_1_populate(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_1_check(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_1_populate_scalars(
    of_action_set_vlan_pcp_t *obj, int value);
extern int of_action_set_vlan_pcp_OF_VERSION_1_1_check_scalars(
    of_action_set_vlan_pcp_t *obj, int value);

extern int of_action_set_vlan_vid_OF_VERSION_1_1_populate(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_1_check(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_1_populate_scalars(
    of_action_set_vlan_vid_t *obj, int value);
extern int of_action_set_vlan_vid_OF_VERSION_1_1_check_scalars(
    of_action_set_vlan_vid_t *obj, int value);

extern int of_bsn_interface_OF_VERSION_1_1_populate(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_1_check(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_1_populate_scalars(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_1_check_scalars(
    of_bsn_interface_t *obj, int value);

extern int of_bsn_vport_header_OF_VERSION_1_1_populate(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_1_check(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_1_populate_scalars(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_1_check_scalars(
    of_bsn_vport_header_t *obj, int value);

extern int of_bsn_vport_q_in_q_OF_VERSION_1_1_populate(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_1_check(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_1_populate_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_1_check_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);

extern int of_bucket_OF_VERSION_1_1_populate(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_1_check(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_1_populate_scalars(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_1_check_scalars(
    of_bucket_t *obj, int value);

extern int of_bucket_counter_OF_VERSION_1_1_populate(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_1_check(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_1_populate_scalars(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_1_check_scalars(
    of_bucket_counter_t *obj, int value);

extern int of_flow_stats_entry_OF_VERSION_1_1_populate(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_1_check(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_1_check_scalars(
    of_flow_stats_entry_t *obj, int value);

extern int of_group_desc_stats_entry_OF_VERSION_1_1_populate(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_1_check(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_1_check_scalars(
    of_group_desc_stats_entry_t *obj, int value);

extern int of_group_stats_entry_OF_VERSION_1_1_populate(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_1_check(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_1_check_scalars(
    of_group_stats_entry_t *obj, int value);

extern int of_header_OF_VERSION_1_1_populate(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_1_check(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_1_populate_scalars(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_1_check_scalars(
    of_header_t *obj, int value);

extern int of_instruction_apply_actions_OF_VERSION_1_1_populate(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_1_check(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_1_populate_scalars(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_1_check_scalars(
    of_instruction_apply_actions_t *obj, int value);

extern int of_instruction_clear_actions_OF_VERSION_1_1_populate(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_1_check(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_1_populate_scalars(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_1_check_scalars(
    of_instruction_clear_actions_t *obj, int value);

extern int of_instruction_experimenter_OF_VERSION_1_1_populate(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_1_check(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_1_populate_scalars(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_1_check_scalars(
    of_instruction_experimenter_t *obj, int value);

extern int of_instruction_goto_table_OF_VERSION_1_1_populate(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_1_check(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_1_populate_scalars(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_1_check_scalars(
    of_instruction_goto_table_t *obj, int value);

extern int of_instruction_header_OF_VERSION_1_1_populate(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_1_check(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_1_populate_scalars(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_1_check_scalars(
    of_instruction_header_t *obj, int value);

extern int of_instruction_write_actions_OF_VERSION_1_1_populate(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_1_check(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_1_populate_scalars(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_1_check_scalars(
    of_instruction_write_actions_t *obj, int value);

extern int of_instruction_write_metadata_OF_VERSION_1_1_populate(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_1_check(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_1_populate_scalars(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_1_check_scalars(
    of_instruction_write_metadata_t *obj, int value);

extern int of_match_v2_OF_VERSION_1_1_populate(
    of_match_v2_t *obj, int value);
extern int of_match_v2_OF_VERSION_1_1_check(
    of_match_v2_t *obj, int value);
extern int of_match_v2_OF_VERSION_1_1_populate_scalars(
    of_match_v2_t *obj, int value);
extern int of_match_v2_OF_VERSION_1_1_check_scalars(
    of_match_v2_t *obj, int value);

extern int of_packet_queue_OF_VERSION_1_1_populate(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_1_check(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_1_populate_scalars(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_1_check_scalars(
    of_packet_queue_t *obj, int value);

extern int of_port_desc_OF_VERSION_1_1_populate(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_1_check(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_1_populate_scalars(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_1_check_scalars(
    of_port_desc_t *obj, int value);

extern int of_port_stats_entry_OF_VERSION_1_1_populate(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_1_check(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_1_check_scalars(
    of_port_stats_entry_t *obj, int value);

extern int of_queue_prop_header_OF_VERSION_1_1_populate(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_1_check(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_1_populate_scalars(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_1_check_scalars(
    of_queue_prop_header_t *obj, int value);

extern int of_queue_prop_min_rate_OF_VERSION_1_1_populate(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_1_check(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_1_populate_scalars(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_1_check_scalars(
    of_queue_prop_min_rate_t *obj, int value);

extern int of_queue_stats_entry_OF_VERSION_1_1_populate(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_1_check(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_1_check_scalars(
    of_queue_stats_entry_t *obj, int value);

extern int of_table_stats_entry_OF_VERSION_1_1_populate(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_1_check(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_1_check_scalars(
    of_table_stats_entry_t *obj, int value);

extern int of_list_action_OF_VERSION_1_1_populate(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_1_check(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_1_populate_scalars(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_1_check_scalars(
    of_list_action_t *obj, int value);

extern int of_list_bsn_interface_OF_VERSION_1_1_populate(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_1_check(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_1_populate_scalars(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_1_check_scalars(
    of_list_bsn_interface_t *obj, int value);

extern int of_list_bucket_OF_VERSION_1_1_populate(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_1_check(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_1_populate_scalars(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_1_check_scalars(
    of_list_bucket_t *obj, int value);

extern int of_list_bucket_counter_OF_VERSION_1_1_populate(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_1_check(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_1_populate_scalars(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_1_check_scalars(
    of_list_bucket_counter_t *obj, int value);

extern int of_list_flow_stats_entry_OF_VERSION_1_1_populate(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_1_check(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_flow_stats_entry_t *obj, int value);

extern int of_list_group_desc_stats_entry_OF_VERSION_1_1_populate(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_1_check(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);

extern int of_list_group_stats_entry_OF_VERSION_1_1_populate(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_1_check(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_group_stats_entry_t *obj, int value);

extern int of_list_instruction_OF_VERSION_1_1_populate(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_1_check(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_1_populate_scalars(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_1_check_scalars(
    of_list_instruction_t *obj, int value);

extern int of_list_packet_queue_OF_VERSION_1_1_populate(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_1_check(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_1_populate_scalars(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_1_check_scalars(
    of_list_packet_queue_t *obj, int value);

extern int of_list_port_desc_OF_VERSION_1_1_populate(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_1_check(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_1_populate_scalars(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_1_check_scalars(
    of_list_port_desc_t *obj, int value);

extern int of_list_port_stats_entry_OF_VERSION_1_1_populate(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_1_check(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_port_stats_entry_t *obj, int value);

extern int of_list_queue_prop_OF_VERSION_1_1_populate(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_1_check(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_1_populate_scalars(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_1_check_scalars(
    of_list_queue_prop_t *obj, int value);

extern int of_list_queue_stats_entry_OF_VERSION_1_1_populate(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_1_check(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_queue_stats_entry_t *obj, int value);

extern int of_list_table_stats_entry_OF_VERSION_1_1_populate(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_1_check(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_1_populate_scalars(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_1_check_scalars(
    of_list_table_stats_entry_t *obj, int value);

extern int of_aggregate_stats_reply_OF_VERSION_1_2_populate(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_2_check(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_2_check_scalars(
    of_aggregate_stats_reply_t *obj, int value);

extern int of_aggregate_stats_request_OF_VERSION_1_2_populate(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_2_check(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_2_populate_scalars(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_2_check_scalars(
    of_aggregate_stats_request_t *obj, int value);

extern int of_bad_action_error_msg_OF_VERSION_1_2_populate(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_2_check(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_2_populate_scalars(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_2_check_scalars(
    of_bad_action_error_msg_t *obj, int value);

extern int of_bad_instruction_error_msg_OF_VERSION_1_2_populate(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_2_check(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_2_populate_scalars(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_2_check_scalars(
    of_bad_instruction_error_msg_t *obj, int value);

extern int of_bad_match_error_msg_OF_VERSION_1_2_populate(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_2_check(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_2_populate_scalars(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_2_check_scalars(
    of_bad_match_error_msg_t *obj, int value);

extern int of_bad_request_error_msg_OF_VERSION_1_2_populate(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_2_check(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_2_populate_scalars(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_2_check_scalars(
    of_bad_request_error_msg_t *obj, int value);

extern int of_barrier_reply_OF_VERSION_1_2_populate(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_2_check(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_2_populate_scalars(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_2_check_scalars(
    of_barrier_reply_t *obj, int value);

extern int of_barrier_request_OF_VERSION_1_2_populate(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_2_check(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_2_populate_scalars(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_2_check_scalars(
    of_barrier_request_t *obj, int value);

extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_2_populate(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_2_check(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);

extern int of_bsn_bw_clear_data_request_OF_VERSION_1_2_populate(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_2_check(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);

extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_2_populate(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_2_check(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);

extern int of_bsn_bw_enable_get_request_OF_VERSION_1_2_populate(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_2_check(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);

extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_2_populate(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_2_check(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);

extern int of_bsn_bw_enable_set_request_OF_VERSION_1_2_populate(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_2_check(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_2_check_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);

extern int of_bsn_get_interfaces_reply_OF_VERSION_1_2_populate(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_2_check(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);

extern int of_bsn_get_interfaces_request_OF_VERSION_1_2_populate(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_2_check(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_2_check_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);

extern int of_bsn_get_mirroring_reply_OF_VERSION_1_2_populate(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_2_check(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);

extern int of_bsn_get_mirroring_request_OF_VERSION_1_2_populate(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_2_check(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_2_check_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);

extern int of_bsn_header_OF_VERSION_1_2_populate(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_2_check(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_2_populate_scalars(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_2_check_scalars(
    of_bsn_header_t *obj, int value);

extern int of_bsn_pdu_rx_reply_OF_VERSION_1_2_populate(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_2_check(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);

extern int of_bsn_pdu_rx_request_OF_VERSION_1_2_populate(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_2_check(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_2_check_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);

extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_2_populate(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_2_check(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_2_populate_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_2_check_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);

extern int of_bsn_pdu_tx_reply_OF_VERSION_1_2_populate(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_2_check(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);

extern int of_bsn_pdu_tx_request_OF_VERSION_1_2_populate(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_2_check(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_2_check_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);

extern int of_bsn_set_mirroring_OF_VERSION_1_2_populate(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_2_check(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_2_populate_scalars(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_2_check_scalars(
    of_bsn_set_mirroring_t *obj, int value);

extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2_populate(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2_check(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);

extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_2_populate(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_2_check(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_2_check_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);

extern int of_bsn_stats_reply_OF_VERSION_1_2_populate(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_2_check(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_stats_reply_t *obj, int value);

extern int of_bsn_stats_request_OF_VERSION_1_2_populate(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_2_check(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_2_check_scalars(
    of_bsn_stats_request_t *obj, int value);

extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_2_populate(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_2_check(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);

extern int of_bsn_virtual_port_create_request_OF_VERSION_1_2_populate(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_2_check(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_2_check_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);

extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_2_populate(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_2_check(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_2_populate_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_2_check_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);

extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_2_populate(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_2_check(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_2_populate_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_2_check_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);

extern int of_desc_stats_reply_OF_VERSION_1_2_populate(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_2_check(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_2_check_scalars(
    of_desc_stats_reply_t *obj, int value);

extern int of_desc_stats_request_OF_VERSION_1_2_populate(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_2_check(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_2_populate_scalars(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_2_check_scalars(
    of_desc_stats_request_t *obj, int value);

extern int of_echo_reply_OF_VERSION_1_2_populate(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_2_check(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_2_populate_scalars(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_2_check_scalars(
    of_echo_reply_t *obj, int value);

extern int of_echo_request_OF_VERSION_1_2_populate(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_2_check(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_2_populate_scalars(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_2_check_scalars(
    of_echo_request_t *obj, int value);

extern int of_error_msg_OF_VERSION_1_2_populate(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_2_check(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_2_populate_scalars(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_2_check_scalars(
    of_error_msg_t *obj, int value);

extern int of_experimenter_OF_VERSION_1_2_populate(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_2_check(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_2_populate_scalars(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_2_check_scalars(
    of_experimenter_t *obj, int value);

extern int of_experimenter_error_msg_OF_VERSION_1_2_populate(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_2_check(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_2_populate_scalars(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_2_check_scalars(
    of_experimenter_error_msg_t *obj, int value);

extern int of_experimenter_stats_reply_OF_VERSION_1_2_populate(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_2_check(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_2_check_scalars(
    of_experimenter_stats_reply_t *obj, int value);

extern int of_experimenter_stats_request_OF_VERSION_1_2_populate(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_2_check(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_2_populate_scalars(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_2_check_scalars(
    of_experimenter_stats_request_t *obj, int value);

extern int of_features_reply_OF_VERSION_1_2_populate(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_2_check(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_2_populate_scalars(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_2_check_scalars(
    of_features_reply_t *obj, int value);

extern int of_features_request_OF_VERSION_1_2_populate(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_2_check(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_2_populate_scalars(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_2_check_scalars(
    of_features_request_t *obj, int value);

extern int of_flow_add_OF_VERSION_1_2_populate(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_2_check(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_2_populate_scalars(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_2_check_scalars(
    of_flow_add_t *obj, int value);

extern int of_flow_delete_OF_VERSION_1_2_populate(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_2_check(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_2_populate_scalars(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_2_check_scalars(
    of_flow_delete_t *obj, int value);

extern int of_flow_delete_strict_OF_VERSION_1_2_populate(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_2_check(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_2_populate_scalars(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_2_check_scalars(
    of_flow_delete_strict_t *obj, int value);

extern int of_flow_mod_OF_VERSION_1_2_populate(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_2_check(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_2_populate_scalars(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_2_check_scalars(
    of_flow_mod_t *obj, int value);

extern int of_flow_mod_failed_error_msg_OF_VERSION_1_2_populate(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_2_check(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);

extern int of_flow_modify_OF_VERSION_1_2_populate(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_2_check(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_2_populate_scalars(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_2_check_scalars(
    of_flow_modify_t *obj, int value);

extern int of_flow_modify_strict_OF_VERSION_1_2_populate(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_2_check(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_2_populate_scalars(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_2_check_scalars(
    of_flow_modify_strict_t *obj, int value);

extern int of_flow_removed_OF_VERSION_1_2_populate(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_2_check(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_2_populate_scalars(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_2_check_scalars(
    of_flow_removed_t *obj, int value);

extern int of_flow_stats_reply_OF_VERSION_1_2_populate(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_2_check(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_2_check_scalars(
    of_flow_stats_reply_t *obj, int value);

extern int of_flow_stats_request_OF_VERSION_1_2_populate(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_2_check(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_2_populate_scalars(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_2_check_scalars(
    of_flow_stats_request_t *obj, int value);

extern int of_get_config_reply_OF_VERSION_1_2_populate(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_2_check(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_2_populate_scalars(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_2_check_scalars(
    of_get_config_reply_t *obj, int value);

extern int of_get_config_request_OF_VERSION_1_2_populate(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_2_check(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_2_populate_scalars(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_2_check_scalars(
    of_get_config_request_t *obj, int value);

extern int of_group_desc_stats_reply_OF_VERSION_1_2_populate(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_2_check(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_2_check_scalars(
    of_group_desc_stats_reply_t *obj, int value);

extern int of_group_desc_stats_request_OF_VERSION_1_2_populate(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_2_check(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_2_populate_scalars(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_2_check_scalars(
    of_group_desc_stats_request_t *obj, int value);

extern int of_group_features_stats_reply_OF_VERSION_1_2_populate(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_2_check(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_2_check_scalars(
    of_group_features_stats_reply_t *obj, int value);

extern int of_group_features_stats_request_OF_VERSION_1_2_populate(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_2_check(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_2_populate_scalars(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_2_check_scalars(
    of_group_features_stats_request_t *obj, int value);

extern int of_group_mod_OF_VERSION_1_2_populate(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_2_check(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_2_populate_scalars(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_2_check_scalars(
    of_group_mod_t *obj, int value);

extern int of_group_mod_failed_error_msg_OF_VERSION_1_2_populate(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_2_check(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);

extern int of_group_stats_reply_OF_VERSION_1_2_populate(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_2_check(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_2_check_scalars(
    of_group_stats_reply_t *obj, int value);

extern int of_group_stats_request_OF_VERSION_1_2_populate(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_2_check(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_2_populate_scalars(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_2_check_scalars(
    of_group_stats_request_t *obj, int value);

extern int of_hello_OF_VERSION_1_2_populate(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_2_check(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_2_populate_scalars(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_2_check_scalars(
    of_hello_t *obj, int value);

extern int of_hello_failed_error_msg_OF_VERSION_1_2_populate(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_2_check(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_hello_failed_error_msg_t *obj, int value);

extern int of_nicira_header_OF_VERSION_1_2_populate(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_2_check(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_2_populate_scalars(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_2_check_scalars(
    of_nicira_header_t *obj, int value);

extern int of_packet_in_OF_VERSION_1_2_populate(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_2_check(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_2_populate_scalars(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_2_check_scalars(
    of_packet_in_t *obj, int value);

extern int of_packet_out_OF_VERSION_1_2_populate(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_2_check(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_2_populate_scalars(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_2_check_scalars(
    of_packet_out_t *obj, int value);

extern int of_port_mod_OF_VERSION_1_2_populate(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_2_check(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_2_populate_scalars(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_2_check_scalars(
    of_port_mod_t *obj, int value);

extern int of_port_mod_failed_error_msg_OF_VERSION_1_2_populate(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_2_check(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);

extern int of_port_stats_reply_OF_VERSION_1_2_populate(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_2_check(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_2_check_scalars(
    of_port_stats_reply_t *obj, int value);

extern int of_port_stats_request_OF_VERSION_1_2_populate(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_2_check(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_2_populate_scalars(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_2_check_scalars(
    of_port_stats_request_t *obj, int value);

extern int of_port_status_OF_VERSION_1_2_populate(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_2_check(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_2_populate_scalars(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_2_check_scalars(
    of_port_status_t *obj, int value);

extern int of_queue_get_config_reply_OF_VERSION_1_2_populate(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_2_check(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_2_populate_scalars(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_2_check_scalars(
    of_queue_get_config_reply_t *obj, int value);

extern int of_queue_get_config_request_OF_VERSION_1_2_populate(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_2_check(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_2_populate_scalars(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_2_check_scalars(
    of_queue_get_config_request_t *obj, int value);

extern int of_queue_op_failed_error_msg_OF_VERSION_1_2_populate(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_2_check(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);

extern int of_queue_stats_reply_OF_VERSION_1_2_populate(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_2_check(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_2_check_scalars(
    of_queue_stats_reply_t *obj, int value);

extern int of_queue_stats_request_OF_VERSION_1_2_populate(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_2_check(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_2_populate_scalars(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_2_check_scalars(
    of_queue_stats_request_t *obj, int value);

extern int of_role_reply_OF_VERSION_1_2_populate(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_2_check(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_2_populate_scalars(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_2_check_scalars(
    of_role_reply_t *obj, int value);

extern int of_role_request_OF_VERSION_1_2_populate(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_2_check(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_2_populate_scalars(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_2_check_scalars(
    of_role_request_t *obj, int value);

extern int of_role_request_failed_error_msg_OF_VERSION_1_2_populate(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_2_check(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_role_request_failed_error_msg_t *obj, int value);

extern int of_set_config_OF_VERSION_1_2_populate(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_2_check(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_2_populate_scalars(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_2_check_scalars(
    of_set_config_t *obj, int value);

extern int of_stats_reply_OF_VERSION_1_2_populate(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_2_check(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_2_check_scalars(
    of_stats_reply_t *obj, int value);

extern int of_stats_request_OF_VERSION_1_2_populate(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_2_check(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_2_populate_scalars(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_2_check_scalars(
    of_stats_request_t *obj, int value);

extern int of_switch_config_failed_error_msg_OF_VERSION_1_2_populate(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_2_check(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);

extern int of_table_mod_OF_VERSION_1_2_populate(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_2_check(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_2_populate_scalars(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_2_check_scalars(
    of_table_mod_t *obj, int value);

extern int of_table_mod_failed_error_msg_OF_VERSION_1_2_populate(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_2_check(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_2_populate_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_2_check_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);

extern int of_table_stats_reply_OF_VERSION_1_2_populate(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_2_check(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_2_populate_scalars(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_2_check_scalars(
    of_table_stats_reply_t *obj, int value);

extern int of_table_stats_request_OF_VERSION_1_2_populate(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_2_check(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_2_populate_scalars(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_2_check_scalars(
    of_table_stats_request_t *obj, int value);

extern int of_action_bsn_OF_VERSION_1_2_populate(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_2_check(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_2_populate_scalars(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_2_check_scalars(
    of_action_bsn_t *obj, int value);

extern int of_action_bsn_mirror_OF_VERSION_1_2_populate(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_2_check(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_2_populate_scalars(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_2_check_scalars(
    of_action_bsn_mirror_t *obj, int value);

extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_2_populate(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_2_check(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_2_populate_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_2_check_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);

extern int of_action_copy_ttl_in_OF_VERSION_1_2_populate(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_2_check(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_2_populate_scalars(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_2_check_scalars(
    of_action_copy_ttl_in_t *obj, int value);

extern int of_action_copy_ttl_out_OF_VERSION_1_2_populate(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_2_check(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_2_populate_scalars(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_2_check_scalars(
    of_action_copy_ttl_out_t *obj, int value);

extern int of_action_dec_mpls_ttl_OF_VERSION_1_2_populate(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_2_check(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_2_populate_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_2_check_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);

extern int of_action_dec_nw_ttl_OF_VERSION_1_2_populate(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_2_check(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_2_populate_scalars(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_2_check_scalars(
    of_action_dec_nw_ttl_t *obj, int value);

extern int of_action_experimenter_OF_VERSION_1_2_populate(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_2_check(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_2_populate_scalars(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_2_check_scalars(
    of_action_experimenter_t *obj, int value);

extern int of_action_group_OF_VERSION_1_2_populate(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_2_check(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_2_populate_scalars(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_2_check_scalars(
    of_action_group_t *obj, int value);

extern int of_action_header_OF_VERSION_1_2_populate(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_2_check(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_2_populate_scalars(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_2_check_scalars(
    of_action_header_t *obj, int value);

extern int of_action_nicira_OF_VERSION_1_2_populate(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_2_check(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_2_populate_scalars(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_2_check_scalars(
    of_action_nicira_t *obj, int value);

extern int of_action_nicira_dec_ttl_OF_VERSION_1_2_populate(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_2_check(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_2_populate_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_2_check_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);

extern int of_action_output_OF_VERSION_1_2_populate(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_2_check(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_2_populate_scalars(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_2_check_scalars(
    of_action_output_t *obj, int value);

extern int of_action_pop_mpls_OF_VERSION_1_2_populate(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_2_check(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_2_populate_scalars(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_2_check_scalars(
    of_action_pop_mpls_t *obj, int value);

extern int of_action_pop_vlan_OF_VERSION_1_2_populate(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_2_check(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_2_populate_scalars(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_2_check_scalars(
    of_action_pop_vlan_t *obj, int value);

extern int of_action_push_mpls_OF_VERSION_1_2_populate(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_2_check(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_2_populate_scalars(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_2_check_scalars(
    of_action_push_mpls_t *obj, int value);

extern int of_action_push_vlan_OF_VERSION_1_2_populate(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_2_check(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_2_populate_scalars(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_2_check_scalars(
    of_action_push_vlan_t *obj, int value);

extern int of_action_set_field_OF_VERSION_1_2_populate(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_2_check(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_2_populate_scalars(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_2_check_scalars(
    of_action_set_field_t *obj, int value);

extern int of_action_set_mpls_ttl_OF_VERSION_1_2_populate(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_2_check(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_2_populate_scalars(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_2_check_scalars(
    of_action_set_mpls_ttl_t *obj, int value);

extern int of_action_set_nw_ttl_OF_VERSION_1_2_populate(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_2_check(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_2_populate_scalars(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_2_check_scalars(
    of_action_set_nw_ttl_t *obj, int value);

extern int of_action_set_queue_OF_VERSION_1_2_populate(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_2_check(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_2_populate_scalars(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_2_check_scalars(
    of_action_set_queue_t *obj, int value);

extern int of_bsn_interface_OF_VERSION_1_2_populate(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_2_check(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_2_populate_scalars(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_2_check_scalars(
    of_bsn_interface_t *obj, int value);

extern int of_bsn_vport_header_OF_VERSION_1_2_populate(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_2_check(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_2_populate_scalars(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_2_check_scalars(
    of_bsn_vport_header_t *obj, int value);

extern int of_bsn_vport_q_in_q_OF_VERSION_1_2_populate(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_2_check(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_2_populate_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_2_check_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);

extern int of_bucket_OF_VERSION_1_2_populate(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_2_check(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_2_populate_scalars(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_2_check_scalars(
    of_bucket_t *obj, int value);

extern int of_bucket_counter_OF_VERSION_1_2_populate(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_2_check(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_2_populate_scalars(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_2_check_scalars(
    of_bucket_counter_t *obj, int value);

extern int of_flow_stats_entry_OF_VERSION_1_2_populate(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_2_check(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_2_check_scalars(
    of_flow_stats_entry_t *obj, int value);

extern int of_group_desc_stats_entry_OF_VERSION_1_2_populate(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_2_check(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_2_check_scalars(
    of_group_desc_stats_entry_t *obj, int value);

extern int of_group_stats_entry_OF_VERSION_1_2_populate(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_2_check(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_2_check_scalars(
    of_group_stats_entry_t *obj, int value);

extern int of_header_OF_VERSION_1_2_populate(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_2_check(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_2_populate_scalars(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_2_check_scalars(
    of_header_t *obj, int value);

extern int of_instruction_apply_actions_OF_VERSION_1_2_populate(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_2_check(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_2_populate_scalars(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_2_check_scalars(
    of_instruction_apply_actions_t *obj, int value);

extern int of_instruction_clear_actions_OF_VERSION_1_2_populate(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_2_check(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_2_populate_scalars(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_2_check_scalars(
    of_instruction_clear_actions_t *obj, int value);

extern int of_instruction_experimenter_OF_VERSION_1_2_populate(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_2_check(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_2_populate_scalars(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_2_check_scalars(
    of_instruction_experimenter_t *obj, int value);

extern int of_instruction_goto_table_OF_VERSION_1_2_populate(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_2_check(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_2_populate_scalars(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_2_check_scalars(
    of_instruction_goto_table_t *obj, int value);

extern int of_instruction_header_OF_VERSION_1_2_populate(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_2_check(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_2_populate_scalars(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_2_check_scalars(
    of_instruction_header_t *obj, int value);

extern int of_instruction_write_actions_OF_VERSION_1_2_populate(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_2_check(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_2_populate_scalars(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_2_check_scalars(
    of_instruction_write_actions_t *obj, int value);

extern int of_instruction_write_metadata_OF_VERSION_1_2_populate(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_2_check(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_2_populate_scalars(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_2_check_scalars(
    of_instruction_write_metadata_t *obj, int value);

extern int of_match_v3_OF_VERSION_1_2_populate(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_2_check(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_2_populate_scalars(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_2_check_scalars(
    of_match_v3_t *obj, int value);

extern int of_oxm_arp_op_OF_VERSION_1_2_populate(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_2_check(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_op_t *obj, int value);

extern int of_oxm_arp_op_masked_OF_VERSION_1_2_populate(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_2_check(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_op_masked_t *obj, int value);

extern int of_oxm_arp_sha_OF_VERSION_1_2_populate(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_2_check(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_sha_t *obj, int value);

extern int of_oxm_arp_sha_masked_OF_VERSION_1_2_populate(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_2_check(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_sha_masked_t *obj, int value);

extern int of_oxm_arp_spa_OF_VERSION_1_2_populate(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_2_check(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_spa_t *obj, int value);

extern int of_oxm_arp_spa_masked_OF_VERSION_1_2_populate(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_2_check(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_spa_masked_t *obj, int value);

extern int of_oxm_arp_tha_OF_VERSION_1_2_populate(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_2_check(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_tha_t *obj, int value);

extern int of_oxm_arp_tha_masked_OF_VERSION_1_2_populate(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_2_check(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_tha_masked_t *obj, int value);

extern int of_oxm_arp_tpa_OF_VERSION_1_2_populate(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_2_check(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_tpa_t *obj, int value);

extern int of_oxm_arp_tpa_masked_OF_VERSION_1_2_populate(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_2_check(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_arp_tpa_masked_t *obj, int value);

extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2_populate(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2_check(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);

extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);

extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_2_populate(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_2_check(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_in_ports_128_t *obj, int value);

extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);

extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_lag_id_OF_VERSION_1_2_populate(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_2_check(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_lag_id_t *obj, int value);

extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_lag_id_masked_t *obj, int value);

extern int of_oxm_bsn_vrf_OF_VERSION_1_2_populate(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_2_check(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_vrf_t *obj, int value);

extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_2_populate(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_2_check(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_bsn_vrf_masked_t *obj, int value);

extern int of_oxm_eth_dst_OF_VERSION_1_2_populate(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_2_check(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_dst_t *obj, int value);

extern int of_oxm_eth_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_2_check(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_dst_masked_t *obj, int value);

extern int of_oxm_eth_src_OF_VERSION_1_2_populate(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_2_check(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_src_t *obj, int value);

extern int of_oxm_eth_src_masked_OF_VERSION_1_2_populate(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_2_check(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_src_masked_t *obj, int value);

extern int of_oxm_eth_type_OF_VERSION_1_2_populate(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_2_check(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_type_t *obj, int value);

extern int of_oxm_eth_type_masked_OF_VERSION_1_2_populate(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_2_check(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_eth_type_masked_t *obj, int value);

extern int of_oxm_header_OF_VERSION_1_2_populate(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_2_check(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_2_populate_scalars(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_2_check_scalars(
    of_oxm_header_t *obj, int value);

extern int of_oxm_icmpv4_code_OF_VERSION_1_2_populate(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_2_check(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv4_code_t *obj, int value);

extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_2_populate(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_2_check(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv4_code_masked_t *obj, int value);

extern int of_oxm_icmpv4_type_OF_VERSION_1_2_populate(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_2_check(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv4_type_t *obj, int value);

extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_2_populate(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_2_check(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv4_type_masked_t *obj, int value);

extern int of_oxm_icmpv6_code_OF_VERSION_1_2_populate(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_2_check(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv6_code_t *obj, int value);

extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_2_populate(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_2_check(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv6_code_masked_t *obj, int value);

extern int of_oxm_icmpv6_type_OF_VERSION_1_2_populate(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_2_check(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv6_type_t *obj, int value);

extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_2_populate(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_2_check(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_icmpv6_type_masked_t *obj, int value);

extern int of_oxm_in_phy_port_OF_VERSION_1_2_populate(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_2_check(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_2_populate_scalars(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_2_check_scalars(
    of_oxm_in_phy_port_t *obj, int value);

extern int of_oxm_in_phy_port_masked_OF_VERSION_1_2_populate(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_2_check(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_in_phy_port_masked_t *obj, int value);

extern int of_oxm_in_port_OF_VERSION_1_2_populate(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_2_check(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_2_populate_scalars(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_2_check_scalars(
    of_oxm_in_port_t *obj, int value);

extern int of_oxm_in_port_masked_OF_VERSION_1_2_populate(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_2_check(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_in_port_masked_t *obj, int value);

extern int of_oxm_ip_dscp_OF_VERSION_1_2_populate(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_2_check(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_dscp_t *obj, int value);

extern int of_oxm_ip_dscp_masked_OF_VERSION_1_2_populate(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_2_check(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_dscp_masked_t *obj, int value);

extern int of_oxm_ip_ecn_OF_VERSION_1_2_populate(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_2_check(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_ecn_t *obj, int value);

extern int of_oxm_ip_ecn_masked_OF_VERSION_1_2_populate(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_2_check(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_ecn_masked_t *obj, int value);

extern int of_oxm_ip_proto_OF_VERSION_1_2_populate(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_2_check(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_proto_t *obj, int value);

extern int of_oxm_ip_proto_masked_OF_VERSION_1_2_populate(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_2_check(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ip_proto_masked_t *obj, int value);

extern int of_oxm_ipv4_dst_OF_VERSION_1_2_populate(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_2_check(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv4_dst_t *obj, int value);

extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_2_check(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv4_dst_masked_t *obj, int value);

extern int of_oxm_ipv4_src_OF_VERSION_1_2_populate(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_2_check(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv4_src_t *obj, int value);

extern int of_oxm_ipv4_src_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_2_check(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv4_src_masked_t *obj, int value);

extern int of_oxm_ipv6_dst_OF_VERSION_1_2_populate(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_2_check(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_dst_t *obj, int value);

extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_dst_masked_t *obj, int value);

extern int of_oxm_ipv6_flabel_OF_VERSION_1_2_populate(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_2_check(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_flabel_t *obj, int value);

extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_flabel_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_sll_t *obj, int value);

extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_target_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_target_t *obj, int value);

extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_tll_t *obj, int value);

extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);

extern int of_oxm_ipv6_src_OF_VERSION_1_2_populate(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_2_check(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_src_t *obj, int value);

extern int of_oxm_ipv6_src_masked_OF_VERSION_1_2_populate(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_2_check(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_ipv6_src_masked_t *obj, int value);

extern int of_oxm_metadata_OF_VERSION_1_2_populate(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_2_check(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_2_populate_scalars(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_2_check_scalars(
    of_oxm_metadata_t *obj, int value);

extern int of_oxm_metadata_masked_OF_VERSION_1_2_populate(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_2_check(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_metadata_masked_t *obj, int value);

extern int of_oxm_mpls_label_OF_VERSION_1_2_populate(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_2_check(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_2_populate_scalars(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_2_check_scalars(
    of_oxm_mpls_label_t *obj, int value);

extern int of_oxm_mpls_label_masked_OF_VERSION_1_2_populate(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_2_check(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_mpls_label_masked_t *obj, int value);

extern int of_oxm_mpls_tc_OF_VERSION_1_2_populate(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_2_check(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_2_populate_scalars(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_2_check_scalars(
    of_oxm_mpls_tc_t *obj, int value);

extern int of_oxm_mpls_tc_masked_OF_VERSION_1_2_populate(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_2_check(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_mpls_tc_masked_t *obj, int value);

extern int of_oxm_sctp_dst_OF_VERSION_1_2_populate(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_2_check(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_sctp_dst_t *obj, int value);

extern int of_oxm_sctp_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_2_check(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_sctp_dst_masked_t *obj, int value);

extern int of_oxm_sctp_src_OF_VERSION_1_2_populate(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_2_check(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_2_check_scalars(
    of_oxm_sctp_src_t *obj, int value);

extern int of_oxm_sctp_src_masked_OF_VERSION_1_2_populate(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_2_check(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_sctp_src_masked_t *obj, int value);

extern int of_oxm_tcp_dst_OF_VERSION_1_2_populate(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_2_check(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_tcp_dst_t *obj, int value);

extern int of_oxm_tcp_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_2_check(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_tcp_dst_masked_t *obj, int value);

extern int of_oxm_tcp_src_OF_VERSION_1_2_populate(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_2_check(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_2_check_scalars(
    of_oxm_tcp_src_t *obj, int value);

extern int of_oxm_tcp_src_masked_OF_VERSION_1_2_populate(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_2_check(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_tcp_src_masked_t *obj, int value);

extern int of_oxm_udp_dst_OF_VERSION_1_2_populate(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_2_check(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_2_populate_scalars(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_2_check_scalars(
    of_oxm_udp_dst_t *obj, int value);

extern int of_oxm_udp_dst_masked_OF_VERSION_1_2_populate(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_2_check(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_udp_dst_masked_t *obj, int value);

extern int of_oxm_udp_src_OF_VERSION_1_2_populate(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_2_check(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_2_populate_scalars(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_2_check_scalars(
    of_oxm_udp_src_t *obj, int value);

extern int of_oxm_udp_src_masked_OF_VERSION_1_2_populate(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_2_check(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_udp_src_masked_t *obj, int value);

extern int of_oxm_vlan_pcp_OF_VERSION_1_2_populate(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_2_check(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_2_populate_scalars(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_2_check_scalars(
    of_oxm_vlan_pcp_t *obj, int value);

extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_2_populate(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_2_check(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_vlan_pcp_masked_t *obj, int value);

extern int of_oxm_vlan_vid_OF_VERSION_1_2_populate(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_2_check(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_2_populate_scalars(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_2_check_scalars(
    of_oxm_vlan_vid_t *obj, int value);

extern int of_oxm_vlan_vid_masked_OF_VERSION_1_2_populate(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_2_check(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_2_populate_scalars(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_2_check_scalars(
    of_oxm_vlan_vid_masked_t *obj, int value);

extern int of_packet_queue_OF_VERSION_1_2_populate(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_2_check(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_2_populate_scalars(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_2_check_scalars(
    of_packet_queue_t *obj, int value);

extern int of_port_desc_OF_VERSION_1_2_populate(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_2_check(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_2_populate_scalars(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_2_check_scalars(
    of_port_desc_t *obj, int value);

extern int of_port_stats_entry_OF_VERSION_1_2_populate(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_2_check(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_2_check_scalars(
    of_port_stats_entry_t *obj, int value);

extern int of_queue_prop_experimenter_OF_VERSION_1_2_populate(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_2_check(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_2_populate_scalars(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_2_check_scalars(
    of_queue_prop_experimenter_t *obj, int value);

extern int of_queue_prop_header_OF_VERSION_1_2_populate(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_2_check(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_2_populate_scalars(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_2_check_scalars(
    of_queue_prop_header_t *obj, int value);

extern int of_queue_prop_max_rate_OF_VERSION_1_2_populate(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_2_check(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_2_populate_scalars(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_2_check_scalars(
    of_queue_prop_max_rate_t *obj, int value);

extern int of_queue_prop_min_rate_OF_VERSION_1_2_populate(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_2_check(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_2_populate_scalars(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_2_check_scalars(
    of_queue_prop_min_rate_t *obj, int value);

extern int of_queue_stats_entry_OF_VERSION_1_2_populate(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_2_check(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_2_check_scalars(
    of_queue_stats_entry_t *obj, int value);

extern int of_table_stats_entry_OF_VERSION_1_2_populate(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_2_check(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_2_check_scalars(
    of_table_stats_entry_t *obj, int value);

extern int of_list_action_OF_VERSION_1_2_populate(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_2_check(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_2_populate_scalars(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_2_check_scalars(
    of_list_action_t *obj, int value);

extern int of_list_bsn_interface_OF_VERSION_1_2_populate(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_2_check(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_2_populate_scalars(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_2_check_scalars(
    of_list_bsn_interface_t *obj, int value);

extern int of_list_bucket_OF_VERSION_1_2_populate(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_2_check(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_2_populate_scalars(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_2_check_scalars(
    of_list_bucket_t *obj, int value);

extern int of_list_bucket_counter_OF_VERSION_1_2_populate(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_2_check(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_2_populate_scalars(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_2_check_scalars(
    of_list_bucket_counter_t *obj, int value);

extern int of_list_flow_stats_entry_OF_VERSION_1_2_populate(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_2_check(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_flow_stats_entry_t *obj, int value);

extern int of_list_group_desc_stats_entry_OF_VERSION_1_2_populate(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_2_check(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);

extern int of_list_group_stats_entry_OF_VERSION_1_2_populate(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_2_check(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_group_stats_entry_t *obj, int value);

extern int of_list_instruction_OF_VERSION_1_2_populate(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_2_check(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_2_populate_scalars(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_2_check_scalars(
    of_list_instruction_t *obj, int value);

extern int of_list_oxm_OF_VERSION_1_2_populate(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_2_check(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_2_populate_scalars(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_2_check_scalars(
    of_list_oxm_t *obj, int value);

extern int of_list_packet_queue_OF_VERSION_1_2_populate(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_2_check(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_2_populate_scalars(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_2_check_scalars(
    of_list_packet_queue_t *obj, int value);

extern int of_list_port_desc_OF_VERSION_1_2_populate(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_2_check(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_2_populate_scalars(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_2_check_scalars(
    of_list_port_desc_t *obj, int value);

extern int of_list_port_stats_entry_OF_VERSION_1_2_populate(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_2_check(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_port_stats_entry_t *obj, int value);

extern int of_list_queue_prop_OF_VERSION_1_2_populate(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_2_check(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_2_populate_scalars(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_2_check_scalars(
    of_list_queue_prop_t *obj, int value);

extern int of_list_queue_stats_entry_OF_VERSION_1_2_populate(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_2_check(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_queue_stats_entry_t *obj, int value);

extern int of_list_table_stats_entry_OF_VERSION_1_2_populate(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_2_check(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_2_populate_scalars(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_2_check_scalars(
    of_list_table_stats_entry_t *obj, int value);

extern int of_aggregate_stats_reply_OF_VERSION_1_3_populate(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_3_check(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_aggregate_stats_reply_t *obj, int value);
extern int of_aggregate_stats_reply_OF_VERSION_1_3_check_scalars(
    of_aggregate_stats_reply_t *obj, int value);

extern int of_aggregate_stats_request_OF_VERSION_1_3_populate(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_3_check(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_3_populate_scalars(
    of_aggregate_stats_request_t *obj, int value);
extern int of_aggregate_stats_request_OF_VERSION_1_3_check_scalars(
    of_aggregate_stats_request_t *obj, int value);

extern int of_async_get_reply_OF_VERSION_1_3_populate(
    of_async_get_reply_t *obj, int value);
extern int of_async_get_reply_OF_VERSION_1_3_check(
    of_async_get_reply_t *obj, int value);
extern int of_async_get_reply_OF_VERSION_1_3_populate_scalars(
    of_async_get_reply_t *obj, int value);
extern int of_async_get_reply_OF_VERSION_1_3_check_scalars(
    of_async_get_reply_t *obj, int value);

extern int of_async_get_request_OF_VERSION_1_3_populate(
    of_async_get_request_t *obj, int value);
extern int of_async_get_request_OF_VERSION_1_3_check(
    of_async_get_request_t *obj, int value);
extern int of_async_get_request_OF_VERSION_1_3_populate_scalars(
    of_async_get_request_t *obj, int value);
extern int of_async_get_request_OF_VERSION_1_3_check_scalars(
    of_async_get_request_t *obj, int value);

extern int of_async_set_OF_VERSION_1_3_populate(
    of_async_set_t *obj, int value);
extern int of_async_set_OF_VERSION_1_3_check(
    of_async_set_t *obj, int value);
extern int of_async_set_OF_VERSION_1_3_populate_scalars(
    of_async_set_t *obj, int value);
extern int of_async_set_OF_VERSION_1_3_check_scalars(
    of_async_set_t *obj, int value);

extern int of_bad_action_error_msg_OF_VERSION_1_3_populate(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_3_check(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_3_populate_scalars(
    of_bad_action_error_msg_t *obj, int value);
extern int of_bad_action_error_msg_OF_VERSION_1_3_check_scalars(
    of_bad_action_error_msg_t *obj, int value);

extern int of_bad_instruction_error_msg_OF_VERSION_1_3_populate(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_3_check(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_3_populate_scalars(
    of_bad_instruction_error_msg_t *obj, int value);
extern int of_bad_instruction_error_msg_OF_VERSION_1_3_check_scalars(
    of_bad_instruction_error_msg_t *obj, int value);

extern int of_bad_match_error_msg_OF_VERSION_1_3_populate(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_3_check(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_3_populate_scalars(
    of_bad_match_error_msg_t *obj, int value);
extern int of_bad_match_error_msg_OF_VERSION_1_3_check_scalars(
    of_bad_match_error_msg_t *obj, int value);

extern int of_bad_request_error_msg_OF_VERSION_1_3_populate(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_3_check(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_3_populate_scalars(
    of_bad_request_error_msg_t *obj, int value);
extern int of_bad_request_error_msg_OF_VERSION_1_3_check_scalars(
    of_bad_request_error_msg_t *obj, int value);

extern int of_barrier_reply_OF_VERSION_1_3_populate(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_3_check(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_3_populate_scalars(
    of_barrier_reply_t *obj, int value);
extern int of_barrier_reply_OF_VERSION_1_3_check_scalars(
    of_barrier_reply_t *obj, int value);

extern int of_barrier_request_OF_VERSION_1_3_populate(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_3_check(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_3_populate_scalars(
    of_barrier_request_t *obj, int value);
extern int of_barrier_request_OF_VERSION_1_3_check_scalars(
    of_barrier_request_t *obj, int value);

extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_3_populate(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_3_check(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);
extern int of_bsn_bw_clear_data_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_clear_data_reply_t *obj, int value);

extern int of_bsn_bw_clear_data_request_OF_VERSION_1_3_populate(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_3_check(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);
extern int of_bsn_bw_clear_data_request_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_clear_data_request_t *obj, int value);

extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_3_populate(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_3_check(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);
extern int of_bsn_bw_enable_get_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_enable_get_reply_t *obj, int value);

extern int of_bsn_bw_enable_get_request_OF_VERSION_1_3_populate(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_3_check(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);
extern int of_bsn_bw_enable_get_request_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_enable_get_request_t *obj, int value);

extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_3_populate(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_3_check(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);
extern int of_bsn_bw_enable_set_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_enable_set_reply_t *obj, int value);

extern int of_bsn_bw_enable_set_request_OF_VERSION_1_3_populate(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_3_check(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);
extern int of_bsn_bw_enable_set_request_OF_VERSION_1_3_check_scalars(
    of_bsn_bw_enable_set_request_t *obj, int value);

extern int of_bsn_flow_idle_OF_VERSION_1_3_populate(
    of_bsn_flow_idle_t *obj, int value);
extern int of_bsn_flow_idle_OF_VERSION_1_3_check(
    of_bsn_flow_idle_t *obj, int value);
extern int of_bsn_flow_idle_OF_VERSION_1_3_populate_scalars(
    of_bsn_flow_idle_t *obj, int value);
extern int of_bsn_flow_idle_OF_VERSION_1_3_check_scalars(
    of_bsn_flow_idle_t *obj, int value);

extern int of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3_populate(
    of_bsn_flow_idle_enable_get_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3_check(
    of_bsn_flow_idle_enable_get_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_flow_idle_enable_get_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_flow_idle_enable_get_reply_t *obj, int value);

extern int of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3_populate(
    of_bsn_flow_idle_enable_get_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3_check(
    of_bsn_flow_idle_enable_get_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_flow_idle_enable_get_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3_check_scalars(
    of_bsn_flow_idle_enable_get_request_t *obj, int value);

extern int of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3_populate(
    of_bsn_flow_idle_enable_set_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3_check(
    of_bsn_flow_idle_enable_set_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_flow_idle_enable_set_reply_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_flow_idle_enable_set_reply_t *obj, int value);

extern int of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3_populate(
    of_bsn_flow_idle_enable_set_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3_check(
    of_bsn_flow_idle_enable_set_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_flow_idle_enable_set_request_t *obj, int value);
extern int of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3_check_scalars(
    of_bsn_flow_idle_enable_set_request_t *obj, int value);

extern int of_bsn_get_interfaces_reply_OF_VERSION_1_3_populate(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_3_check(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);
extern int of_bsn_get_interfaces_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_get_interfaces_reply_t *obj, int value);

extern int of_bsn_get_interfaces_request_OF_VERSION_1_3_populate(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_3_check(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);
extern int of_bsn_get_interfaces_request_OF_VERSION_1_3_check_scalars(
    of_bsn_get_interfaces_request_t *obj, int value);

extern int of_bsn_get_mirroring_reply_OF_VERSION_1_3_populate(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_3_check(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);
extern int of_bsn_get_mirroring_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_get_mirroring_reply_t *obj, int value);

extern int of_bsn_get_mirroring_request_OF_VERSION_1_3_populate(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_3_check(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);
extern int of_bsn_get_mirroring_request_OF_VERSION_1_3_check_scalars(
    of_bsn_get_mirroring_request_t *obj, int value);

extern int of_bsn_header_OF_VERSION_1_3_populate(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_3_check(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_3_populate_scalars(
    of_bsn_header_t *obj, int value);
extern int of_bsn_header_OF_VERSION_1_3_check_scalars(
    of_bsn_header_t *obj, int value);

extern int of_bsn_lacp_convergence_notif_OF_VERSION_1_3_populate(
    of_bsn_lacp_convergence_notif_t *obj, int value);
extern int of_bsn_lacp_convergence_notif_OF_VERSION_1_3_check(
    of_bsn_lacp_convergence_notif_t *obj, int value);
extern int of_bsn_lacp_convergence_notif_OF_VERSION_1_3_populate_scalars(
    of_bsn_lacp_convergence_notif_t *obj, int value);
extern int of_bsn_lacp_convergence_notif_OF_VERSION_1_3_check_scalars(
    of_bsn_lacp_convergence_notif_t *obj, int value);

extern int of_bsn_lacp_stats_reply_OF_VERSION_1_3_populate(
    of_bsn_lacp_stats_reply_t *obj, int value);
extern int of_bsn_lacp_stats_reply_OF_VERSION_1_3_check(
    of_bsn_lacp_stats_reply_t *obj, int value);
extern int of_bsn_lacp_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_lacp_stats_reply_t *obj, int value);
extern int of_bsn_lacp_stats_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_lacp_stats_reply_t *obj, int value);

extern int of_bsn_lacp_stats_request_OF_VERSION_1_3_populate(
    of_bsn_lacp_stats_request_t *obj, int value);
extern int of_bsn_lacp_stats_request_OF_VERSION_1_3_check(
    of_bsn_lacp_stats_request_t *obj, int value);
extern int of_bsn_lacp_stats_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_lacp_stats_request_t *obj, int value);
extern int of_bsn_lacp_stats_request_OF_VERSION_1_3_check_scalars(
    of_bsn_lacp_stats_request_t *obj, int value);

extern int of_bsn_pdu_rx_reply_OF_VERSION_1_3_populate(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_3_check(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);
extern int of_bsn_pdu_rx_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_pdu_rx_reply_t *obj, int value);

extern int of_bsn_pdu_rx_request_OF_VERSION_1_3_populate(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_3_check(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);
extern int of_bsn_pdu_rx_request_OF_VERSION_1_3_check_scalars(
    of_bsn_pdu_rx_request_t *obj, int value);

extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_3_populate(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_3_check(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_3_populate_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);
extern int of_bsn_pdu_rx_timeout_OF_VERSION_1_3_check_scalars(
    of_bsn_pdu_rx_timeout_t *obj, int value);

extern int of_bsn_pdu_tx_reply_OF_VERSION_1_3_populate(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_3_check(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);
extern int of_bsn_pdu_tx_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_pdu_tx_reply_t *obj, int value);

extern int of_bsn_pdu_tx_request_OF_VERSION_1_3_populate(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_3_check(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);
extern int of_bsn_pdu_tx_request_OF_VERSION_1_3_check_scalars(
    of_bsn_pdu_tx_request_t *obj, int value);

extern int of_bsn_set_lacp_reply_OF_VERSION_1_3_populate(
    of_bsn_set_lacp_reply_t *obj, int value);
extern int of_bsn_set_lacp_reply_OF_VERSION_1_3_check(
    of_bsn_set_lacp_reply_t *obj, int value);
extern int of_bsn_set_lacp_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_set_lacp_reply_t *obj, int value);
extern int of_bsn_set_lacp_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_set_lacp_reply_t *obj, int value);

extern int of_bsn_set_lacp_request_OF_VERSION_1_3_populate(
    of_bsn_set_lacp_request_t *obj, int value);
extern int of_bsn_set_lacp_request_OF_VERSION_1_3_check(
    of_bsn_set_lacp_request_t *obj, int value);
extern int of_bsn_set_lacp_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_set_lacp_request_t *obj, int value);
extern int of_bsn_set_lacp_request_OF_VERSION_1_3_check_scalars(
    of_bsn_set_lacp_request_t *obj, int value);

extern int of_bsn_set_mirroring_OF_VERSION_1_3_populate(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_3_check(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_3_populate_scalars(
    of_bsn_set_mirroring_t *obj, int value);
extern int of_bsn_set_mirroring_OF_VERSION_1_3_check_scalars(
    of_bsn_set_mirroring_t *obj, int value);

extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3_populate(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3_check(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);
extern int of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_set_pktin_suppression_reply_t *obj, int value);

extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_3_populate(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_3_check(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);
extern int of_bsn_set_pktin_suppression_request_OF_VERSION_1_3_check_scalars(
    of_bsn_set_pktin_suppression_request_t *obj, int value);

extern int of_bsn_stats_reply_OF_VERSION_1_3_populate(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_3_check(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_stats_reply_t *obj, int value);
extern int of_bsn_stats_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_stats_reply_t *obj, int value);

extern int of_bsn_stats_request_OF_VERSION_1_3_populate(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_3_check(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_stats_request_t *obj, int value);
extern int of_bsn_stats_request_OF_VERSION_1_3_check_scalars(
    of_bsn_stats_request_t *obj, int value);

extern int of_bsn_time_reply_OF_VERSION_1_3_populate(
    of_bsn_time_reply_t *obj, int value);
extern int of_bsn_time_reply_OF_VERSION_1_3_check(
    of_bsn_time_reply_t *obj, int value);
extern int of_bsn_time_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_time_reply_t *obj, int value);
extern int of_bsn_time_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_time_reply_t *obj, int value);

extern int of_bsn_time_request_OF_VERSION_1_3_populate(
    of_bsn_time_request_t *obj, int value);
extern int of_bsn_time_request_OF_VERSION_1_3_check(
    of_bsn_time_request_t *obj, int value);
extern int of_bsn_time_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_time_request_t *obj, int value);
extern int of_bsn_time_request_OF_VERSION_1_3_check_scalars(
    of_bsn_time_request_t *obj, int value);

extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_3_populate(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_3_check(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);
extern int of_bsn_virtual_port_create_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_virtual_port_create_reply_t *obj, int value);

extern int of_bsn_virtual_port_create_request_OF_VERSION_1_3_populate(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_3_check(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);
extern int of_bsn_virtual_port_create_request_OF_VERSION_1_3_check_scalars(
    of_bsn_virtual_port_create_request_t *obj, int value);

extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_3_populate(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_3_check(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_3_populate_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);
extern int of_bsn_virtual_port_remove_reply_OF_VERSION_1_3_check_scalars(
    of_bsn_virtual_port_remove_reply_t *obj, int value);

extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_3_populate(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_3_check(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_3_populate_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);
extern int of_bsn_virtual_port_remove_request_OF_VERSION_1_3_check_scalars(
    of_bsn_virtual_port_remove_request_t *obj, int value);

extern int of_desc_stats_reply_OF_VERSION_1_3_populate(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_3_check(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_desc_stats_reply_t *obj, int value);
extern int of_desc_stats_reply_OF_VERSION_1_3_check_scalars(
    of_desc_stats_reply_t *obj, int value);

extern int of_desc_stats_request_OF_VERSION_1_3_populate(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_3_check(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_3_populate_scalars(
    of_desc_stats_request_t *obj, int value);
extern int of_desc_stats_request_OF_VERSION_1_3_check_scalars(
    of_desc_stats_request_t *obj, int value);

extern int of_echo_reply_OF_VERSION_1_3_populate(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_3_check(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_3_populate_scalars(
    of_echo_reply_t *obj, int value);
extern int of_echo_reply_OF_VERSION_1_3_check_scalars(
    of_echo_reply_t *obj, int value);

extern int of_echo_request_OF_VERSION_1_3_populate(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_3_check(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_3_populate_scalars(
    of_echo_request_t *obj, int value);
extern int of_echo_request_OF_VERSION_1_3_check_scalars(
    of_echo_request_t *obj, int value);

extern int of_error_msg_OF_VERSION_1_3_populate(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_3_check(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_3_populate_scalars(
    of_error_msg_t *obj, int value);
extern int of_error_msg_OF_VERSION_1_3_check_scalars(
    of_error_msg_t *obj, int value);

extern int of_experimenter_OF_VERSION_1_3_populate(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_3_check(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_3_populate_scalars(
    of_experimenter_t *obj, int value);
extern int of_experimenter_OF_VERSION_1_3_check_scalars(
    of_experimenter_t *obj, int value);

extern int of_experimenter_error_msg_OF_VERSION_1_3_populate(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_3_check(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_3_populate_scalars(
    of_experimenter_error_msg_t *obj, int value);
extern int of_experimenter_error_msg_OF_VERSION_1_3_check_scalars(
    of_experimenter_error_msg_t *obj, int value);

extern int of_experimenter_stats_reply_OF_VERSION_1_3_populate(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_3_check(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_experimenter_stats_reply_t *obj, int value);
extern int of_experimenter_stats_reply_OF_VERSION_1_3_check_scalars(
    of_experimenter_stats_reply_t *obj, int value);

extern int of_experimenter_stats_request_OF_VERSION_1_3_populate(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_3_check(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_3_populate_scalars(
    of_experimenter_stats_request_t *obj, int value);
extern int of_experimenter_stats_request_OF_VERSION_1_3_check_scalars(
    of_experimenter_stats_request_t *obj, int value);

extern int of_features_reply_OF_VERSION_1_3_populate(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_3_check(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_3_populate_scalars(
    of_features_reply_t *obj, int value);
extern int of_features_reply_OF_VERSION_1_3_check_scalars(
    of_features_reply_t *obj, int value);

extern int of_features_request_OF_VERSION_1_3_populate(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_3_check(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_3_populate_scalars(
    of_features_request_t *obj, int value);
extern int of_features_request_OF_VERSION_1_3_check_scalars(
    of_features_request_t *obj, int value);

extern int of_flow_add_OF_VERSION_1_3_populate(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_3_check(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_3_populate_scalars(
    of_flow_add_t *obj, int value);
extern int of_flow_add_OF_VERSION_1_3_check_scalars(
    of_flow_add_t *obj, int value);

extern int of_flow_delete_OF_VERSION_1_3_populate(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_3_check(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_3_populate_scalars(
    of_flow_delete_t *obj, int value);
extern int of_flow_delete_OF_VERSION_1_3_check_scalars(
    of_flow_delete_t *obj, int value);

extern int of_flow_delete_strict_OF_VERSION_1_3_populate(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_3_check(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_3_populate_scalars(
    of_flow_delete_strict_t *obj, int value);
extern int of_flow_delete_strict_OF_VERSION_1_3_check_scalars(
    of_flow_delete_strict_t *obj, int value);

extern int of_flow_mod_OF_VERSION_1_3_populate(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_3_check(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_3_populate_scalars(
    of_flow_mod_t *obj, int value);
extern int of_flow_mod_OF_VERSION_1_3_check_scalars(
    of_flow_mod_t *obj, int value);

extern int of_flow_mod_failed_error_msg_OF_VERSION_1_3_populate(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_3_check(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);
extern int of_flow_mod_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_flow_mod_failed_error_msg_t *obj, int value);

extern int of_flow_modify_OF_VERSION_1_3_populate(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_3_check(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_3_populate_scalars(
    of_flow_modify_t *obj, int value);
extern int of_flow_modify_OF_VERSION_1_3_check_scalars(
    of_flow_modify_t *obj, int value);

extern int of_flow_modify_strict_OF_VERSION_1_3_populate(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_3_check(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_3_populate_scalars(
    of_flow_modify_strict_t *obj, int value);
extern int of_flow_modify_strict_OF_VERSION_1_3_check_scalars(
    of_flow_modify_strict_t *obj, int value);

extern int of_flow_removed_OF_VERSION_1_3_populate(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_3_check(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_3_populate_scalars(
    of_flow_removed_t *obj, int value);
extern int of_flow_removed_OF_VERSION_1_3_check_scalars(
    of_flow_removed_t *obj, int value);

extern int of_flow_stats_reply_OF_VERSION_1_3_populate(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_3_check(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_flow_stats_reply_t *obj, int value);
extern int of_flow_stats_reply_OF_VERSION_1_3_check_scalars(
    of_flow_stats_reply_t *obj, int value);

extern int of_flow_stats_request_OF_VERSION_1_3_populate(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_3_check(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_3_populate_scalars(
    of_flow_stats_request_t *obj, int value);
extern int of_flow_stats_request_OF_VERSION_1_3_check_scalars(
    of_flow_stats_request_t *obj, int value);

extern int of_get_config_reply_OF_VERSION_1_3_populate(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_3_check(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_3_populate_scalars(
    of_get_config_reply_t *obj, int value);
extern int of_get_config_reply_OF_VERSION_1_3_check_scalars(
    of_get_config_reply_t *obj, int value);

extern int of_get_config_request_OF_VERSION_1_3_populate(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_3_check(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_3_populate_scalars(
    of_get_config_request_t *obj, int value);
extern int of_get_config_request_OF_VERSION_1_3_check_scalars(
    of_get_config_request_t *obj, int value);

extern int of_group_desc_stats_reply_OF_VERSION_1_3_populate(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_3_check(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_group_desc_stats_reply_t *obj, int value);
extern int of_group_desc_stats_reply_OF_VERSION_1_3_check_scalars(
    of_group_desc_stats_reply_t *obj, int value);

extern int of_group_desc_stats_request_OF_VERSION_1_3_populate(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_3_check(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_3_populate_scalars(
    of_group_desc_stats_request_t *obj, int value);
extern int of_group_desc_stats_request_OF_VERSION_1_3_check_scalars(
    of_group_desc_stats_request_t *obj, int value);

extern int of_group_features_stats_reply_OF_VERSION_1_3_populate(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_3_check(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_group_features_stats_reply_t *obj, int value);
extern int of_group_features_stats_reply_OF_VERSION_1_3_check_scalars(
    of_group_features_stats_reply_t *obj, int value);

extern int of_group_features_stats_request_OF_VERSION_1_3_populate(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_3_check(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_3_populate_scalars(
    of_group_features_stats_request_t *obj, int value);
extern int of_group_features_stats_request_OF_VERSION_1_3_check_scalars(
    of_group_features_stats_request_t *obj, int value);

extern int of_group_mod_OF_VERSION_1_3_populate(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_3_check(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_3_populate_scalars(
    of_group_mod_t *obj, int value);
extern int of_group_mod_OF_VERSION_1_3_check_scalars(
    of_group_mod_t *obj, int value);

extern int of_group_mod_failed_error_msg_OF_VERSION_1_3_populate(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_3_check(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);
extern int of_group_mod_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_group_mod_failed_error_msg_t *obj, int value);

extern int of_group_stats_reply_OF_VERSION_1_3_populate(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_3_check(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_group_stats_reply_t *obj, int value);
extern int of_group_stats_reply_OF_VERSION_1_3_check_scalars(
    of_group_stats_reply_t *obj, int value);

extern int of_group_stats_request_OF_VERSION_1_3_populate(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_3_check(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_3_populate_scalars(
    of_group_stats_request_t *obj, int value);
extern int of_group_stats_request_OF_VERSION_1_3_check_scalars(
    of_group_stats_request_t *obj, int value);

extern int of_hello_OF_VERSION_1_3_populate(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_3_check(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_3_populate_scalars(
    of_hello_t *obj, int value);
extern int of_hello_OF_VERSION_1_3_check_scalars(
    of_hello_t *obj, int value);

extern int of_hello_failed_error_msg_OF_VERSION_1_3_populate(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_3_check(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_hello_failed_error_msg_t *obj, int value);
extern int of_hello_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_hello_failed_error_msg_t *obj, int value);

extern int of_meter_config_stats_reply_OF_VERSION_1_3_populate(
    of_meter_config_stats_reply_t *obj, int value);
extern int of_meter_config_stats_reply_OF_VERSION_1_3_check(
    of_meter_config_stats_reply_t *obj, int value);
extern int of_meter_config_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_meter_config_stats_reply_t *obj, int value);
extern int of_meter_config_stats_reply_OF_VERSION_1_3_check_scalars(
    of_meter_config_stats_reply_t *obj, int value);

extern int of_meter_config_stats_request_OF_VERSION_1_3_populate(
    of_meter_config_stats_request_t *obj, int value);
extern int of_meter_config_stats_request_OF_VERSION_1_3_check(
    of_meter_config_stats_request_t *obj, int value);
extern int of_meter_config_stats_request_OF_VERSION_1_3_populate_scalars(
    of_meter_config_stats_request_t *obj, int value);
extern int of_meter_config_stats_request_OF_VERSION_1_3_check_scalars(
    of_meter_config_stats_request_t *obj, int value);

extern int of_meter_features_stats_reply_OF_VERSION_1_3_populate(
    of_meter_features_stats_reply_t *obj, int value);
extern int of_meter_features_stats_reply_OF_VERSION_1_3_check(
    of_meter_features_stats_reply_t *obj, int value);
extern int of_meter_features_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_meter_features_stats_reply_t *obj, int value);
extern int of_meter_features_stats_reply_OF_VERSION_1_3_check_scalars(
    of_meter_features_stats_reply_t *obj, int value);

extern int of_meter_features_stats_request_OF_VERSION_1_3_populate(
    of_meter_features_stats_request_t *obj, int value);
extern int of_meter_features_stats_request_OF_VERSION_1_3_check(
    of_meter_features_stats_request_t *obj, int value);
extern int of_meter_features_stats_request_OF_VERSION_1_3_populate_scalars(
    of_meter_features_stats_request_t *obj, int value);
extern int of_meter_features_stats_request_OF_VERSION_1_3_check_scalars(
    of_meter_features_stats_request_t *obj, int value);

extern int of_meter_mod_OF_VERSION_1_3_populate(
    of_meter_mod_t *obj, int value);
extern int of_meter_mod_OF_VERSION_1_3_check(
    of_meter_mod_t *obj, int value);
extern int of_meter_mod_OF_VERSION_1_3_populate_scalars(
    of_meter_mod_t *obj, int value);
extern int of_meter_mod_OF_VERSION_1_3_check_scalars(
    of_meter_mod_t *obj, int value);

extern int of_meter_mod_failed_error_msg_OF_VERSION_1_3_populate(
    of_meter_mod_failed_error_msg_t *obj, int value);
extern int of_meter_mod_failed_error_msg_OF_VERSION_1_3_check(
    of_meter_mod_failed_error_msg_t *obj, int value);
extern int of_meter_mod_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_meter_mod_failed_error_msg_t *obj, int value);
extern int of_meter_mod_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_meter_mod_failed_error_msg_t *obj, int value);

extern int of_meter_stats_reply_OF_VERSION_1_3_populate(
    of_meter_stats_reply_t *obj, int value);
extern int of_meter_stats_reply_OF_VERSION_1_3_check(
    of_meter_stats_reply_t *obj, int value);
extern int of_meter_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_meter_stats_reply_t *obj, int value);
extern int of_meter_stats_reply_OF_VERSION_1_3_check_scalars(
    of_meter_stats_reply_t *obj, int value);

extern int of_meter_stats_request_OF_VERSION_1_3_populate(
    of_meter_stats_request_t *obj, int value);
extern int of_meter_stats_request_OF_VERSION_1_3_check(
    of_meter_stats_request_t *obj, int value);
extern int of_meter_stats_request_OF_VERSION_1_3_populate_scalars(
    of_meter_stats_request_t *obj, int value);
extern int of_meter_stats_request_OF_VERSION_1_3_check_scalars(
    of_meter_stats_request_t *obj, int value);

extern int of_nicira_header_OF_VERSION_1_3_populate(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_3_check(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_3_populate_scalars(
    of_nicira_header_t *obj, int value);
extern int of_nicira_header_OF_VERSION_1_3_check_scalars(
    of_nicira_header_t *obj, int value);

extern int of_packet_in_OF_VERSION_1_3_populate(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_3_check(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_3_populate_scalars(
    of_packet_in_t *obj, int value);
extern int of_packet_in_OF_VERSION_1_3_check_scalars(
    of_packet_in_t *obj, int value);

extern int of_packet_out_OF_VERSION_1_3_populate(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_3_check(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_3_populate_scalars(
    of_packet_out_t *obj, int value);
extern int of_packet_out_OF_VERSION_1_3_check_scalars(
    of_packet_out_t *obj, int value);

extern int of_port_desc_stats_reply_OF_VERSION_1_3_populate(
    of_port_desc_stats_reply_t *obj, int value);
extern int of_port_desc_stats_reply_OF_VERSION_1_3_check(
    of_port_desc_stats_reply_t *obj, int value);
extern int of_port_desc_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_port_desc_stats_reply_t *obj, int value);
extern int of_port_desc_stats_reply_OF_VERSION_1_3_check_scalars(
    of_port_desc_stats_reply_t *obj, int value);

extern int of_port_desc_stats_request_OF_VERSION_1_3_populate(
    of_port_desc_stats_request_t *obj, int value);
extern int of_port_desc_stats_request_OF_VERSION_1_3_check(
    of_port_desc_stats_request_t *obj, int value);
extern int of_port_desc_stats_request_OF_VERSION_1_3_populate_scalars(
    of_port_desc_stats_request_t *obj, int value);
extern int of_port_desc_stats_request_OF_VERSION_1_3_check_scalars(
    of_port_desc_stats_request_t *obj, int value);

extern int of_port_mod_OF_VERSION_1_3_populate(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_3_check(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_3_populate_scalars(
    of_port_mod_t *obj, int value);
extern int of_port_mod_OF_VERSION_1_3_check_scalars(
    of_port_mod_t *obj, int value);

extern int of_port_mod_failed_error_msg_OF_VERSION_1_3_populate(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_3_check(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);
extern int of_port_mod_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_port_mod_failed_error_msg_t *obj, int value);

extern int of_port_stats_reply_OF_VERSION_1_3_populate(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_3_check(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_port_stats_reply_t *obj, int value);
extern int of_port_stats_reply_OF_VERSION_1_3_check_scalars(
    of_port_stats_reply_t *obj, int value);

extern int of_port_stats_request_OF_VERSION_1_3_populate(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_3_check(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_3_populate_scalars(
    of_port_stats_request_t *obj, int value);
extern int of_port_stats_request_OF_VERSION_1_3_check_scalars(
    of_port_stats_request_t *obj, int value);

extern int of_port_status_OF_VERSION_1_3_populate(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_3_check(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_3_populate_scalars(
    of_port_status_t *obj, int value);
extern int of_port_status_OF_VERSION_1_3_check_scalars(
    of_port_status_t *obj, int value);

extern int of_queue_get_config_reply_OF_VERSION_1_3_populate(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_3_check(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_3_populate_scalars(
    of_queue_get_config_reply_t *obj, int value);
extern int of_queue_get_config_reply_OF_VERSION_1_3_check_scalars(
    of_queue_get_config_reply_t *obj, int value);

extern int of_queue_get_config_request_OF_VERSION_1_3_populate(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_3_check(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_3_populate_scalars(
    of_queue_get_config_request_t *obj, int value);
extern int of_queue_get_config_request_OF_VERSION_1_3_check_scalars(
    of_queue_get_config_request_t *obj, int value);

extern int of_queue_op_failed_error_msg_OF_VERSION_1_3_populate(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_3_check(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);
extern int of_queue_op_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_queue_op_failed_error_msg_t *obj, int value);

extern int of_queue_stats_reply_OF_VERSION_1_3_populate(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_3_check(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_queue_stats_reply_t *obj, int value);
extern int of_queue_stats_reply_OF_VERSION_1_3_check_scalars(
    of_queue_stats_reply_t *obj, int value);

extern int of_queue_stats_request_OF_VERSION_1_3_populate(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_3_check(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_3_populate_scalars(
    of_queue_stats_request_t *obj, int value);
extern int of_queue_stats_request_OF_VERSION_1_3_check_scalars(
    of_queue_stats_request_t *obj, int value);

extern int of_role_reply_OF_VERSION_1_3_populate(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_3_check(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_3_populate_scalars(
    of_role_reply_t *obj, int value);
extern int of_role_reply_OF_VERSION_1_3_check_scalars(
    of_role_reply_t *obj, int value);

extern int of_role_request_OF_VERSION_1_3_populate(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_3_check(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_3_populate_scalars(
    of_role_request_t *obj, int value);
extern int of_role_request_OF_VERSION_1_3_check_scalars(
    of_role_request_t *obj, int value);

extern int of_role_request_failed_error_msg_OF_VERSION_1_3_populate(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_3_check(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_role_request_failed_error_msg_t *obj, int value);
extern int of_role_request_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_role_request_failed_error_msg_t *obj, int value);

extern int of_set_config_OF_VERSION_1_3_populate(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_3_check(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_3_populate_scalars(
    of_set_config_t *obj, int value);
extern int of_set_config_OF_VERSION_1_3_check_scalars(
    of_set_config_t *obj, int value);

extern int of_stats_reply_OF_VERSION_1_3_populate(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_3_check(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_stats_reply_t *obj, int value);
extern int of_stats_reply_OF_VERSION_1_3_check_scalars(
    of_stats_reply_t *obj, int value);

extern int of_stats_request_OF_VERSION_1_3_populate(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_3_check(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_3_populate_scalars(
    of_stats_request_t *obj, int value);
extern int of_stats_request_OF_VERSION_1_3_check_scalars(
    of_stats_request_t *obj, int value);

extern int of_switch_config_failed_error_msg_OF_VERSION_1_3_populate(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_3_check(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);
extern int of_switch_config_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_switch_config_failed_error_msg_t *obj, int value);

extern int of_table_features_failed_error_msg_OF_VERSION_1_3_populate(
    of_table_features_failed_error_msg_t *obj, int value);
extern int of_table_features_failed_error_msg_OF_VERSION_1_3_check(
    of_table_features_failed_error_msg_t *obj, int value);
extern int of_table_features_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_table_features_failed_error_msg_t *obj, int value);
extern int of_table_features_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_table_features_failed_error_msg_t *obj, int value);

extern int of_table_features_stats_reply_OF_VERSION_1_3_populate(
    of_table_features_stats_reply_t *obj, int value);
extern int of_table_features_stats_reply_OF_VERSION_1_3_check(
    of_table_features_stats_reply_t *obj, int value);
extern int of_table_features_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_table_features_stats_reply_t *obj, int value);
extern int of_table_features_stats_reply_OF_VERSION_1_3_check_scalars(
    of_table_features_stats_reply_t *obj, int value);

extern int of_table_features_stats_request_OF_VERSION_1_3_populate(
    of_table_features_stats_request_t *obj, int value);
extern int of_table_features_stats_request_OF_VERSION_1_3_check(
    of_table_features_stats_request_t *obj, int value);
extern int of_table_features_stats_request_OF_VERSION_1_3_populate_scalars(
    of_table_features_stats_request_t *obj, int value);
extern int of_table_features_stats_request_OF_VERSION_1_3_check_scalars(
    of_table_features_stats_request_t *obj, int value);

extern int of_table_mod_OF_VERSION_1_3_populate(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_3_check(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_3_populate_scalars(
    of_table_mod_t *obj, int value);
extern int of_table_mod_OF_VERSION_1_3_check_scalars(
    of_table_mod_t *obj, int value);

extern int of_table_mod_failed_error_msg_OF_VERSION_1_3_populate(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_3_check(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_3_populate_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);
extern int of_table_mod_failed_error_msg_OF_VERSION_1_3_check_scalars(
    of_table_mod_failed_error_msg_t *obj, int value);

extern int of_table_stats_reply_OF_VERSION_1_3_populate(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_3_check(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_3_populate_scalars(
    of_table_stats_reply_t *obj, int value);
extern int of_table_stats_reply_OF_VERSION_1_3_check_scalars(
    of_table_stats_reply_t *obj, int value);

extern int of_table_stats_request_OF_VERSION_1_3_populate(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_3_check(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_3_populate_scalars(
    of_table_stats_request_t *obj, int value);
extern int of_table_stats_request_OF_VERSION_1_3_check_scalars(
    of_table_stats_request_t *obj, int value);

extern int of_action_bsn_OF_VERSION_1_3_populate(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_3_check(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_3_populate_scalars(
    of_action_bsn_t *obj, int value);
extern int of_action_bsn_OF_VERSION_1_3_check_scalars(
    of_action_bsn_t *obj, int value);

extern int of_action_bsn_mirror_OF_VERSION_1_3_populate(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_3_check(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_3_populate_scalars(
    of_action_bsn_mirror_t *obj, int value);
extern int of_action_bsn_mirror_OF_VERSION_1_3_check_scalars(
    of_action_bsn_mirror_t *obj, int value);

extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_3_populate(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_3_check(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_3_populate_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_bsn_set_tunnel_dst_OF_VERSION_1_3_check_scalars(
    of_action_bsn_set_tunnel_dst_t *obj, int value);

extern int of_action_copy_ttl_in_OF_VERSION_1_3_populate(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_3_check(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_3_populate_scalars(
    of_action_copy_ttl_in_t *obj, int value);
extern int of_action_copy_ttl_in_OF_VERSION_1_3_check_scalars(
    of_action_copy_ttl_in_t *obj, int value);

extern int of_action_copy_ttl_out_OF_VERSION_1_3_populate(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_3_check(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_3_populate_scalars(
    of_action_copy_ttl_out_t *obj, int value);
extern int of_action_copy_ttl_out_OF_VERSION_1_3_check_scalars(
    of_action_copy_ttl_out_t *obj, int value);

extern int of_action_dec_mpls_ttl_OF_VERSION_1_3_populate(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_3_check(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);
extern int of_action_dec_mpls_ttl_OF_VERSION_1_3_check_scalars(
    of_action_dec_mpls_ttl_t *obj, int value);

extern int of_action_dec_nw_ttl_OF_VERSION_1_3_populate(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_3_check(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_dec_nw_ttl_t *obj, int value);
extern int of_action_dec_nw_ttl_OF_VERSION_1_3_check_scalars(
    of_action_dec_nw_ttl_t *obj, int value);

extern int of_action_experimenter_OF_VERSION_1_3_populate(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_3_check(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_3_populate_scalars(
    of_action_experimenter_t *obj, int value);
extern int of_action_experimenter_OF_VERSION_1_3_check_scalars(
    of_action_experimenter_t *obj, int value);

extern int of_action_group_OF_VERSION_1_3_populate(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_3_check(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_3_populate_scalars(
    of_action_group_t *obj, int value);
extern int of_action_group_OF_VERSION_1_3_check_scalars(
    of_action_group_t *obj, int value);

extern int of_action_header_OF_VERSION_1_3_populate(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_3_check(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_3_populate_scalars(
    of_action_header_t *obj, int value);
extern int of_action_header_OF_VERSION_1_3_check_scalars(
    of_action_header_t *obj, int value);

extern int of_action_id_bsn_OF_VERSION_1_3_populate(
    of_action_id_bsn_t *obj, int value);
extern int of_action_id_bsn_OF_VERSION_1_3_check(
    of_action_id_bsn_t *obj, int value);
extern int of_action_id_bsn_OF_VERSION_1_3_populate_scalars(
    of_action_id_bsn_t *obj, int value);
extern int of_action_id_bsn_OF_VERSION_1_3_check_scalars(
    of_action_id_bsn_t *obj, int value);

extern int of_action_id_bsn_mirror_OF_VERSION_1_3_populate(
    of_action_id_bsn_mirror_t *obj, int value);
extern int of_action_id_bsn_mirror_OF_VERSION_1_3_check(
    of_action_id_bsn_mirror_t *obj, int value);
extern int of_action_id_bsn_mirror_OF_VERSION_1_3_populate_scalars(
    of_action_id_bsn_mirror_t *obj, int value);
extern int of_action_id_bsn_mirror_OF_VERSION_1_3_check_scalars(
    of_action_id_bsn_mirror_t *obj, int value);

extern int of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3_populate(
    of_action_id_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3_check(
    of_action_id_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3_populate_scalars(
    of_action_id_bsn_set_tunnel_dst_t *obj, int value);
extern int of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3_check_scalars(
    of_action_id_bsn_set_tunnel_dst_t *obj, int value);

extern int of_action_id_copy_ttl_in_OF_VERSION_1_3_populate(
    of_action_id_copy_ttl_in_t *obj, int value);
extern int of_action_id_copy_ttl_in_OF_VERSION_1_3_check(
    of_action_id_copy_ttl_in_t *obj, int value);
extern int of_action_id_copy_ttl_in_OF_VERSION_1_3_populate_scalars(
    of_action_id_copy_ttl_in_t *obj, int value);
extern int of_action_id_copy_ttl_in_OF_VERSION_1_3_check_scalars(
    of_action_id_copy_ttl_in_t *obj, int value);

extern int of_action_id_copy_ttl_out_OF_VERSION_1_3_populate(
    of_action_id_copy_ttl_out_t *obj, int value);
extern int of_action_id_copy_ttl_out_OF_VERSION_1_3_check(
    of_action_id_copy_ttl_out_t *obj, int value);
extern int of_action_id_copy_ttl_out_OF_VERSION_1_3_populate_scalars(
    of_action_id_copy_ttl_out_t *obj, int value);
extern int of_action_id_copy_ttl_out_OF_VERSION_1_3_check_scalars(
    of_action_id_copy_ttl_out_t *obj, int value);

extern int of_action_id_dec_mpls_ttl_OF_VERSION_1_3_populate(
    of_action_id_dec_mpls_ttl_t *obj, int value);
extern int of_action_id_dec_mpls_ttl_OF_VERSION_1_3_check(
    of_action_id_dec_mpls_ttl_t *obj, int value);
extern int of_action_id_dec_mpls_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_id_dec_mpls_ttl_t *obj, int value);
extern int of_action_id_dec_mpls_ttl_OF_VERSION_1_3_check_scalars(
    of_action_id_dec_mpls_ttl_t *obj, int value);

extern int of_action_id_dec_nw_ttl_OF_VERSION_1_3_populate(
    of_action_id_dec_nw_ttl_t *obj, int value);
extern int of_action_id_dec_nw_ttl_OF_VERSION_1_3_check(
    of_action_id_dec_nw_ttl_t *obj, int value);
extern int of_action_id_dec_nw_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_id_dec_nw_ttl_t *obj, int value);
extern int of_action_id_dec_nw_ttl_OF_VERSION_1_3_check_scalars(
    of_action_id_dec_nw_ttl_t *obj, int value);

extern int of_action_id_experimenter_OF_VERSION_1_3_populate(
    of_action_id_experimenter_t *obj, int value);
extern int of_action_id_experimenter_OF_VERSION_1_3_check(
    of_action_id_experimenter_t *obj, int value);
extern int of_action_id_experimenter_OF_VERSION_1_3_populate_scalars(
    of_action_id_experimenter_t *obj, int value);
extern int of_action_id_experimenter_OF_VERSION_1_3_check_scalars(
    of_action_id_experimenter_t *obj, int value);

extern int of_action_id_group_OF_VERSION_1_3_populate(
    of_action_id_group_t *obj, int value);
extern int of_action_id_group_OF_VERSION_1_3_check(
    of_action_id_group_t *obj, int value);
extern int of_action_id_group_OF_VERSION_1_3_populate_scalars(
    of_action_id_group_t *obj, int value);
extern int of_action_id_group_OF_VERSION_1_3_check_scalars(
    of_action_id_group_t *obj, int value);

extern int of_action_id_header_OF_VERSION_1_3_populate(
    of_action_id_header_t *obj, int value);
extern int of_action_id_header_OF_VERSION_1_3_check(
    of_action_id_header_t *obj, int value);
extern int of_action_id_header_OF_VERSION_1_3_populate_scalars(
    of_action_id_header_t *obj, int value);
extern int of_action_id_header_OF_VERSION_1_3_check_scalars(
    of_action_id_header_t *obj, int value);

extern int of_action_id_nicira_OF_VERSION_1_3_populate(
    of_action_id_nicira_t *obj, int value);
extern int of_action_id_nicira_OF_VERSION_1_3_check(
    of_action_id_nicira_t *obj, int value);
extern int of_action_id_nicira_OF_VERSION_1_3_populate_scalars(
    of_action_id_nicira_t *obj, int value);
extern int of_action_id_nicira_OF_VERSION_1_3_check_scalars(
    of_action_id_nicira_t *obj, int value);

extern int of_action_id_nicira_dec_ttl_OF_VERSION_1_3_populate(
    of_action_id_nicira_dec_ttl_t *obj, int value);
extern int of_action_id_nicira_dec_ttl_OF_VERSION_1_3_check(
    of_action_id_nicira_dec_ttl_t *obj, int value);
extern int of_action_id_nicira_dec_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_id_nicira_dec_ttl_t *obj, int value);
extern int of_action_id_nicira_dec_ttl_OF_VERSION_1_3_check_scalars(
    of_action_id_nicira_dec_ttl_t *obj, int value);

extern int of_action_id_output_OF_VERSION_1_3_populate(
    of_action_id_output_t *obj, int value);
extern int of_action_id_output_OF_VERSION_1_3_check(
    of_action_id_output_t *obj, int value);
extern int of_action_id_output_OF_VERSION_1_3_populate_scalars(
    of_action_id_output_t *obj, int value);
extern int of_action_id_output_OF_VERSION_1_3_check_scalars(
    of_action_id_output_t *obj, int value);

extern int of_action_id_pop_mpls_OF_VERSION_1_3_populate(
    of_action_id_pop_mpls_t *obj, int value);
extern int of_action_id_pop_mpls_OF_VERSION_1_3_check(
    of_action_id_pop_mpls_t *obj, int value);
extern int of_action_id_pop_mpls_OF_VERSION_1_3_populate_scalars(
    of_action_id_pop_mpls_t *obj, int value);
extern int of_action_id_pop_mpls_OF_VERSION_1_3_check_scalars(
    of_action_id_pop_mpls_t *obj, int value);

extern int of_action_id_pop_pbb_OF_VERSION_1_3_populate(
    of_action_id_pop_pbb_t *obj, int value);
extern int of_action_id_pop_pbb_OF_VERSION_1_3_check(
    of_action_id_pop_pbb_t *obj, int value);
extern int of_action_id_pop_pbb_OF_VERSION_1_3_populate_scalars(
    of_action_id_pop_pbb_t *obj, int value);
extern int of_action_id_pop_pbb_OF_VERSION_1_3_check_scalars(
    of_action_id_pop_pbb_t *obj, int value);

extern int of_action_id_pop_vlan_OF_VERSION_1_3_populate(
    of_action_id_pop_vlan_t *obj, int value);
extern int of_action_id_pop_vlan_OF_VERSION_1_3_check(
    of_action_id_pop_vlan_t *obj, int value);
extern int of_action_id_pop_vlan_OF_VERSION_1_3_populate_scalars(
    of_action_id_pop_vlan_t *obj, int value);
extern int of_action_id_pop_vlan_OF_VERSION_1_3_check_scalars(
    of_action_id_pop_vlan_t *obj, int value);

extern int of_action_id_push_mpls_OF_VERSION_1_3_populate(
    of_action_id_push_mpls_t *obj, int value);
extern int of_action_id_push_mpls_OF_VERSION_1_3_check(
    of_action_id_push_mpls_t *obj, int value);
extern int of_action_id_push_mpls_OF_VERSION_1_3_populate_scalars(
    of_action_id_push_mpls_t *obj, int value);
extern int of_action_id_push_mpls_OF_VERSION_1_3_check_scalars(
    of_action_id_push_mpls_t *obj, int value);

extern int of_action_id_push_pbb_OF_VERSION_1_3_populate(
    of_action_id_push_pbb_t *obj, int value);
extern int of_action_id_push_pbb_OF_VERSION_1_3_check(
    of_action_id_push_pbb_t *obj, int value);
extern int of_action_id_push_pbb_OF_VERSION_1_3_populate_scalars(
    of_action_id_push_pbb_t *obj, int value);
extern int of_action_id_push_pbb_OF_VERSION_1_3_check_scalars(
    of_action_id_push_pbb_t *obj, int value);

extern int of_action_id_push_vlan_OF_VERSION_1_3_populate(
    of_action_id_push_vlan_t *obj, int value);
extern int of_action_id_push_vlan_OF_VERSION_1_3_check(
    of_action_id_push_vlan_t *obj, int value);
extern int of_action_id_push_vlan_OF_VERSION_1_3_populate_scalars(
    of_action_id_push_vlan_t *obj, int value);
extern int of_action_id_push_vlan_OF_VERSION_1_3_check_scalars(
    of_action_id_push_vlan_t *obj, int value);

extern int of_action_id_set_field_OF_VERSION_1_3_populate(
    of_action_id_set_field_t *obj, int value);
extern int of_action_id_set_field_OF_VERSION_1_3_check(
    of_action_id_set_field_t *obj, int value);
extern int of_action_id_set_field_OF_VERSION_1_3_populate_scalars(
    of_action_id_set_field_t *obj, int value);
extern int of_action_id_set_field_OF_VERSION_1_3_check_scalars(
    of_action_id_set_field_t *obj, int value);

extern int of_action_id_set_mpls_ttl_OF_VERSION_1_3_populate(
    of_action_id_set_mpls_ttl_t *obj, int value);
extern int of_action_id_set_mpls_ttl_OF_VERSION_1_3_check(
    of_action_id_set_mpls_ttl_t *obj, int value);
extern int of_action_id_set_mpls_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_id_set_mpls_ttl_t *obj, int value);
extern int of_action_id_set_mpls_ttl_OF_VERSION_1_3_check_scalars(
    of_action_id_set_mpls_ttl_t *obj, int value);

extern int of_action_id_set_nw_ttl_OF_VERSION_1_3_populate(
    of_action_id_set_nw_ttl_t *obj, int value);
extern int of_action_id_set_nw_ttl_OF_VERSION_1_3_check(
    of_action_id_set_nw_ttl_t *obj, int value);
extern int of_action_id_set_nw_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_id_set_nw_ttl_t *obj, int value);
extern int of_action_id_set_nw_ttl_OF_VERSION_1_3_check_scalars(
    of_action_id_set_nw_ttl_t *obj, int value);

extern int of_action_id_set_queue_OF_VERSION_1_3_populate(
    of_action_id_set_queue_t *obj, int value);
extern int of_action_id_set_queue_OF_VERSION_1_3_check(
    of_action_id_set_queue_t *obj, int value);
extern int of_action_id_set_queue_OF_VERSION_1_3_populate_scalars(
    of_action_id_set_queue_t *obj, int value);
extern int of_action_id_set_queue_OF_VERSION_1_3_check_scalars(
    of_action_id_set_queue_t *obj, int value);

extern int of_action_nicira_OF_VERSION_1_3_populate(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_3_check(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_3_populate_scalars(
    of_action_nicira_t *obj, int value);
extern int of_action_nicira_OF_VERSION_1_3_check_scalars(
    of_action_nicira_t *obj, int value);

extern int of_action_nicira_dec_ttl_OF_VERSION_1_3_populate(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_3_check(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);
extern int of_action_nicira_dec_ttl_OF_VERSION_1_3_check_scalars(
    of_action_nicira_dec_ttl_t *obj, int value);

extern int of_action_output_OF_VERSION_1_3_populate(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_3_check(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_3_populate_scalars(
    of_action_output_t *obj, int value);
extern int of_action_output_OF_VERSION_1_3_check_scalars(
    of_action_output_t *obj, int value);

extern int of_action_pop_mpls_OF_VERSION_1_3_populate(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_3_check(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_3_populate_scalars(
    of_action_pop_mpls_t *obj, int value);
extern int of_action_pop_mpls_OF_VERSION_1_3_check_scalars(
    of_action_pop_mpls_t *obj, int value);

extern int of_action_pop_pbb_OF_VERSION_1_3_populate(
    of_action_pop_pbb_t *obj, int value);
extern int of_action_pop_pbb_OF_VERSION_1_3_check(
    of_action_pop_pbb_t *obj, int value);
extern int of_action_pop_pbb_OF_VERSION_1_3_populate_scalars(
    of_action_pop_pbb_t *obj, int value);
extern int of_action_pop_pbb_OF_VERSION_1_3_check_scalars(
    of_action_pop_pbb_t *obj, int value);

extern int of_action_pop_vlan_OF_VERSION_1_3_populate(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_3_check(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_3_populate_scalars(
    of_action_pop_vlan_t *obj, int value);
extern int of_action_pop_vlan_OF_VERSION_1_3_check_scalars(
    of_action_pop_vlan_t *obj, int value);

extern int of_action_push_mpls_OF_VERSION_1_3_populate(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_3_check(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_3_populate_scalars(
    of_action_push_mpls_t *obj, int value);
extern int of_action_push_mpls_OF_VERSION_1_3_check_scalars(
    of_action_push_mpls_t *obj, int value);

extern int of_action_push_pbb_OF_VERSION_1_3_populate(
    of_action_push_pbb_t *obj, int value);
extern int of_action_push_pbb_OF_VERSION_1_3_check(
    of_action_push_pbb_t *obj, int value);
extern int of_action_push_pbb_OF_VERSION_1_3_populate_scalars(
    of_action_push_pbb_t *obj, int value);
extern int of_action_push_pbb_OF_VERSION_1_3_check_scalars(
    of_action_push_pbb_t *obj, int value);

extern int of_action_push_vlan_OF_VERSION_1_3_populate(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_3_check(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_3_populate_scalars(
    of_action_push_vlan_t *obj, int value);
extern int of_action_push_vlan_OF_VERSION_1_3_check_scalars(
    of_action_push_vlan_t *obj, int value);

extern int of_action_set_field_OF_VERSION_1_3_populate(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_3_check(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_3_populate_scalars(
    of_action_set_field_t *obj, int value);
extern int of_action_set_field_OF_VERSION_1_3_check_scalars(
    of_action_set_field_t *obj, int value);

extern int of_action_set_mpls_ttl_OF_VERSION_1_3_populate(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_3_check(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_set_mpls_ttl_t *obj, int value);
extern int of_action_set_mpls_ttl_OF_VERSION_1_3_check_scalars(
    of_action_set_mpls_ttl_t *obj, int value);

extern int of_action_set_nw_ttl_OF_VERSION_1_3_populate(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_3_check(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_3_populate_scalars(
    of_action_set_nw_ttl_t *obj, int value);
extern int of_action_set_nw_ttl_OF_VERSION_1_3_check_scalars(
    of_action_set_nw_ttl_t *obj, int value);

extern int of_action_set_queue_OF_VERSION_1_3_populate(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_3_check(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_3_populate_scalars(
    of_action_set_queue_t *obj, int value);
extern int of_action_set_queue_OF_VERSION_1_3_check_scalars(
    of_action_set_queue_t *obj, int value);

extern int of_bsn_interface_OF_VERSION_1_3_populate(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_3_check(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_3_populate_scalars(
    of_bsn_interface_t *obj, int value);
extern int of_bsn_interface_OF_VERSION_1_3_check_scalars(
    of_bsn_interface_t *obj, int value);

extern int of_bsn_lacp_stats_entry_OF_VERSION_1_3_populate(
    of_bsn_lacp_stats_entry_t *obj, int value);
extern int of_bsn_lacp_stats_entry_OF_VERSION_1_3_check(
    of_bsn_lacp_stats_entry_t *obj, int value);
extern int of_bsn_lacp_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_bsn_lacp_stats_entry_t *obj, int value);
extern int of_bsn_lacp_stats_entry_OF_VERSION_1_3_check_scalars(
    of_bsn_lacp_stats_entry_t *obj, int value);

extern int of_bsn_vport_header_OF_VERSION_1_3_populate(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_3_check(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_3_populate_scalars(
    of_bsn_vport_header_t *obj, int value);
extern int of_bsn_vport_header_OF_VERSION_1_3_check_scalars(
    of_bsn_vport_header_t *obj, int value);

extern int of_bsn_vport_q_in_q_OF_VERSION_1_3_populate(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_3_check(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_3_populate_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);
extern int of_bsn_vport_q_in_q_OF_VERSION_1_3_check_scalars(
    of_bsn_vport_q_in_q_t *obj, int value);

extern int of_bucket_OF_VERSION_1_3_populate(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_3_check(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_3_populate_scalars(
    of_bucket_t *obj, int value);
extern int of_bucket_OF_VERSION_1_3_check_scalars(
    of_bucket_t *obj, int value);

extern int of_bucket_counter_OF_VERSION_1_3_populate(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_3_check(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_3_populate_scalars(
    of_bucket_counter_t *obj, int value);
extern int of_bucket_counter_OF_VERSION_1_3_check_scalars(
    of_bucket_counter_t *obj, int value);

extern int of_experimenter_stats_header_OF_VERSION_1_3_populate(
    of_experimenter_stats_header_t *obj, int value);
extern int of_experimenter_stats_header_OF_VERSION_1_3_check(
    of_experimenter_stats_header_t *obj, int value);
extern int of_experimenter_stats_header_OF_VERSION_1_3_populate_scalars(
    of_experimenter_stats_header_t *obj, int value);
extern int of_experimenter_stats_header_OF_VERSION_1_3_check_scalars(
    of_experimenter_stats_header_t *obj, int value);

extern int of_flow_stats_entry_OF_VERSION_1_3_populate(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_3_check(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_flow_stats_entry_t *obj, int value);
extern int of_flow_stats_entry_OF_VERSION_1_3_check_scalars(
    of_flow_stats_entry_t *obj, int value);

extern int of_group_desc_stats_entry_OF_VERSION_1_3_populate(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_3_check(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_group_desc_stats_entry_t *obj, int value);
extern int of_group_desc_stats_entry_OF_VERSION_1_3_check_scalars(
    of_group_desc_stats_entry_t *obj, int value);

extern int of_group_stats_entry_OF_VERSION_1_3_populate(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_3_check(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_group_stats_entry_t *obj, int value);
extern int of_group_stats_entry_OF_VERSION_1_3_check_scalars(
    of_group_stats_entry_t *obj, int value);

extern int of_header_OF_VERSION_1_3_populate(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_3_check(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_3_populate_scalars(
    of_header_t *obj, int value);
extern int of_header_OF_VERSION_1_3_check_scalars(
    of_header_t *obj, int value);

extern int of_hello_elem_header_OF_VERSION_1_3_populate(
    of_hello_elem_header_t *obj, int value);
extern int of_hello_elem_header_OF_VERSION_1_3_check(
    of_hello_elem_header_t *obj, int value);
extern int of_hello_elem_header_OF_VERSION_1_3_populate_scalars(
    of_hello_elem_header_t *obj, int value);
extern int of_hello_elem_header_OF_VERSION_1_3_check_scalars(
    of_hello_elem_header_t *obj, int value);

extern int of_hello_elem_versionbitmap_OF_VERSION_1_3_populate(
    of_hello_elem_versionbitmap_t *obj, int value);
extern int of_hello_elem_versionbitmap_OF_VERSION_1_3_check(
    of_hello_elem_versionbitmap_t *obj, int value);
extern int of_hello_elem_versionbitmap_OF_VERSION_1_3_populate_scalars(
    of_hello_elem_versionbitmap_t *obj, int value);
extern int of_hello_elem_versionbitmap_OF_VERSION_1_3_check_scalars(
    of_hello_elem_versionbitmap_t *obj, int value);

extern int of_instruction_apply_actions_OF_VERSION_1_3_populate(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_3_check(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_3_populate_scalars(
    of_instruction_apply_actions_t *obj, int value);
extern int of_instruction_apply_actions_OF_VERSION_1_3_check_scalars(
    of_instruction_apply_actions_t *obj, int value);

extern int of_instruction_bsn_OF_VERSION_1_3_populate(
    of_instruction_bsn_t *obj, int value);
extern int of_instruction_bsn_OF_VERSION_1_3_check(
    of_instruction_bsn_t *obj, int value);
extern int of_instruction_bsn_OF_VERSION_1_3_populate_scalars(
    of_instruction_bsn_t *obj, int value);
extern int of_instruction_bsn_OF_VERSION_1_3_check_scalars(
    of_instruction_bsn_t *obj, int value);

extern int of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3_populate(
    of_instruction_bsn_disable_src_mac_check_t *obj, int value);
extern int of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3_check(
    of_instruction_bsn_disable_src_mac_check_t *obj, int value);
extern int of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3_populate_scalars(
    of_instruction_bsn_disable_src_mac_check_t *obj, int value);
extern int of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3_check_scalars(
    of_instruction_bsn_disable_src_mac_check_t *obj, int value);

extern int of_instruction_clear_actions_OF_VERSION_1_3_populate(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_3_check(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_3_populate_scalars(
    of_instruction_clear_actions_t *obj, int value);
extern int of_instruction_clear_actions_OF_VERSION_1_3_check_scalars(
    of_instruction_clear_actions_t *obj, int value);

extern int of_instruction_experimenter_OF_VERSION_1_3_populate(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_3_check(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_3_populate_scalars(
    of_instruction_experimenter_t *obj, int value);
extern int of_instruction_experimenter_OF_VERSION_1_3_check_scalars(
    of_instruction_experimenter_t *obj, int value);

extern int of_instruction_goto_table_OF_VERSION_1_3_populate(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_3_check(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_3_populate_scalars(
    of_instruction_goto_table_t *obj, int value);
extern int of_instruction_goto_table_OF_VERSION_1_3_check_scalars(
    of_instruction_goto_table_t *obj, int value);

extern int of_instruction_header_OF_VERSION_1_3_populate(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_3_check(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_3_populate_scalars(
    of_instruction_header_t *obj, int value);
extern int of_instruction_header_OF_VERSION_1_3_check_scalars(
    of_instruction_header_t *obj, int value);

extern int of_instruction_meter_OF_VERSION_1_3_populate(
    of_instruction_meter_t *obj, int value);
extern int of_instruction_meter_OF_VERSION_1_3_check(
    of_instruction_meter_t *obj, int value);
extern int of_instruction_meter_OF_VERSION_1_3_populate_scalars(
    of_instruction_meter_t *obj, int value);
extern int of_instruction_meter_OF_VERSION_1_3_check_scalars(
    of_instruction_meter_t *obj, int value);

extern int of_instruction_write_actions_OF_VERSION_1_3_populate(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_3_check(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_3_populate_scalars(
    of_instruction_write_actions_t *obj, int value);
extern int of_instruction_write_actions_OF_VERSION_1_3_check_scalars(
    of_instruction_write_actions_t *obj, int value);

extern int of_instruction_write_metadata_OF_VERSION_1_3_populate(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_3_check(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_3_populate_scalars(
    of_instruction_write_metadata_t *obj, int value);
extern int of_instruction_write_metadata_OF_VERSION_1_3_check_scalars(
    of_instruction_write_metadata_t *obj, int value);

extern int of_match_v3_OF_VERSION_1_3_populate(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_3_check(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_3_populate_scalars(
    of_match_v3_t *obj, int value);
extern int of_match_v3_OF_VERSION_1_3_check_scalars(
    of_match_v3_t *obj, int value);

extern int of_meter_band_drop_OF_VERSION_1_3_populate(
    of_meter_band_drop_t *obj, int value);
extern int of_meter_band_drop_OF_VERSION_1_3_check(
    of_meter_band_drop_t *obj, int value);
extern int of_meter_band_drop_OF_VERSION_1_3_populate_scalars(
    of_meter_band_drop_t *obj, int value);
extern int of_meter_band_drop_OF_VERSION_1_3_check_scalars(
    of_meter_band_drop_t *obj, int value);

extern int of_meter_band_dscp_remark_OF_VERSION_1_3_populate(
    of_meter_band_dscp_remark_t *obj, int value);
extern int of_meter_band_dscp_remark_OF_VERSION_1_3_check(
    of_meter_band_dscp_remark_t *obj, int value);
extern int of_meter_band_dscp_remark_OF_VERSION_1_3_populate_scalars(
    of_meter_band_dscp_remark_t *obj, int value);
extern int of_meter_band_dscp_remark_OF_VERSION_1_3_check_scalars(
    of_meter_band_dscp_remark_t *obj, int value);

extern int of_meter_band_experimenter_OF_VERSION_1_3_populate(
    of_meter_band_experimenter_t *obj, int value);
extern int of_meter_band_experimenter_OF_VERSION_1_3_check(
    of_meter_band_experimenter_t *obj, int value);
extern int of_meter_band_experimenter_OF_VERSION_1_3_populate_scalars(
    of_meter_band_experimenter_t *obj, int value);
extern int of_meter_band_experimenter_OF_VERSION_1_3_check_scalars(
    of_meter_band_experimenter_t *obj, int value);

extern int of_meter_band_header_OF_VERSION_1_3_populate(
    of_meter_band_header_t *obj, int value);
extern int of_meter_band_header_OF_VERSION_1_3_check(
    of_meter_band_header_t *obj, int value);
extern int of_meter_band_header_OF_VERSION_1_3_populate_scalars(
    of_meter_band_header_t *obj, int value);
extern int of_meter_band_header_OF_VERSION_1_3_check_scalars(
    of_meter_band_header_t *obj, int value);

extern int of_meter_band_stats_OF_VERSION_1_3_populate(
    of_meter_band_stats_t *obj, int value);
extern int of_meter_band_stats_OF_VERSION_1_3_check(
    of_meter_band_stats_t *obj, int value);
extern int of_meter_band_stats_OF_VERSION_1_3_populate_scalars(
    of_meter_band_stats_t *obj, int value);
extern int of_meter_band_stats_OF_VERSION_1_3_check_scalars(
    of_meter_band_stats_t *obj, int value);

extern int of_meter_config_OF_VERSION_1_3_populate(
    of_meter_config_t *obj, int value);
extern int of_meter_config_OF_VERSION_1_3_check(
    of_meter_config_t *obj, int value);
extern int of_meter_config_OF_VERSION_1_3_populate_scalars(
    of_meter_config_t *obj, int value);
extern int of_meter_config_OF_VERSION_1_3_check_scalars(
    of_meter_config_t *obj, int value);

extern int of_meter_features_OF_VERSION_1_3_populate(
    of_meter_features_t *obj, int value);
extern int of_meter_features_OF_VERSION_1_3_check(
    of_meter_features_t *obj, int value);
extern int of_meter_features_OF_VERSION_1_3_populate_scalars(
    of_meter_features_t *obj, int value);
extern int of_meter_features_OF_VERSION_1_3_check_scalars(
    of_meter_features_t *obj, int value);

extern int of_meter_stats_OF_VERSION_1_3_populate(
    of_meter_stats_t *obj, int value);
extern int of_meter_stats_OF_VERSION_1_3_check(
    of_meter_stats_t *obj, int value);
extern int of_meter_stats_OF_VERSION_1_3_populate_scalars(
    of_meter_stats_t *obj, int value);
extern int of_meter_stats_OF_VERSION_1_3_check_scalars(
    of_meter_stats_t *obj, int value);

extern int of_oxm_arp_op_OF_VERSION_1_3_populate(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_3_check(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_op_t *obj, int value);
extern int of_oxm_arp_op_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_op_t *obj, int value);

extern int of_oxm_arp_op_masked_OF_VERSION_1_3_populate(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_3_check(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_op_masked_t *obj, int value);
extern int of_oxm_arp_op_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_op_masked_t *obj, int value);

extern int of_oxm_arp_sha_OF_VERSION_1_3_populate(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_3_check(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_sha_t *obj, int value);
extern int of_oxm_arp_sha_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_sha_t *obj, int value);

extern int of_oxm_arp_sha_masked_OF_VERSION_1_3_populate(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_3_check(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_sha_masked_t *obj, int value);
extern int of_oxm_arp_sha_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_sha_masked_t *obj, int value);

extern int of_oxm_arp_spa_OF_VERSION_1_3_populate(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_3_check(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_spa_t *obj, int value);
extern int of_oxm_arp_spa_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_spa_t *obj, int value);

extern int of_oxm_arp_spa_masked_OF_VERSION_1_3_populate(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_3_check(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_spa_masked_t *obj, int value);
extern int of_oxm_arp_spa_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_spa_masked_t *obj, int value);

extern int of_oxm_arp_tha_OF_VERSION_1_3_populate(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_3_check(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_tha_t *obj, int value);
extern int of_oxm_arp_tha_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_tha_t *obj, int value);

extern int of_oxm_arp_tha_masked_OF_VERSION_1_3_populate(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_3_check(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_tha_masked_t *obj, int value);
extern int of_oxm_arp_tha_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_tha_masked_t *obj, int value);

extern int of_oxm_arp_tpa_OF_VERSION_1_3_populate(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_3_check(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_tpa_t *obj, int value);
extern int of_oxm_arp_tpa_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_tpa_t *obj, int value);

extern int of_oxm_arp_tpa_masked_OF_VERSION_1_3_populate(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_3_check(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_arp_tpa_masked_t *obj, int value);
extern int of_oxm_arp_tpa_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_arp_tpa_masked_t *obj, int value);

extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3_populate(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3_check(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_global_vrf_allowed_t *obj, int value);

extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);
extern int of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj, int value);

extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_3_populate(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_3_check(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_in_ports_128_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_in_ports_128_t *obj, int value);

extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);
extern int of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_in_ports_128_masked_t *obj, int value);

extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_dst_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_interface_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_src_class_id_t *obj, int value);

extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);
extern int of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_l3_src_class_id_masked_t *obj, int value);

extern int of_oxm_bsn_lag_id_OF_VERSION_1_3_populate(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_3_check(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_lag_id_t *obj, int value);
extern int of_oxm_bsn_lag_id_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_lag_id_t *obj, int value);

extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_lag_id_masked_t *obj, int value);
extern int of_oxm_bsn_lag_id_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_lag_id_masked_t *obj, int value);

extern int of_oxm_bsn_vrf_OF_VERSION_1_3_populate(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_3_check(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_vrf_t *obj, int value);
extern int of_oxm_bsn_vrf_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_vrf_t *obj, int value);

extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_3_populate(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_3_check(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_bsn_vrf_masked_t *obj, int value);
extern int of_oxm_bsn_vrf_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_bsn_vrf_masked_t *obj, int value);

extern int of_oxm_eth_dst_OF_VERSION_1_3_populate(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_3_check(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_dst_t *obj, int value);
extern int of_oxm_eth_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_dst_t *obj, int value);

extern int of_oxm_eth_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_3_check(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_dst_masked_t *obj, int value);
extern int of_oxm_eth_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_dst_masked_t *obj, int value);

extern int of_oxm_eth_src_OF_VERSION_1_3_populate(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_3_check(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_src_t *obj, int value);
extern int of_oxm_eth_src_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_src_t *obj, int value);

extern int of_oxm_eth_src_masked_OF_VERSION_1_3_populate(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_3_check(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_src_masked_t *obj, int value);
extern int of_oxm_eth_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_src_masked_t *obj, int value);

extern int of_oxm_eth_type_OF_VERSION_1_3_populate(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_3_check(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_type_t *obj, int value);
extern int of_oxm_eth_type_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_type_t *obj, int value);

extern int of_oxm_eth_type_masked_OF_VERSION_1_3_populate(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_3_check(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_eth_type_masked_t *obj, int value);
extern int of_oxm_eth_type_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_eth_type_masked_t *obj, int value);

extern int of_oxm_header_OF_VERSION_1_3_populate(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_3_check(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_3_populate_scalars(
    of_oxm_header_t *obj, int value);
extern int of_oxm_header_OF_VERSION_1_3_check_scalars(
    of_oxm_header_t *obj, int value);

extern int of_oxm_icmpv4_code_OF_VERSION_1_3_populate(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_3_check(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv4_code_t *obj, int value);
extern int of_oxm_icmpv4_code_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv4_code_t *obj, int value);

extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_3_populate(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_3_check(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv4_code_masked_t *obj, int value);
extern int of_oxm_icmpv4_code_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv4_code_masked_t *obj, int value);

extern int of_oxm_icmpv4_type_OF_VERSION_1_3_populate(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_3_check(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv4_type_t *obj, int value);
extern int of_oxm_icmpv4_type_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv4_type_t *obj, int value);

extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_3_populate(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_3_check(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv4_type_masked_t *obj, int value);
extern int of_oxm_icmpv4_type_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv4_type_masked_t *obj, int value);

extern int of_oxm_icmpv6_code_OF_VERSION_1_3_populate(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_3_check(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv6_code_t *obj, int value);
extern int of_oxm_icmpv6_code_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv6_code_t *obj, int value);

extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_3_populate(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_3_check(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv6_code_masked_t *obj, int value);
extern int of_oxm_icmpv6_code_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv6_code_masked_t *obj, int value);

extern int of_oxm_icmpv6_type_OF_VERSION_1_3_populate(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_3_check(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv6_type_t *obj, int value);
extern int of_oxm_icmpv6_type_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv6_type_t *obj, int value);

extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_3_populate(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_3_check(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_icmpv6_type_masked_t *obj, int value);
extern int of_oxm_icmpv6_type_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_icmpv6_type_masked_t *obj, int value);

extern int of_oxm_in_phy_port_OF_VERSION_1_3_populate(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_3_check(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_3_populate_scalars(
    of_oxm_in_phy_port_t *obj, int value);
extern int of_oxm_in_phy_port_OF_VERSION_1_3_check_scalars(
    of_oxm_in_phy_port_t *obj, int value);

extern int of_oxm_in_phy_port_masked_OF_VERSION_1_3_populate(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_3_check(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_in_phy_port_masked_t *obj, int value);
extern int of_oxm_in_phy_port_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_in_phy_port_masked_t *obj, int value);

extern int of_oxm_in_port_OF_VERSION_1_3_populate(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_3_check(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_3_populate_scalars(
    of_oxm_in_port_t *obj, int value);
extern int of_oxm_in_port_OF_VERSION_1_3_check_scalars(
    of_oxm_in_port_t *obj, int value);

extern int of_oxm_in_port_masked_OF_VERSION_1_3_populate(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_3_check(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_in_port_masked_t *obj, int value);
extern int of_oxm_in_port_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_in_port_masked_t *obj, int value);

extern int of_oxm_ip_dscp_OF_VERSION_1_3_populate(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_3_check(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_dscp_t *obj, int value);
extern int of_oxm_ip_dscp_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_dscp_t *obj, int value);

extern int of_oxm_ip_dscp_masked_OF_VERSION_1_3_populate(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_3_check(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_dscp_masked_t *obj, int value);
extern int of_oxm_ip_dscp_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_dscp_masked_t *obj, int value);

extern int of_oxm_ip_ecn_OF_VERSION_1_3_populate(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_3_check(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_ecn_t *obj, int value);
extern int of_oxm_ip_ecn_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_ecn_t *obj, int value);

extern int of_oxm_ip_ecn_masked_OF_VERSION_1_3_populate(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_3_check(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_ecn_masked_t *obj, int value);
extern int of_oxm_ip_ecn_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_ecn_masked_t *obj, int value);

extern int of_oxm_ip_proto_OF_VERSION_1_3_populate(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_3_check(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_proto_t *obj, int value);
extern int of_oxm_ip_proto_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_proto_t *obj, int value);

extern int of_oxm_ip_proto_masked_OF_VERSION_1_3_populate(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_3_check(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ip_proto_masked_t *obj, int value);
extern int of_oxm_ip_proto_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ip_proto_masked_t *obj, int value);

extern int of_oxm_ipv4_dst_OF_VERSION_1_3_populate(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_3_check(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv4_dst_t *obj, int value);
extern int of_oxm_ipv4_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv4_dst_t *obj, int value);

extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_3_check(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv4_dst_masked_t *obj, int value);
extern int of_oxm_ipv4_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv4_dst_masked_t *obj, int value);

extern int of_oxm_ipv4_src_OF_VERSION_1_3_populate(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_3_check(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv4_src_t *obj, int value);
extern int of_oxm_ipv4_src_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv4_src_t *obj, int value);

extern int of_oxm_ipv4_src_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_3_check(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv4_src_masked_t *obj, int value);
extern int of_oxm_ipv4_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv4_src_masked_t *obj, int value);

extern int of_oxm_ipv6_dst_OF_VERSION_1_3_populate(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_3_check(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_dst_t *obj, int value);
extern int of_oxm_ipv6_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_dst_t *obj, int value);

extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_dst_masked_t *obj, int value);
extern int of_oxm_ipv6_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_dst_masked_t *obj, int value);

extern int of_oxm_ipv6_flabel_OF_VERSION_1_3_populate(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_3_check(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_flabel_t *obj, int value);
extern int of_oxm_ipv6_flabel_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_flabel_t *obj, int value);

extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_flabel_masked_t *obj, int value);
extern int of_oxm_ipv6_flabel_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_flabel_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_sll_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_sll_t *obj, int value);

extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_sll_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_target_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_target_t *obj, int value);
extern int of_oxm_ipv6_nd_target_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_target_t *obj, int value);

extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_target_masked_t *obj, int value);

extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_tll_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_tll_t *obj, int value);

extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);
extern int of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_nd_tll_masked_t *obj, int value);

extern int of_oxm_ipv6_src_OF_VERSION_1_3_populate(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_3_check(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_src_t *obj, int value);
extern int of_oxm_ipv6_src_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_src_t *obj, int value);

extern int of_oxm_ipv6_src_masked_OF_VERSION_1_3_populate(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_3_check(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_ipv6_src_masked_t *obj, int value);
extern int of_oxm_ipv6_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_ipv6_src_masked_t *obj, int value);

extern int of_oxm_metadata_OF_VERSION_1_3_populate(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_3_check(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_3_populate_scalars(
    of_oxm_metadata_t *obj, int value);
extern int of_oxm_metadata_OF_VERSION_1_3_check_scalars(
    of_oxm_metadata_t *obj, int value);

extern int of_oxm_metadata_masked_OF_VERSION_1_3_populate(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_3_check(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_metadata_masked_t *obj, int value);
extern int of_oxm_metadata_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_metadata_masked_t *obj, int value);

extern int of_oxm_mpls_label_OF_VERSION_1_3_populate(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_3_check(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_3_populate_scalars(
    of_oxm_mpls_label_t *obj, int value);
extern int of_oxm_mpls_label_OF_VERSION_1_3_check_scalars(
    of_oxm_mpls_label_t *obj, int value);

extern int of_oxm_mpls_label_masked_OF_VERSION_1_3_populate(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_3_check(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_mpls_label_masked_t *obj, int value);
extern int of_oxm_mpls_label_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_mpls_label_masked_t *obj, int value);

extern int of_oxm_mpls_tc_OF_VERSION_1_3_populate(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_3_check(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_3_populate_scalars(
    of_oxm_mpls_tc_t *obj, int value);
extern int of_oxm_mpls_tc_OF_VERSION_1_3_check_scalars(
    of_oxm_mpls_tc_t *obj, int value);

extern int of_oxm_mpls_tc_masked_OF_VERSION_1_3_populate(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_3_check(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_mpls_tc_masked_t *obj, int value);
extern int of_oxm_mpls_tc_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_mpls_tc_masked_t *obj, int value);

extern int of_oxm_sctp_dst_OF_VERSION_1_3_populate(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_3_check(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_sctp_dst_t *obj, int value);
extern int of_oxm_sctp_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_sctp_dst_t *obj, int value);

extern int of_oxm_sctp_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_3_check(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_sctp_dst_masked_t *obj, int value);
extern int of_oxm_sctp_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_sctp_dst_masked_t *obj, int value);

extern int of_oxm_sctp_src_OF_VERSION_1_3_populate(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_3_check(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_sctp_src_t *obj, int value);
extern int of_oxm_sctp_src_OF_VERSION_1_3_check_scalars(
    of_oxm_sctp_src_t *obj, int value);

extern int of_oxm_sctp_src_masked_OF_VERSION_1_3_populate(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_3_check(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_sctp_src_masked_t *obj, int value);
extern int of_oxm_sctp_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_sctp_src_masked_t *obj, int value);

extern int of_oxm_tcp_dst_OF_VERSION_1_3_populate(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_3_check(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_tcp_dst_t *obj, int value);
extern int of_oxm_tcp_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_tcp_dst_t *obj, int value);

extern int of_oxm_tcp_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_3_check(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_tcp_dst_masked_t *obj, int value);
extern int of_oxm_tcp_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_tcp_dst_masked_t *obj, int value);

extern int of_oxm_tcp_src_OF_VERSION_1_3_populate(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_3_check(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_tcp_src_t *obj, int value);
extern int of_oxm_tcp_src_OF_VERSION_1_3_check_scalars(
    of_oxm_tcp_src_t *obj, int value);

extern int of_oxm_tcp_src_masked_OF_VERSION_1_3_populate(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_3_check(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_tcp_src_masked_t *obj, int value);
extern int of_oxm_tcp_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_tcp_src_masked_t *obj, int value);

extern int of_oxm_udp_dst_OF_VERSION_1_3_populate(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_3_check(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_3_populate_scalars(
    of_oxm_udp_dst_t *obj, int value);
extern int of_oxm_udp_dst_OF_VERSION_1_3_check_scalars(
    of_oxm_udp_dst_t *obj, int value);

extern int of_oxm_udp_dst_masked_OF_VERSION_1_3_populate(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_3_check(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_udp_dst_masked_t *obj, int value);
extern int of_oxm_udp_dst_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_udp_dst_masked_t *obj, int value);

extern int of_oxm_udp_src_OF_VERSION_1_3_populate(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_3_check(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_3_populate_scalars(
    of_oxm_udp_src_t *obj, int value);
extern int of_oxm_udp_src_OF_VERSION_1_3_check_scalars(
    of_oxm_udp_src_t *obj, int value);

extern int of_oxm_udp_src_masked_OF_VERSION_1_3_populate(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_3_check(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_udp_src_masked_t *obj, int value);
extern int of_oxm_udp_src_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_udp_src_masked_t *obj, int value);

extern int of_oxm_vlan_pcp_OF_VERSION_1_3_populate(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_3_check(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_3_populate_scalars(
    of_oxm_vlan_pcp_t *obj, int value);
extern int of_oxm_vlan_pcp_OF_VERSION_1_3_check_scalars(
    of_oxm_vlan_pcp_t *obj, int value);

extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_3_populate(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_3_check(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_vlan_pcp_masked_t *obj, int value);
extern int of_oxm_vlan_pcp_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_vlan_pcp_masked_t *obj, int value);

extern int of_oxm_vlan_vid_OF_VERSION_1_3_populate(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_3_check(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_3_populate_scalars(
    of_oxm_vlan_vid_t *obj, int value);
extern int of_oxm_vlan_vid_OF_VERSION_1_3_check_scalars(
    of_oxm_vlan_vid_t *obj, int value);

extern int of_oxm_vlan_vid_masked_OF_VERSION_1_3_populate(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_3_check(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_3_populate_scalars(
    of_oxm_vlan_vid_masked_t *obj, int value);
extern int of_oxm_vlan_vid_masked_OF_VERSION_1_3_check_scalars(
    of_oxm_vlan_vid_masked_t *obj, int value);

extern int of_packet_queue_OF_VERSION_1_3_populate(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_3_check(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_3_populate_scalars(
    of_packet_queue_t *obj, int value);
extern int of_packet_queue_OF_VERSION_1_3_check_scalars(
    of_packet_queue_t *obj, int value);

extern int of_port_desc_OF_VERSION_1_3_populate(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_3_check(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_3_populate_scalars(
    of_port_desc_t *obj, int value);
extern int of_port_desc_OF_VERSION_1_3_check_scalars(
    of_port_desc_t *obj, int value);

extern int of_port_stats_entry_OF_VERSION_1_3_populate(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_3_check(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_port_stats_entry_t *obj, int value);
extern int of_port_stats_entry_OF_VERSION_1_3_check_scalars(
    of_port_stats_entry_t *obj, int value);

extern int of_queue_prop_experimenter_OF_VERSION_1_3_populate(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_3_check(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_3_populate_scalars(
    of_queue_prop_experimenter_t *obj, int value);
extern int of_queue_prop_experimenter_OF_VERSION_1_3_check_scalars(
    of_queue_prop_experimenter_t *obj, int value);

extern int of_queue_prop_header_OF_VERSION_1_3_populate(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_3_check(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_3_populate_scalars(
    of_queue_prop_header_t *obj, int value);
extern int of_queue_prop_header_OF_VERSION_1_3_check_scalars(
    of_queue_prop_header_t *obj, int value);

extern int of_queue_prop_max_rate_OF_VERSION_1_3_populate(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_3_check(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_3_populate_scalars(
    of_queue_prop_max_rate_t *obj, int value);
extern int of_queue_prop_max_rate_OF_VERSION_1_3_check_scalars(
    of_queue_prop_max_rate_t *obj, int value);

extern int of_queue_prop_min_rate_OF_VERSION_1_3_populate(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_3_check(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_3_populate_scalars(
    of_queue_prop_min_rate_t *obj, int value);
extern int of_queue_prop_min_rate_OF_VERSION_1_3_check_scalars(
    of_queue_prop_min_rate_t *obj, int value);

extern int of_queue_stats_entry_OF_VERSION_1_3_populate(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_3_check(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_queue_stats_entry_t *obj, int value);
extern int of_queue_stats_entry_OF_VERSION_1_3_check_scalars(
    of_queue_stats_entry_t *obj, int value);

extern int of_table_feature_prop_apply_actions_OF_VERSION_1_3_populate(
    of_table_feature_prop_apply_actions_t *obj, int value);
extern int of_table_feature_prop_apply_actions_OF_VERSION_1_3_check(
    of_table_feature_prop_apply_actions_t *obj, int value);
extern int of_table_feature_prop_apply_actions_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_apply_actions_t *obj, int value);
extern int of_table_feature_prop_apply_actions_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_apply_actions_t *obj, int value);

extern int of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_apply_actions_miss_t *obj, int value);
extern int of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_apply_actions_miss_t *obj, int value);
extern int of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_apply_actions_miss_t *obj, int value);
extern int of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_apply_actions_miss_t *obj, int value);

extern int of_table_feature_prop_apply_setfield_OF_VERSION_1_3_populate(
    of_table_feature_prop_apply_setfield_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_OF_VERSION_1_3_check(
    of_table_feature_prop_apply_setfield_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_apply_setfield_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_apply_setfield_t *obj, int value);

extern int of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_apply_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_apply_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_apply_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_apply_setfield_miss_t *obj, int value);

extern int of_table_feature_prop_experimenter_OF_VERSION_1_3_populate(
    of_table_feature_prop_experimenter_t *obj, int value);
extern int of_table_feature_prop_experimenter_OF_VERSION_1_3_check(
    of_table_feature_prop_experimenter_t *obj, int value);
extern int of_table_feature_prop_experimenter_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_experimenter_t *obj, int value);
extern int of_table_feature_prop_experimenter_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_experimenter_t *obj, int value);

extern int of_table_feature_prop_header_OF_VERSION_1_3_populate(
    of_table_feature_prop_header_t *obj, int value);
extern int of_table_feature_prop_header_OF_VERSION_1_3_check(
    of_table_feature_prop_header_t *obj, int value);
extern int of_table_feature_prop_header_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_header_t *obj, int value);
extern int of_table_feature_prop_header_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_header_t *obj, int value);

extern int of_table_feature_prop_instructions_OF_VERSION_1_3_populate(
    of_table_feature_prop_instructions_t *obj, int value);
extern int of_table_feature_prop_instructions_OF_VERSION_1_3_check(
    of_table_feature_prop_instructions_t *obj, int value);
extern int of_table_feature_prop_instructions_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_instructions_t *obj, int value);
extern int of_table_feature_prop_instructions_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_instructions_t *obj, int value);

extern int of_table_feature_prop_instructions_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_instructions_miss_t *obj, int value);
extern int of_table_feature_prop_instructions_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_instructions_miss_t *obj, int value);
extern int of_table_feature_prop_instructions_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_instructions_miss_t *obj, int value);
extern int of_table_feature_prop_instructions_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_instructions_miss_t *obj, int value);

extern int of_table_feature_prop_match_OF_VERSION_1_3_populate(
    of_table_feature_prop_match_t *obj, int value);
extern int of_table_feature_prop_match_OF_VERSION_1_3_check(
    of_table_feature_prop_match_t *obj, int value);
extern int of_table_feature_prop_match_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_match_t *obj, int value);
extern int of_table_feature_prop_match_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_match_t *obj, int value);

extern int of_table_feature_prop_next_tables_OF_VERSION_1_3_populate(
    of_table_feature_prop_next_tables_t *obj, int value);
extern int of_table_feature_prop_next_tables_OF_VERSION_1_3_check(
    of_table_feature_prop_next_tables_t *obj, int value);
extern int of_table_feature_prop_next_tables_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_next_tables_t *obj, int value);
extern int of_table_feature_prop_next_tables_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_next_tables_t *obj, int value);

extern int of_table_feature_prop_next_tables_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_next_tables_miss_t *obj, int value);
extern int of_table_feature_prop_next_tables_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_next_tables_miss_t *obj, int value);
extern int of_table_feature_prop_next_tables_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_next_tables_miss_t *obj, int value);
extern int of_table_feature_prop_next_tables_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_next_tables_miss_t *obj, int value);

extern int of_table_feature_prop_wildcards_OF_VERSION_1_3_populate(
    of_table_feature_prop_wildcards_t *obj, int value);
extern int of_table_feature_prop_wildcards_OF_VERSION_1_3_check(
    of_table_feature_prop_wildcards_t *obj, int value);
extern int of_table_feature_prop_wildcards_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_wildcards_t *obj, int value);
extern int of_table_feature_prop_wildcards_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_wildcards_t *obj, int value);

extern int of_table_feature_prop_write_actions_OF_VERSION_1_3_populate(
    of_table_feature_prop_write_actions_t *obj, int value);
extern int of_table_feature_prop_write_actions_OF_VERSION_1_3_check(
    of_table_feature_prop_write_actions_t *obj, int value);
extern int of_table_feature_prop_write_actions_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_write_actions_t *obj, int value);
extern int of_table_feature_prop_write_actions_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_write_actions_t *obj, int value);

extern int of_table_feature_prop_write_actions_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_write_actions_miss_t *obj, int value);
extern int of_table_feature_prop_write_actions_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_write_actions_miss_t *obj, int value);
extern int of_table_feature_prop_write_actions_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_write_actions_miss_t *obj, int value);
extern int of_table_feature_prop_write_actions_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_write_actions_miss_t *obj, int value);

extern int of_table_feature_prop_write_setfield_OF_VERSION_1_3_populate(
    of_table_feature_prop_write_setfield_t *obj, int value);
extern int of_table_feature_prop_write_setfield_OF_VERSION_1_3_check(
    of_table_feature_prop_write_setfield_t *obj, int value);
extern int of_table_feature_prop_write_setfield_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_write_setfield_t *obj, int value);
extern int of_table_feature_prop_write_setfield_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_write_setfield_t *obj, int value);

extern int of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3_populate(
    of_table_feature_prop_write_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3_check(
    of_table_feature_prop_write_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3_populate_scalars(
    of_table_feature_prop_write_setfield_miss_t *obj, int value);
extern int of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3_check_scalars(
    of_table_feature_prop_write_setfield_miss_t *obj, int value);

extern int of_table_features_OF_VERSION_1_3_populate(
    of_table_features_t *obj, int value);
extern int of_table_features_OF_VERSION_1_3_check(
    of_table_features_t *obj, int value);
extern int of_table_features_OF_VERSION_1_3_populate_scalars(
    of_table_features_t *obj, int value);
extern int of_table_features_OF_VERSION_1_3_check_scalars(
    of_table_features_t *obj, int value);

extern int of_table_stats_entry_OF_VERSION_1_3_populate(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_3_check(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_table_stats_entry_t *obj, int value);
extern int of_table_stats_entry_OF_VERSION_1_3_check_scalars(
    of_table_stats_entry_t *obj, int value);

extern int of_uint32_OF_VERSION_1_3_populate(
    of_uint32_t *obj, int value);
extern int of_uint32_OF_VERSION_1_3_check(
    of_uint32_t *obj, int value);
extern int of_uint32_OF_VERSION_1_3_populate_scalars(
    of_uint32_t *obj, int value);
extern int of_uint32_OF_VERSION_1_3_check_scalars(
    of_uint32_t *obj, int value);

extern int of_uint8_OF_VERSION_1_3_populate(
    of_uint8_t *obj, int value);
extern int of_uint8_OF_VERSION_1_3_check(
    of_uint8_t *obj, int value);
extern int of_uint8_OF_VERSION_1_3_populate_scalars(
    of_uint8_t *obj, int value);
extern int of_uint8_OF_VERSION_1_3_check_scalars(
    of_uint8_t *obj, int value);

extern int of_list_action_OF_VERSION_1_3_populate(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_3_check(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_3_populate_scalars(
    of_list_action_t *obj, int value);
extern int of_list_action_OF_VERSION_1_3_check_scalars(
    of_list_action_t *obj, int value);

extern int of_list_action_id_OF_VERSION_1_3_populate(
    of_list_action_id_t *obj, int value);
extern int of_list_action_id_OF_VERSION_1_3_check(
    of_list_action_id_t *obj, int value);
extern int of_list_action_id_OF_VERSION_1_3_populate_scalars(
    of_list_action_id_t *obj, int value);
extern int of_list_action_id_OF_VERSION_1_3_check_scalars(
    of_list_action_id_t *obj, int value);

extern int of_list_bsn_interface_OF_VERSION_1_3_populate(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_3_check(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_3_populate_scalars(
    of_list_bsn_interface_t *obj, int value);
extern int of_list_bsn_interface_OF_VERSION_1_3_check_scalars(
    of_list_bsn_interface_t *obj, int value);

extern int of_list_bsn_lacp_stats_entry_OF_VERSION_1_3_populate(
    of_list_bsn_lacp_stats_entry_t *obj, int value);
extern int of_list_bsn_lacp_stats_entry_OF_VERSION_1_3_check(
    of_list_bsn_lacp_stats_entry_t *obj, int value);
extern int of_list_bsn_lacp_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_bsn_lacp_stats_entry_t *obj, int value);
extern int of_list_bsn_lacp_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_bsn_lacp_stats_entry_t *obj, int value);

extern int of_list_bucket_OF_VERSION_1_3_populate(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_3_check(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_3_populate_scalars(
    of_list_bucket_t *obj, int value);
extern int of_list_bucket_OF_VERSION_1_3_check_scalars(
    of_list_bucket_t *obj, int value);

extern int of_list_bucket_counter_OF_VERSION_1_3_populate(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_3_check(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_3_populate_scalars(
    of_list_bucket_counter_t *obj, int value);
extern int of_list_bucket_counter_OF_VERSION_1_3_check_scalars(
    of_list_bucket_counter_t *obj, int value);

extern int of_list_flow_stats_entry_OF_VERSION_1_3_populate(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_3_check(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_flow_stats_entry_t *obj, int value);
extern int of_list_flow_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_flow_stats_entry_t *obj, int value);

extern int of_list_group_desc_stats_entry_OF_VERSION_1_3_populate(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_3_check(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);
extern int of_list_group_desc_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_group_desc_stats_entry_t *obj, int value);

extern int of_list_group_stats_entry_OF_VERSION_1_3_populate(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_3_check(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_group_stats_entry_t *obj, int value);
extern int of_list_group_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_group_stats_entry_t *obj, int value);

extern int of_list_hello_elem_OF_VERSION_1_3_populate(
    of_list_hello_elem_t *obj, int value);
extern int of_list_hello_elem_OF_VERSION_1_3_check(
    of_list_hello_elem_t *obj, int value);
extern int of_list_hello_elem_OF_VERSION_1_3_populate_scalars(
    of_list_hello_elem_t *obj, int value);
extern int of_list_hello_elem_OF_VERSION_1_3_check_scalars(
    of_list_hello_elem_t *obj, int value);

extern int of_list_instruction_OF_VERSION_1_3_populate(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_3_check(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_3_populate_scalars(
    of_list_instruction_t *obj, int value);
extern int of_list_instruction_OF_VERSION_1_3_check_scalars(
    of_list_instruction_t *obj, int value);

extern int of_list_meter_band_OF_VERSION_1_3_populate(
    of_list_meter_band_t *obj, int value);
extern int of_list_meter_band_OF_VERSION_1_3_check(
    of_list_meter_band_t *obj, int value);
extern int of_list_meter_band_OF_VERSION_1_3_populate_scalars(
    of_list_meter_band_t *obj, int value);
extern int of_list_meter_band_OF_VERSION_1_3_check_scalars(
    of_list_meter_band_t *obj, int value);

extern int of_list_meter_band_stats_OF_VERSION_1_3_populate(
    of_list_meter_band_stats_t *obj, int value);
extern int of_list_meter_band_stats_OF_VERSION_1_3_check(
    of_list_meter_band_stats_t *obj, int value);
extern int of_list_meter_band_stats_OF_VERSION_1_3_populate_scalars(
    of_list_meter_band_stats_t *obj, int value);
extern int of_list_meter_band_stats_OF_VERSION_1_3_check_scalars(
    of_list_meter_band_stats_t *obj, int value);

extern int of_list_meter_stats_OF_VERSION_1_3_populate(
    of_list_meter_stats_t *obj, int value);
extern int of_list_meter_stats_OF_VERSION_1_3_check(
    of_list_meter_stats_t *obj, int value);
extern int of_list_meter_stats_OF_VERSION_1_3_populate_scalars(
    of_list_meter_stats_t *obj, int value);
extern int of_list_meter_stats_OF_VERSION_1_3_check_scalars(
    of_list_meter_stats_t *obj, int value);

extern int of_list_oxm_OF_VERSION_1_3_populate(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_3_check(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_3_populate_scalars(
    of_list_oxm_t *obj, int value);
extern int of_list_oxm_OF_VERSION_1_3_check_scalars(
    of_list_oxm_t *obj, int value);

extern int of_list_packet_queue_OF_VERSION_1_3_populate(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_3_check(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_3_populate_scalars(
    of_list_packet_queue_t *obj, int value);
extern int of_list_packet_queue_OF_VERSION_1_3_check_scalars(
    of_list_packet_queue_t *obj, int value);

extern int of_list_port_desc_OF_VERSION_1_3_populate(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_3_check(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_3_populate_scalars(
    of_list_port_desc_t *obj, int value);
extern int of_list_port_desc_OF_VERSION_1_3_check_scalars(
    of_list_port_desc_t *obj, int value);

extern int of_list_port_stats_entry_OF_VERSION_1_3_populate(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_3_check(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_port_stats_entry_t *obj, int value);
extern int of_list_port_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_port_stats_entry_t *obj, int value);

extern int of_list_queue_prop_OF_VERSION_1_3_populate(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_3_check(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_3_populate_scalars(
    of_list_queue_prop_t *obj, int value);
extern int of_list_queue_prop_OF_VERSION_1_3_check_scalars(
    of_list_queue_prop_t *obj, int value);

extern int of_list_queue_stats_entry_OF_VERSION_1_3_populate(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_3_check(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_queue_stats_entry_t *obj, int value);
extern int of_list_queue_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_queue_stats_entry_t *obj, int value);

extern int of_list_table_feature_prop_OF_VERSION_1_3_populate(
    of_list_table_feature_prop_t *obj, int value);
extern int of_list_table_feature_prop_OF_VERSION_1_3_check(
    of_list_table_feature_prop_t *obj, int value);
extern int of_list_table_feature_prop_OF_VERSION_1_3_populate_scalars(
    of_list_table_feature_prop_t *obj, int value);
extern int of_list_table_feature_prop_OF_VERSION_1_3_check_scalars(
    of_list_table_feature_prop_t *obj, int value);

extern int of_list_table_features_OF_VERSION_1_3_populate(
    of_list_table_features_t *obj, int value);
extern int of_list_table_features_OF_VERSION_1_3_check(
    of_list_table_features_t *obj, int value);
extern int of_list_table_features_OF_VERSION_1_3_populate_scalars(
    of_list_table_features_t *obj, int value);
extern int of_list_table_features_OF_VERSION_1_3_check_scalars(
    of_list_table_features_t *obj, int value);

extern int of_list_table_stats_entry_OF_VERSION_1_3_populate(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_3_check(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_3_populate_scalars(
    of_list_table_stats_entry_t *obj, int value);
extern int of_list_table_stats_entry_OF_VERSION_1_3_check_scalars(
    of_list_table_stats_entry_t *obj, int value);

extern int of_list_uint32_OF_VERSION_1_3_populate(
    of_list_uint32_t *obj, int value);
extern int of_list_uint32_OF_VERSION_1_3_check(
    of_list_uint32_t *obj, int value);
extern int of_list_uint32_OF_VERSION_1_3_populate_scalars(
    of_list_uint32_t *obj, int value);
extern int of_list_uint32_OF_VERSION_1_3_check_scalars(
    of_list_uint32_t *obj, int value);

extern int of_list_uint8_OF_VERSION_1_3_populate(
    of_list_uint8_t *obj, int value);
extern int of_list_uint8_OF_VERSION_1_3_check(
    of_list_uint8_t *obj, int value);
extern int of_list_uint8_OF_VERSION_1_3_populate_scalars(
    of_list_uint8_t *obj, int value);
extern int of_list_uint8_OF_VERSION_1_3_check_scalars(
    of_list_uint8_t *obj, int value);

/*
 * Declarations for list population and check primitives
 */

extern int
    list_setup_of_list_action_OF_VERSION_1_0(
    of_list_action_t *list, int value);
extern int
    list_check_of_list_action_OF_VERSION_1_0(
    of_list_action_t *list, int value);

extern int
    list_setup_of_list_bsn_interface_OF_VERSION_1_0(
    of_list_bsn_interface_t *list, int value);
extern int
    list_check_of_list_bsn_interface_OF_VERSION_1_0(
    of_list_bsn_interface_t *list, int value);

extern int
    list_setup_of_list_flow_stats_entry_OF_VERSION_1_0(
    of_list_flow_stats_entry_t *list, int value);
extern int
    list_check_of_list_flow_stats_entry_OF_VERSION_1_0(
    of_list_flow_stats_entry_t *list, int value);

extern int
    list_setup_of_list_packet_queue_OF_VERSION_1_0(
    of_list_packet_queue_t *list, int value);
extern int
    list_check_of_list_packet_queue_OF_VERSION_1_0(
    of_list_packet_queue_t *list, int value);

extern int
    list_setup_of_list_port_desc_OF_VERSION_1_0(
    of_list_port_desc_t *list, int value);
extern int
    list_check_of_list_port_desc_OF_VERSION_1_0(
    of_list_port_desc_t *list, int value);

extern int
    list_setup_of_list_port_stats_entry_OF_VERSION_1_0(
    of_list_port_stats_entry_t *list, int value);
extern int
    list_check_of_list_port_stats_entry_OF_VERSION_1_0(
    of_list_port_stats_entry_t *list, int value);

extern int
    list_setup_of_list_queue_prop_OF_VERSION_1_0(
    of_list_queue_prop_t *list, int value);
extern int
    list_check_of_list_queue_prop_OF_VERSION_1_0(
    of_list_queue_prop_t *list, int value);

extern int
    list_setup_of_list_queue_stats_entry_OF_VERSION_1_0(
    of_list_queue_stats_entry_t *list, int value);
extern int
    list_check_of_list_queue_stats_entry_OF_VERSION_1_0(
    of_list_queue_stats_entry_t *list, int value);

extern int
    list_setup_of_list_table_stats_entry_OF_VERSION_1_0(
    of_list_table_stats_entry_t *list, int value);
extern int
    list_check_of_list_table_stats_entry_OF_VERSION_1_0(
    of_list_table_stats_entry_t *list, int value);

extern int
    list_setup_of_list_action_OF_VERSION_1_1(
    of_list_action_t *list, int value);
extern int
    list_check_of_list_action_OF_VERSION_1_1(
    of_list_action_t *list, int value);

extern int
    list_setup_of_list_bsn_interface_OF_VERSION_1_1(
    of_list_bsn_interface_t *list, int value);
extern int
    list_check_of_list_bsn_interface_OF_VERSION_1_1(
    of_list_bsn_interface_t *list, int value);

extern int
    list_setup_of_list_bucket_OF_VERSION_1_1(
    of_list_bucket_t *list, int value);
extern int
    list_check_of_list_bucket_OF_VERSION_1_1(
    of_list_bucket_t *list, int value);

extern int
    list_setup_of_list_bucket_counter_OF_VERSION_1_1(
    of_list_bucket_counter_t *list, int value);
extern int
    list_check_of_list_bucket_counter_OF_VERSION_1_1(
    of_list_bucket_counter_t *list, int value);

extern int
    list_setup_of_list_flow_stats_entry_OF_VERSION_1_1(
    of_list_flow_stats_entry_t *list, int value);
extern int
    list_check_of_list_flow_stats_entry_OF_VERSION_1_1(
    of_list_flow_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_desc_stats_entry_OF_VERSION_1_1(
    of_list_group_desc_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_desc_stats_entry_OF_VERSION_1_1(
    of_list_group_desc_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_stats_entry_OF_VERSION_1_1(
    of_list_group_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_stats_entry_OF_VERSION_1_1(
    of_list_group_stats_entry_t *list, int value);

extern int
    list_setup_of_list_instruction_OF_VERSION_1_1(
    of_list_instruction_t *list, int value);
extern int
    list_check_of_list_instruction_OF_VERSION_1_1(
    of_list_instruction_t *list, int value);

extern int
    list_setup_of_list_packet_queue_OF_VERSION_1_1(
    of_list_packet_queue_t *list, int value);
extern int
    list_check_of_list_packet_queue_OF_VERSION_1_1(
    of_list_packet_queue_t *list, int value);

extern int
    list_setup_of_list_port_desc_OF_VERSION_1_1(
    of_list_port_desc_t *list, int value);
extern int
    list_check_of_list_port_desc_OF_VERSION_1_1(
    of_list_port_desc_t *list, int value);

extern int
    list_setup_of_list_port_stats_entry_OF_VERSION_1_1(
    of_list_port_stats_entry_t *list, int value);
extern int
    list_check_of_list_port_stats_entry_OF_VERSION_1_1(
    of_list_port_stats_entry_t *list, int value);

extern int
    list_setup_of_list_queue_prop_OF_VERSION_1_1(
    of_list_queue_prop_t *list, int value);
extern int
    list_check_of_list_queue_prop_OF_VERSION_1_1(
    of_list_queue_prop_t *list, int value);

extern int
    list_setup_of_list_queue_stats_entry_OF_VERSION_1_1(
    of_list_queue_stats_entry_t *list, int value);
extern int
    list_check_of_list_queue_stats_entry_OF_VERSION_1_1(
    of_list_queue_stats_entry_t *list, int value);

extern int
    list_setup_of_list_table_stats_entry_OF_VERSION_1_1(
    of_list_table_stats_entry_t *list, int value);
extern int
    list_check_of_list_table_stats_entry_OF_VERSION_1_1(
    of_list_table_stats_entry_t *list, int value);

extern int
    list_setup_of_list_action_OF_VERSION_1_2(
    of_list_action_t *list, int value);
extern int
    list_check_of_list_action_OF_VERSION_1_2(
    of_list_action_t *list, int value);

extern int
    list_setup_of_list_bsn_interface_OF_VERSION_1_2(
    of_list_bsn_interface_t *list, int value);
extern int
    list_check_of_list_bsn_interface_OF_VERSION_1_2(
    of_list_bsn_interface_t *list, int value);

extern int
    list_setup_of_list_bucket_OF_VERSION_1_2(
    of_list_bucket_t *list, int value);
extern int
    list_check_of_list_bucket_OF_VERSION_1_2(
    of_list_bucket_t *list, int value);

extern int
    list_setup_of_list_bucket_counter_OF_VERSION_1_2(
    of_list_bucket_counter_t *list, int value);
extern int
    list_check_of_list_bucket_counter_OF_VERSION_1_2(
    of_list_bucket_counter_t *list, int value);

extern int
    list_setup_of_list_flow_stats_entry_OF_VERSION_1_2(
    of_list_flow_stats_entry_t *list, int value);
extern int
    list_check_of_list_flow_stats_entry_OF_VERSION_1_2(
    of_list_flow_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_desc_stats_entry_OF_VERSION_1_2(
    of_list_group_desc_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_desc_stats_entry_OF_VERSION_1_2(
    of_list_group_desc_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_stats_entry_OF_VERSION_1_2(
    of_list_group_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_stats_entry_OF_VERSION_1_2(
    of_list_group_stats_entry_t *list, int value);

extern int
    list_setup_of_list_instruction_OF_VERSION_1_2(
    of_list_instruction_t *list, int value);
extern int
    list_check_of_list_instruction_OF_VERSION_1_2(
    of_list_instruction_t *list, int value);

extern int
    list_setup_of_list_oxm_OF_VERSION_1_2(
    of_list_oxm_t *list, int value);
extern int
    list_check_of_list_oxm_OF_VERSION_1_2(
    of_list_oxm_t *list, int value);

extern int
    list_setup_of_list_packet_queue_OF_VERSION_1_2(
    of_list_packet_queue_t *list, int value);
extern int
    list_check_of_list_packet_queue_OF_VERSION_1_2(
    of_list_packet_queue_t *list, int value);

extern int
    list_setup_of_list_port_desc_OF_VERSION_1_2(
    of_list_port_desc_t *list, int value);
extern int
    list_check_of_list_port_desc_OF_VERSION_1_2(
    of_list_port_desc_t *list, int value);

extern int
    list_setup_of_list_port_stats_entry_OF_VERSION_1_2(
    of_list_port_stats_entry_t *list, int value);
extern int
    list_check_of_list_port_stats_entry_OF_VERSION_1_2(
    of_list_port_stats_entry_t *list, int value);

extern int
    list_setup_of_list_queue_prop_OF_VERSION_1_2(
    of_list_queue_prop_t *list, int value);
extern int
    list_check_of_list_queue_prop_OF_VERSION_1_2(
    of_list_queue_prop_t *list, int value);

extern int
    list_setup_of_list_queue_stats_entry_OF_VERSION_1_2(
    of_list_queue_stats_entry_t *list, int value);
extern int
    list_check_of_list_queue_stats_entry_OF_VERSION_1_2(
    of_list_queue_stats_entry_t *list, int value);

extern int
    list_setup_of_list_table_stats_entry_OF_VERSION_1_2(
    of_list_table_stats_entry_t *list, int value);
extern int
    list_check_of_list_table_stats_entry_OF_VERSION_1_2(
    of_list_table_stats_entry_t *list, int value);

extern int
    list_setup_of_list_action_OF_VERSION_1_3(
    of_list_action_t *list, int value);
extern int
    list_check_of_list_action_OF_VERSION_1_3(
    of_list_action_t *list, int value);

extern int
    list_setup_of_list_action_id_OF_VERSION_1_3(
    of_list_action_id_t *list, int value);
extern int
    list_check_of_list_action_id_OF_VERSION_1_3(
    of_list_action_id_t *list, int value);

extern int
    list_setup_of_list_bsn_interface_OF_VERSION_1_3(
    of_list_bsn_interface_t *list, int value);
extern int
    list_check_of_list_bsn_interface_OF_VERSION_1_3(
    of_list_bsn_interface_t *list, int value);

extern int
    list_setup_of_list_bsn_lacp_stats_entry_OF_VERSION_1_3(
    of_list_bsn_lacp_stats_entry_t *list, int value);
extern int
    list_check_of_list_bsn_lacp_stats_entry_OF_VERSION_1_3(
    of_list_bsn_lacp_stats_entry_t *list, int value);

extern int
    list_setup_of_list_bucket_OF_VERSION_1_3(
    of_list_bucket_t *list, int value);
extern int
    list_check_of_list_bucket_OF_VERSION_1_3(
    of_list_bucket_t *list, int value);

extern int
    list_setup_of_list_bucket_counter_OF_VERSION_1_3(
    of_list_bucket_counter_t *list, int value);
extern int
    list_check_of_list_bucket_counter_OF_VERSION_1_3(
    of_list_bucket_counter_t *list, int value);

extern int
    list_setup_of_list_flow_stats_entry_OF_VERSION_1_3(
    of_list_flow_stats_entry_t *list, int value);
extern int
    list_check_of_list_flow_stats_entry_OF_VERSION_1_3(
    of_list_flow_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_desc_stats_entry_OF_VERSION_1_3(
    of_list_group_desc_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_desc_stats_entry_OF_VERSION_1_3(
    of_list_group_desc_stats_entry_t *list, int value);

extern int
    list_setup_of_list_group_stats_entry_OF_VERSION_1_3(
    of_list_group_stats_entry_t *list, int value);
extern int
    list_check_of_list_group_stats_entry_OF_VERSION_1_3(
    of_list_group_stats_entry_t *list, int value);

extern int
    list_setup_of_list_hello_elem_OF_VERSION_1_3(
    of_list_hello_elem_t *list, int value);
extern int
    list_check_of_list_hello_elem_OF_VERSION_1_3(
    of_list_hello_elem_t *list, int value);

extern int
    list_setup_of_list_instruction_OF_VERSION_1_3(
    of_list_instruction_t *list, int value);
extern int
    list_check_of_list_instruction_OF_VERSION_1_3(
    of_list_instruction_t *list, int value);

extern int
    list_setup_of_list_meter_band_OF_VERSION_1_3(
    of_list_meter_band_t *list, int value);
extern int
    list_check_of_list_meter_band_OF_VERSION_1_3(
    of_list_meter_band_t *list, int value);

extern int
    list_setup_of_list_meter_band_stats_OF_VERSION_1_3(
    of_list_meter_band_stats_t *list, int value);
extern int
    list_check_of_list_meter_band_stats_OF_VERSION_1_3(
    of_list_meter_band_stats_t *list, int value);

extern int
    list_setup_of_list_meter_stats_OF_VERSION_1_3(
    of_list_meter_stats_t *list, int value);
extern int
    list_check_of_list_meter_stats_OF_VERSION_1_3(
    of_list_meter_stats_t *list, int value);

extern int
    list_setup_of_list_oxm_OF_VERSION_1_3(
    of_list_oxm_t *list, int value);
extern int
    list_check_of_list_oxm_OF_VERSION_1_3(
    of_list_oxm_t *list, int value);

extern int
    list_setup_of_list_packet_queue_OF_VERSION_1_3(
    of_list_packet_queue_t *list, int value);
extern int
    list_check_of_list_packet_queue_OF_VERSION_1_3(
    of_list_packet_queue_t *list, int value);

extern int
    list_setup_of_list_port_desc_OF_VERSION_1_3(
    of_list_port_desc_t *list, int value);
extern int
    list_check_of_list_port_desc_OF_VERSION_1_3(
    of_list_port_desc_t *list, int value);

extern int
    list_setup_of_list_port_stats_entry_OF_VERSION_1_3(
    of_list_port_stats_entry_t *list, int value);
extern int
    list_check_of_list_port_stats_entry_OF_VERSION_1_3(
    of_list_port_stats_entry_t *list, int value);

extern int
    list_setup_of_list_queue_prop_OF_VERSION_1_3(
    of_list_queue_prop_t *list, int value);
extern int
    list_check_of_list_queue_prop_OF_VERSION_1_3(
    of_list_queue_prop_t *list, int value);

extern int
    list_setup_of_list_queue_stats_entry_OF_VERSION_1_3(
    of_list_queue_stats_entry_t *list, int value);
extern int
    list_check_of_list_queue_stats_entry_OF_VERSION_1_3(
    of_list_queue_stats_entry_t *list, int value);

extern int
    list_setup_of_list_table_feature_prop_OF_VERSION_1_3(
    of_list_table_feature_prop_t *list, int value);
extern int
    list_check_of_list_table_feature_prop_OF_VERSION_1_3(
    of_list_table_feature_prop_t *list, int value);

extern int
    list_setup_of_list_table_features_OF_VERSION_1_3(
    of_list_table_features_t *list, int value);
extern int
    list_check_of_list_table_features_OF_VERSION_1_3(
    of_list_table_features_t *list, int value);

extern int
    list_setup_of_list_table_stats_entry_OF_VERSION_1_3(
    of_list_table_stats_entry_t *list, int value);
extern int
    list_check_of_list_table_stats_entry_OF_VERSION_1_3(
    of_list_table_stats_entry_t *list, int value);

extern int
    list_setup_of_list_uint32_OF_VERSION_1_3(
    of_list_uint32_t *list, int value);
extern int
    list_check_of_list_uint32_OF_VERSION_1_3(
    of_list_uint32_t *list, int value);

extern int
    list_setup_of_list_uint8_OF_VERSION_1_3(
    of_list_uint8_t *list, int value);
extern int
    list_check_of_list_uint8_OF_VERSION_1_3(
    of_list_uint8_t *list, int value);

#endif /* _TEST_COMMON_H_ */
