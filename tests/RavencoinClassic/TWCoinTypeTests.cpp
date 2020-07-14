// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWRavencoinClassicCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeRavencoinClassic));
    auto txId = TWStringCreateWithUTF8Bytes("t123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeRavencoinClassic, txId));
    auto accId = TWStringCreateWithUTF8Bytes("a12");
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeRavencoinClassic, accId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeRavencoinClassic));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeRavencoinClassic));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeRavencoinClassic), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeRavencoinClassic));
    ASSERT_EQ(0x7a, TWCoinTypeP2shPrefix(TWCoinTypeRavencoinClassic));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeRavencoinClassic));
    assertStringsEqual(symbol, "RVC");
    assertStringsEqual(txUrl, "https://explorer.ravencoinclassic.io/tx/t123");
    assertStringsEqual(accUrl, "https://explorer.ravencoinclassic.io/address/a12");
    assertStringsEqual(id, "ravencoinClassic");
    assertStringsEqual(name, "RavencoinClassic");
}
