#include "config.h"
#include <ccan/array_size/array_size.h>
#include <ccan/time/time.h>
#include <common/daemon.h>
#include <common/setup.h>
#include <common/status.h>
#include <stdio.h>

#undef status_debug
#define status_debug(...)

#define main unused_main
int main(int argc, char *argv[]);
#include "../onchaind.c"
#undef main

/* AUTOGENERATED MOCKS START */
/* Generated stub for commit_number_obscurer */
u64 commit_number_obscurer(const struct pubkey *opener_payment_basepoint UNNEEDED,
			   const struct pubkey *accepter_payment_basepoint UNNEEDED)
{ fprintf(stderr, "commit_number_obscurer called!\n"); abort(); }
/* Generated stub for daemon_shutdown */
void daemon_shutdown(void)
{ fprintf(stderr, "daemon_shutdown called!\n"); abort(); }
/* Generated stub for derive_keyset */
bool derive_keyset(const struct pubkey *per_commitment_point UNNEEDED,
		   const struct basepoints *self UNNEEDED,
		   const struct basepoints *other UNNEEDED,
		   bool option_static_remotekey UNNEEDED,
		   struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "derive_keyset called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_hsmd_get_per_commitment_point_reply */
bool fromwire_hsmd_get_per_commitment_point_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct pubkey *per_commitment_point UNNEEDED, struct secret **old_commitment_secret UNNEEDED)
{ fprintf(stderr, "fromwire_hsmd_get_per_commitment_point_reply called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_depth */
bool fromwire_onchaind_depth(const void *p UNNEEDED, struct bitcoin_txid *txid UNNEEDED, u32 *depth UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_depth called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_dev_memleak */
bool fromwire_onchaind_dev_memleak(const void *p UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_dev_memleak called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_htlcs */
bool fromwire_onchaind_htlcs(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct htlc_stub **htlc UNNEEDED, bool **tell_if_missing UNNEEDED, bool **tell_immediately UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_htlcs called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_init */
bool fromwire_onchaind_init(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct shachain *shachain UNNEEDED, const struct chainparams **chainparams UNNEEDED, struct amount_sat *funding_amount_satoshi UNNEEDED, struct amount_msat *our_msat UNNEEDED, struct pubkey *old_remote_per_commitment_point UNNEEDED, struct pubkey *remote_per_commitment_point UNNEEDED, u32 *local_to_self_delay UNNEEDED, u32 *remote_to_self_delay UNNEEDED, struct amount_sat *local_dust_limit_satoshi UNNEEDED, struct bitcoin_txid *our_broadcast_txid UNNEEDED, u8 **local_scriptpubkey UNNEEDED, u8 **remote_scriptpubkey UNNEEDED, u32 *ourwallet_index UNNEEDED, struct ext_key *ourwallet_ext_key UNNEEDED, struct pubkey *ourwallet_pubkey UNNEEDED, enum side *opener UNNEEDED, struct basepoints *local_basepoints UNNEEDED, struct basepoints *remote_basepoints UNNEEDED, struct tx_parts **tx_parts UNNEEDED, u32 *locktime UNNEEDED, u32 *tx_blockheight UNNEEDED, u32 *reasonable_depth UNNEEDED, struct bitcoin_signature **htlc_signature UNNEEDED, u32 *min_possible_feerate UNNEEDED, u32 *max_possible_feerate UNNEEDED, struct pubkey **possible_remote_per_commit_point UNNEEDED, struct pubkey *local_funding_pubkey UNNEEDED, struct pubkey *remote_funding_pubkey UNNEEDED, u64 *local_static_remotekey_start UNNEEDED, u64 *remote_static_remotekey_start UNNEEDED, bool *option_anchor_outputs UNNEEDED, u32 *min_relay_feerate UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_init called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_known_preimage */
bool fromwire_onchaind_known_preimage(const void *p UNNEEDED, struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_known_preimage called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_spend_created */
bool fromwire_onchaind_spend_created(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, bool *expect_to_succeed UNNEEDED, struct onchain_witness_element ***witness UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_spend_created called!\n"); abort(); }
/* Generated stub for fromwire_onchaind_spent */
bool fromwire_onchaind_spent(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct tx_parts **tx UNNEEDED, u32 *input_num UNNEEDED, u32 *blockheight UNNEEDED)
{ fprintf(stderr, "fromwire_onchaind_spent called!\n"); abort(); }
/* Generated stub for fromwire_peektype */
int fromwire_peektype(const u8 *cursor UNNEEDED)
{ fprintf(stderr, "fromwire_peektype called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u16 */
u16 fromwire_u16(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u16 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for htlc_offered_wscript */
u8 *htlc_offered_wscript(const tal_t *ctx UNNEEDED,
			 const struct ripemd160 *ripemd UNNEEDED,
			 const struct keyset *keyset UNNEEDED,
			 bool option_anchor_outputs UNNEEDED)
{ fprintf(stderr, "htlc_offered_wscript called!\n"); abort(); }
/* Generated stub for htlc_received_wscript */
u8 *htlc_received_wscript(const tal_t *ctx UNNEEDED,
			  const struct ripemd160 *ripemd UNNEEDED,
			  const struct abs_locktime *expiry UNNEEDED,
			  const struct keyset *keyset UNNEEDED,
			  bool option_anchor_outputs UNNEEDED)
{ fprintf(stderr, "htlc_received_wscript called!\n"); abort(); }
/* Generated stub for htlc_success_tx */
struct bitcoin_tx *htlc_success_tx(const tal_t *ctx UNNEEDED,
				   const struct chainparams *chainparams UNNEEDED,
				   const struct bitcoin_outpoint *commit UNNEEDED,
				   const u8 *commit_wscript UNNEEDED,
				   struct amount_msat htlc_msatoshi UNNEEDED,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED,
				   bool option_anchor_outputs UNNEEDED)
{ fprintf(stderr, "htlc_success_tx called!\n"); abort(); }
/* Generated stub for htlc_timeout_tx */
struct bitcoin_tx *htlc_timeout_tx(const tal_t *ctx UNNEEDED,
				   const struct chainparams *chainparams UNNEEDED,
				   const struct bitcoin_outpoint *commit UNNEEDED,
				   const u8 *commit_wscript UNNEEDED,
				   struct amount_msat htlc_msatoshi UNNEEDED,
				   u32 cltv_expiry UNNEEDED,
				   u16 to_self_delay UNNEEDED,
				   u32 feerate_per_kw UNNEEDED,
				   const struct keyset *keyset UNNEEDED,
				   bool option_anchor_outputs UNNEEDED)
{ fprintf(stderr, "htlc_timeout_tx called!\n"); abort(); }
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for memleak_scan_obj */
void memleak_scan_obj(struct htable *memtable UNNEEDED, const void *obj UNNEEDED)
{ fprintf(stderr, "memleak_scan_obj called!\n"); abort(); }
/* Generated stub for memleak_start */
struct htable *memleak_start(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "memleak_start called!\n"); abort(); }
/* Generated stub for new_coin_channel_close */
struct chain_coin_mvt *new_coin_channel_close(const tal_t *ctx UNNEEDED,
					      const struct bitcoin_txid *txid UNNEEDED,
					      const struct bitcoin_outpoint *out UNNEEDED,
					      u32 blockheight UNNEEDED,
					      const struct amount_msat amount UNNEEDED,
					      const struct amount_sat output_val UNNEEDED,
					      u32 output_count)

{ fprintf(stderr, "new_coin_channel_close called!\n"); abort(); }
/* Generated stub for new_coin_external_deposit */
struct chain_coin_mvt *new_coin_external_deposit(const tal_t *ctx UNNEEDED,
						 const struct bitcoin_outpoint *outpoint UNNEEDED,
						 u32 blockheight UNNEEDED,
						 struct amount_sat amount UNNEEDED,
						 enum mvt_tag tag)

{ fprintf(stderr, "new_coin_external_deposit called!\n"); abort(); }
/* Generated stub for new_coin_external_deposit_tags */
struct chain_coin_mvt *new_coin_external_deposit_tags(const tal_t *ctx UNNEEDED,
						      const struct bitcoin_outpoint *outpoint UNNEEDED,
						      u32 blockheight UNNEEDED,
						      struct amount_sat amount UNNEEDED,
						      enum mvt_tag *tags)

{ fprintf(stderr, "new_coin_external_deposit_tags called!\n"); abort(); }
/* Generated stub for new_coin_external_spend */
struct chain_coin_mvt *new_coin_external_spend(const tal_t *ctx UNNEEDED,
					       const struct bitcoin_outpoint *outpoint UNNEEDED,
					       const struct bitcoin_txid *txid UNNEEDED,
					       u32 blockheight UNNEEDED,
					       struct amount_sat amount UNNEEDED,
					       enum mvt_tag tag)

{ fprintf(stderr, "new_coin_external_spend called!\n"); abort(); }
/* Generated stub for new_coin_external_spend_tags */
struct chain_coin_mvt *new_coin_external_spend_tags(const tal_t *ctx UNNEEDED,
						    const struct bitcoin_outpoint *outpoint UNNEEDED,
						    const struct bitcoin_txid *txid UNNEEDED,
						    u32 blockheight UNNEEDED,
						    struct amount_sat amount UNNEEDED,
						    enum mvt_tag *tags)

{ fprintf(stderr, "new_coin_external_spend_tags called!\n"); abort(); }
/* Generated stub for new_coin_wallet_deposit_tagged */
struct chain_coin_mvt *new_coin_wallet_deposit_tagged(const tal_t *ctx UNNEEDED,
						      const struct bitcoin_outpoint *outpoint UNNEEDED,
						      u32 blockheight UNNEEDED,
						      struct amount_sat amount UNNEEDED,
						      enum mvt_tag *tags TAKES)

{ fprintf(stderr, "new_coin_wallet_deposit_tagged called!\n"); abort(); }
/* Generated stub for new_onchain_htlc_deposit */
struct chain_coin_mvt *new_onchain_htlc_deposit(const tal_t *ctx UNNEEDED,
						const struct bitcoin_outpoint *outpoint UNNEEDED,
						u32 blockheight UNNEEDED,
						struct amount_sat amount UNNEEDED,
						const struct sha256 *payment_hash)

{ fprintf(stderr, "new_onchain_htlc_deposit called!\n"); abort(); }
/* Generated stub for new_onchain_htlc_withdraw */
struct chain_coin_mvt *new_onchain_htlc_withdraw(const tal_t *ctx UNNEEDED,
						 const struct bitcoin_outpoint *outpoint UNNEEDED,
						 u32 blockheight UNNEEDED,
						 struct amount_sat amount UNNEEDED,
						 const struct sha256 *payment_hash)

{ fprintf(stderr, "new_onchain_htlc_withdraw called!\n"); abort(); }
/* Generated stub for new_onchaind_deposit */
struct chain_coin_mvt *new_onchaind_deposit(const tal_t *ctx UNNEEDED,
					    const struct bitcoin_outpoint *outpoint UNNEEDED,
					    u32 blockheight UNNEEDED,
					    struct amount_sat amount UNNEEDED,
					    enum mvt_tag tag)

{ fprintf(stderr, "new_onchaind_deposit called!\n"); abort(); }
/* Generated stub for new_onchaind_withdraw */
struct chain_coin_mvt *new_onchaind_withdraw(const tal_t *ctx UNNEEDED,
					     const struct bitcoin_outpoint *outpoint UNNEEDED,
					     const struct bitcoin_txid *spend_txid UNNEEDED,
					     u32 blockheight UNNEEDED,
					     struct amount_sat amount UNNEEDED,
					     enum mvt_tag tag)

{ fprintf(stderr, "new_onchaind_withdraw called!\n"); abort(); }
/* Generated stub for new_tag_arr */
enum mvt_tag *new_tag_arr(const tal_t *ctx UNNEEDED, enum mvt_tag tag UNNEEDED)
{ fprintf(stderr, "new_tag_arr called!\n"); abort(); }
/* Generated stub for notleak_ */
void *notleak_(void *ptr UNNEEDED, bool plus_children UNNEEDED)
{ fprintf(stderr, "notleak_ called!\n"); abort(); }
/* Generated stub for onchaind_wire_name */
const char *onchaind_wire_name(int e UNNEEDED)
{ fprintf(stderr, "onchaind_wire_name called!\n"); abort(); }
/* Generated stub for peer_billboard */
void peer_billboard(bool perm UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "peer_billboard called!\n"); abort(); }
/* Generated stub for shachain_get_secret */
bool shachain_get_secret(const struct shachain *shachain UNNEEDED,
			 u64 commit_num UNNEEDED,
			 struct secret *preimage UNNEEDED)
{ fprintf(stderr, "shachain_get_secret called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for status_fmt */
void status_fmt(enum log_level level UNNEEDED,
		const struct node_id *peer UNNEEDED,
		const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "status_fmt called!\n"); abort(); }
/* Generated stub for status_setup_sync */
void status_setup_sync(int fd UNNEEDED)
{ fprintf(stderr, "status_setup_sync called!\n"); abort(); }
/* Generated stub for subdaemon_setup */
void subdaemon_setup(int argc UNNEEDED, char *argv[])
{ fprintf(stderr, "subdaemon_setup called!\n"); abort(); }
/* Generated stub for to_self_wscript */
u8 *to_self_wscript(const tal_t *ctx UNNEEDED,
		    u16 to_self_delay UNNEEDED,
		    u32 csv UNNEEDED,
		    const struct keyset *keyset UNNEEDED)
{ fprintf(stderr, "to_self_wscript called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_hsmd_get_per_commitment_point */
u8 *towire_hsmd_get_per_commitment_point(const tal_t *ctx UNNEEDED, u64 n UNNEEDED)
{ fprintf(stderr, "towire_hsmd_get_per_commitment_point called!\n"); abort(); }
/* Generated stub for towire_onchaind_add_utxo */
u8 *towire_onchaind_add_utxo(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *prev_out UNNEEDED, const struct pubkey *per_commit_point UNNEEDED, struct amount_sat value UNNEEDED, u32 blockheight UNNEEDED, const u8 *scriptpubkey UNNEEDED, u32 csv_lock UNNEEDED)
{ fprintf(stderr, "towire_onchaind_add_utxo called!\n"); abort(); }
/* Generated stub for towire_onchaind_all_irrevocably_resolved */
u8 *towire_onchaind_all_irrevocably_resolved(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_onchaind_all_irrevocably_resolved called!\n"); abort(); }
/* Generated stub for towire_onchaind_annotate_txin */
u8 *towire_onchaind_annotate_txin(const tal_t *ctx UNNEEDED, const struct bitcoin_txid *txid UNNEEDED, u32 innum UNNEEDED, enum wallet_tx_type type UNNEEDED)
{ fprintf(stderr, "towire_onchaind_annotate_txin called!\n"); abort(); }
/* Generated stub for towire_onchaind_annotate_txout */
u8 *towire_onchaind_annotate_txout(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, enum wallet_tx_type type UNNEEDED)
{ fprintf(stderr, "towire_onchaind_annotate_txout called!\n"); abort(); }
/* Generated stub for towire_onchaind_dev_memleak_reply */
u8 *towire_onchaind_dev_memleak_reply(const tal_t *ctx UNNEEDED, bool leak UNNEEDED)
{ fprintf(stderr, "towire_onchaind_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for towire_onchaind_extracted_preimage */
u8 *towire_onchaind_extracted_preimage(const tal_t *ctx UNNEEDED, const struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "towire_onchaind_extracted_preimage called!\n"); abort(); }
/* Generated stub for towire_onchaind_htlc_timeout */
u8 *towire_onchaind_htlc_timeout(const tal_t *ctx UNNEEDED, const struct htlc_stub *htlc UNNEEDED)
{ fprintf(stderr, "towire_onchaind_htlc_timeout called!\n"); abort(); }
/* Generated stub for towire_onchaind_init_reply */
u8 *towire_onchaind_init_reply(const tal_t *ctx UNNEEDED, u64 commit_num UNNEEDED)
{ fprintf(stderr, "towire_onchaind_init_reply called!\n"); abort(); }
/* Generated stub for towire_onchaind_missing_htlc_output */
u8 *towire_onchaind_missing_htlc_output(const tal_t *ctx UNNEEDED, const struct htlc_stub *htlc UNNEEDED)
{ fprintf(stderr, "towire_onchaind_missing_htlc_output called!\n"); abort(); }
/* Generated stub for towire_onchaind_notify_coin_mvt */
u8 *towire_onchaind_notify_coin_mvt(const tal_t *ctx UNNEEDED, const struct chain_coin_mvt *mvt UNNEEDED)
{ fprintf(stderr, "towire_onchaind_notify_coin_mvt called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_fulfill */
u8 *towire_onchaind_spend_fulfill(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, u64 htlc_id UNNEEDED, const struct pubkey *remote_per_commitment_point UNNEEDED, const struct preimage *preimage UNNEEDED, const u8 *wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_fulfill called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_htlc_expired */
u8 *towire_onchaind_spend_htlc_expired(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, u64 htlc_id UNNEEDED, u32 cltv_expiry UNNEEDED, const struct pubkey *remote_per_commitment_point UNNEEDED, const u8 *wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_htlc_expired called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_htlc_success */
u8 *towire_onchaind_spend_htlc_success(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, struct amount_sat fee UNNEEDED, u64 htlc_id UNNEEDED, u64 commit_num UNNEEDED, const struct bitcoin_signature *remote_htlc_sig UNNEEDED, const struct preimage *preimage UNNEEDED, const u8 *wscript UNNEEDED, const u8 *htlc_wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_htlc_success called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_htlc_timeout */
u8 *towire_onchaind_spend_htlc_timeout(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, struct amount_sat fee UNNEEDED, u64 htlc_id UNNEEDED, u32 cltv_expiry UNNEEDED, u64 commit_num UNNEEDED, const struct bitcoin_signature *remote_htlc_sig UNNEEDED, const u8 *wscript UNNEEDED, const u8 *htlc_wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_htlc_timeout called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_penalty */
u8 *towire_onchaind_spend_penalty(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, const struct secret *remote_per_commitment_secret UNNEEDED, const u8 *stack_elem UNNEEDED, const u8 *wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_penalty called!\n"); abort(); }
/* Generated stub for towire_onchaind_spend_to_us */
u8 *towire_onchaind_spend_to_us(const tal_t *ctx UNNEEDED, const struct bitcoin_outpoint *outpoint UNNEEDED, struct amount_sat outpoint_amount UNNEEDED, u32 minblock UNNEEDED, u64 commit_num UNNEEDED, const u8 *wscript UNNEEDED)
{ fprintf(stderr, "towire_onchaind_spend_to_us called!\n"); abort(); }
/* Generated stub for towire_onchaind_unwatch_tx */
u8 *towire_onchaind_unwatch_tx(const tal_t *ctx UNNEEDED, const struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "towire_onchaind_unwatch_tx called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u16 */
void towire_u16(u8 **pptr UNNEEDED, u16 v UNNEEDED)
{ fprintf(stderr, "towire_u16 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* Generated stub for wire_sync_read */
u8 *wire_sync_read(const tal_t *ctx UNNEEDED, int fd UNNEEDED)
{ fprintf(stderr, "wire_sync_read called!\n"); abort(); }
/* Generated stub for wire_sync_write */
bool wire_sync_write(int fd UNNEEDED, const void *msg TAKES UNNEEDED)
{ fprintf(stderr, "wire_sync_write called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#if DEVELOPER
/* Generated stub for memleak_ptr */
bool memleak_ptr(struct htable *memtable UNNEEDED, const void *p UNNEEDED)
{ fprintf(stderr, "memleak_ptr called!\n"); abort(); }
/* Generated stub for memleak_status_broken */
void memleak_status_broken(const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "memleak_status_broken called!\n"); abort(); }
/* Generated stub for dump_memleak */
bool dump_memleak(struct htable *memtable UNNEEDED,
		  void  (*print)(const char *fmt UNNEEDED, ...))
{ fprintf(stderr, "dump_memleak called!\n"); abort(); }
#endif

int main(int argc, char *argv[])
{
	common_setup(argv[0]);

	struct bitcoin_tx *tx;
	struct bitcoin_signature sig;
	u8 *der, *wscript;
	struct amount_sat fee;
	struct pubkey htlc_key;
	struct keyset *keys;
	struct timeabs start, end;
	int iterations = 1000;
	u8 *spk = tal_arr(tmpctx, u8, 1);
	spk[0] = 0x00;

	chainparams = chainparams_for_network("bitcoin");
	tx = bitcoin_tx_from_hex(tmpctx, "0200000001e1ebca08cf1c301ac563580a1126d5c8fcb0e5e2043230b852c726553caf1e1d0000000000000000000160ae0a000000000022002082e03c5a9cb79c82cd5a0572dc175290bc044609aabe9cc852d61927436041796d000000",
				 strlen("0200000001e1ebca08cf1c301ac563580a1126d5c8fcb0e5e2043230b852c726553caf1e1d0000000000000000000160ae0a000000000022002082e03c5a9cb79c82cd5a0572dc175290bc044609aabe9cc852d61927436041796d000000"));
	tx->chainparams = chainparams_for_network("regtest");
	psbt_input_set_wit_utxo(tx->psbt, 0, spk, AMOUNT_SAT(700000));
	tx->chainparams = chainparams_for_network("bitcoin");
	der = tal_hexdata(tmpctx, "30450221009b2e0eef267b94c3899fb0dc7375012e2cee4c10348a068fe78d1b82b4b14036022077c3fad3adac2ddf33f415e45f0daf6658b7a0b09647de4443938ae2dbafe2b9" "01",
			  strlen("30450221009b2e0eef267b94c3899fb0dc7375012e2cee4c10348a068fe78d1b82b4b14036022077c3fad3adac2ddf33f415e45f0daf6658b7a0b09647de4443938ae2dbafe2b9" "01"));
	if (!signature_from_der(der, tal_count(der), &sig))
		abort();

	wscript = tal_hexdata(tmpctx, "76a914a8c40c334351dbe8e5908544f1c98fbcfb8719fc8763ac6721038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f7c820120876475527c2103cf8e2f193a6aed60db80af75f3c8d59c2de735b299b7c7083527be9bd23b77a852ae67a914b8bcd51efa35be1e50ae2d5f72f4500acb005c9c88ac6868", strlen("76a914a8c40c334351dbe8e5908544f1c98fbcfb8719fc8763ac6721038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f7c820120876475527c2103cf8e2f193a6aed60db80af75f3c8d59c2de735b299b7c7083527be9bd23b77a852ae67a914b8bcd51efa35be1e50ae2d5f72f4500acb005c9c88ac6868"));
	if (!pubkey_from_hexstr("038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f",
				strlen("038ffd2621647812011960152bfb79c5a2787dfe6c4f37e2222547de054432eb7f"),
				&htlc_key))
		abort();

	/* Dance around a little because keyset is const */
	keys = tal(tmpctx, struct keyset);
	keys->other_htlc_key = htlc_key;
	keyset = keys;

	if (argc > 1)
		iterations = atoi(argv[1]);
	max_possible_feerate = 250000;
	min_possible_feerate = max_possible_feerate + 1 - iterations;

	start = time_now();
	if (!grind_htlc_tx_fee(&fee, tx, &sig, wscript, 663))
		abort();
	end = time_now();
	assert(amount_sat_eq(fee, AMOUNT_SAT(165750)));
	printf("%u iterations in %"PRIu64" msec = %"PRIu64" nsec each\n",
	       iterations,
	       time_to_msec(time_between(end, start)),
	       time_to_nsec(time_divide(time_between(end, start), iterations)));

	common_shutdown();
	return 0;
}
