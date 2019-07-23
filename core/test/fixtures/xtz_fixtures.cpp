// This file was GENERATED by command:
//     generate_fixtures.py
// DO NOT EDIT BY HAND!!!
#include "xtz_fixtures.h"

namespace ledger {
	namespace testing {
		namespace xtz {
			core::api::AccountCreationInfo XPUB_INFO(
			        0, {"xtz"}, {"44'/1729'/0'"}, 
			{ledger::core::hex::toByteArray("02af5696511e23b9e3dc5a527abc6929fae708defb5299f96cfa7dd9f936fe747d")} , {ledger::core::hex::toByteArray("abcc4933bec06eeca6628b9e44f8e71d5e3cf510c0450dd1e29d9aa0f1717da9")}
			);
			std::shared_ptr<core::TezosLikeAccount> inflate(const std::shared_ptr<core::WalletPool>& pool, const std::shared_ptr<core::AbstractWallet>& wallet) {
				auto account = std::dynamic_pointer_cast<core::TezosLikeAccount>(wait(wallet->newAccountWithInfo(XPUB_INFO)));
				soci::session sql(pool->getDatabaseSessionPool()->getPool());
				sql.begin();				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_1));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_2));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_3));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_4));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_5));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_6));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_7));
				account->putTransaction(sql, *core::JSONUtils::parse<core::TezosLikeTransactionParser>(TX_8));
				sql.commit();
				return account;
			}
			const std::string TX_1 = "{\"block_hash\": \"BM5xyTrCQ1CzBBVQeV1TMrHHtpbSwccWtFkN8VFtB82suSYBikP\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT1JLbEZuWFhEyHXtKsvbCNZABXGehkjVyCd\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1420, \"destination\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"op_level\": 441021, \"failed\": false, \"amount\": 150000, \"internal\": false, \"storage_limit\": \"300\", \"timestamp\": \"2019-05-17T07:49:15Z\", \"gas_limit\": \"10300\", \"counter\": 2}], \"source\": {\"tz\": \"KT1JLbEZuWFhEyHXtKsvbCNZABXGehkjVyCd\"}, \"kind\": \"manager\"}, \"hash\": \"opVFeKkgFDdoeNnBBsfkHA1tz9ZfHPm5zAZKJXbAP6WTWtBUGCY\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_2 = "{\"block_hash\": \"BMZZ7wBDd86iw5c5nkru6TRMVofsK8z2FUQzCRm1ik3qRHsG11Q\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1420, \"destination\": {\"tz\": \"KT1JLbEZuWFhEyHXtKsvbCNZABXGehkjVyCd\"}, \"op_level\": 441019, \"failed\": false, \"amount\": 1300000, \"internal\": false, \"storage_limit\": \"300\", \"timestamp\": \"2019-05-17T07:47:15Z\", \"gas_limit\": \"10300\", \"counter\": 1294305}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"ooxSmgcPiGfg25QGEjaDRKbphDwifETGfZKZjwBGgB2MAcHs8WV\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_3 = "{\"block_hash\": \"BLPhw2hhGYxrXkaKqwMDX47QrMpN4PUdRzEXdiV1EVvaQvL6huy\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1420, \"destination\": {\"tz\": \"KT1WUBkzTPSawsNzB3uJjk2kcRJNp5j88K3J\"}, \"op_level\": 441012, \"failed\": false, \"amount\": 1000000, \"internal\": false, \"storage_limit\": \"300\", \"timestamp\": \"2019-05-17T07:40:15Z\", \"gas_limit\": \"10300\", \"counter\": 1294304}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"oooSsXHXVwrW1mMygVP1HWdtoLDspMyUC9JSVPGAuUPGT99Znb7\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_4 = "{\"block_hash\": \"BM7DAEUj8dCNUzViXjg8DyeWtthvorDXMk6ocMwNz7iVo73WNKC\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1420, \"destination\": {\"tz\": \"KT1GdNaQowD3r8VprK8pni2R2DZd5Vxnkvw5\"}, \"op_level\": 424461, \"failed\": false, \"amount\": 100000, \"internal\": false, \"storage_limit\": \"300\", \"timestamp\": \"2019-05-05T11:51:19Z\", \"gas_limit\": \"10300\", \"counter\": 1294302}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"ooPbtVVy7TZLoRirGsCgyy6Esyqm3Kj22QvEVpAmEXX3vHBGbF8\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_5 = "{\"block_hash\": \"BLdPiHYkfqm9cMVMVtyrBmXy8QwnaxuZ6joyS6LxW2CyrdTGUxY\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"KT1GdNaQowD3r8VprK8pni2R2DZd5Vxnkvw5\"}, \"kind\": \"transaction\", \"burn\": 0, \"fee\": 1420, \"destination\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"op_level\": 417723, \"failed\": false, \"amount\": 10000000, \"internal\": false, \"storage_limit\": \"300\", \"timestamp\": \"2019-04-30T15:49:01Z\", \"gas_limit\": \"10300\", \"counter\": 9}], \"source\": {\"tz\": \"KT1GdNaQowD3r8VprK8pni2R2DZd5Vxnkvw5\"}, \"kind\": \"manager\"}, \"hash\": \"opCpARNkFZM8ugpEv26FQ9nxYoQKZHJBZveFFuExqZp9gJqixA6\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_6 = "{\"block_hash\": \"BLPyU9xPufWES64ZLMum2Qaa9MSRqeD5SW9kDSdshJRUJyANKCT\", \"type\": {\"operations\": [{\"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"reveal\", \"fee\": 1269, \"public_key\": \"edpkuySiX9Qi89G5aRaynPxLMqtrrjsMGZAGCUn7u2kBgYH5uxCwEy\", \"timestamp\": \"2019-05-05T10:30:34Z\", \"counter\": 1294300, \"failed\": false, \"op_level\": 424384, \"internal\": false, \"storage_limit\": \"0\", \"gas_limit\": \"10000\"}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"onnctKkBCT2odF4HGjNd2YF3Qua23qh5YZPTFiLXb1HkGg9ANXC\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_7 = "{\"block_hash\": \"BMQrCJVT1jVqQHkYxUYUgs522EKEXRtfENJUidwhct5dm5g1DQU\", \"type\": {\"operations\": [{\"tz1\": {\"tz\": \"KT1JLbEZuWFhEyHXtKsvbCNZABXGehkjVyCd\"}, \"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"origination\", \"burn_tez\": 257000, \"fee\": 1400, \"delegatable\": false, \"failed\": false, \"op_level\": 439824, \"internal\": false, \"storage_limit\": \"257\", \"timestamp\": \"2019-05-16T11:29:01Z\", \"spendable\": false, \"managerPubkey\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"balance\": 0, \"gas_limit\": \"10000\", \"counter\": 1294303}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"opTgrstBbtV84VqHZ8iNdsUyQNuNMv8X2FwJXYpKeZ2MM72CY8x\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
			const std::string TX_8 = "{\"block_hash\": \"BLPyU9xPufWES64ZLMum2Qaa9MSRqeD5SW9kDSdshJRUJyANKCT\", \"type\": {\"operations\": [{\"tz1\": {\"tz\": \"KT1WUBkzTPSawsNzB3uJjk2kcRJNp5j88K3J\"}, \"src\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"origination\", \"burn_tez\": 257000, \"fee\": 1400, \"delegatable\": false, \"failed\": false, \"op_level\": 424384, \"internal\": false, \"storage_limit\": \"257\", \"timestamp\": \"2019-05-05T10:30:34Z\", \"spendable\": false, \"managerPubkey\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"balance\": 0, \"gas_limit\": \"10000\", \"counter\": 1294301}], \"source\": {\"tz\": \"tz1cmN7N6rV9ULVqbL2BxSUZgeL5wnWyoBUE\"}, \"kind\": \"manager\"}, \"hash\": \"onnctKkBCT2odF4HGjNd2YF3Qua23qh5YZPTFiLXb1HkGg9ANXC\", \"network_hash\": \"NetXdQprcVkpaWU\"}";
		}
	}
}