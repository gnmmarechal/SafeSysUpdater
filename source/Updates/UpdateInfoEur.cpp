//
// Created by cpasjuste on 11/01/16.
//

#include "UpdateInfoEur.h"

UpdateInfoEur::UpdateInfoEur(int deviceType) {

    this->region = "EUR";
    this->version = "2.1.0-4";

    if(deviceType == 2  || deviceType == 4) {

        this->model = "n3DS";
        //These MD5 hashes were obtained using MD5SUM.EXE, these are the same as the ones used by brocolli.

        items.push_back(UpdateItem("1d629186ef56962b631641e82f711f37", "/updates/0004001000022000.cia"));
        items.push_back(UpdateItem("eb62bd8a6163ee3cac1ea5d860289041", "/updates/0004001000022100.cia"));
        items.push_back(UpdateItem("320469e732c58b8d8d478b16455ea364", "/updates/0004001000022200.cia"));
        items.push_back(UpdateItem("5b61c55b6b3a00ce11d99127979ce681", "/updates/0004001000022300.cia"));
        items.push_back(UpdateItem("d5f46a8ef9a197ecaaac567b1da5dd92", "/updates/0004001000022400.cia"));
        items.push_back(UpdateItem("c2c6d1dcaa44474a4f0d9e2865c160a3", "/updates/0004001000022500.cia"));
        items.push_back(UpdateItem("0dfce0d9761f2a1b03e529498dab4916", "/updates/0004001000022700.cia"));
        items.push_back(UpdateItem("e2bd3bd60a879828d8bb29c857077375", "/updates/0004001000022800.cia"));
        items.push_back(UpdateItem("b7dc90170feb15e7e34c5f2f2650e306", "/updates/0004001000022900.cia"));
        items.push_back(UpdateItem("a008d6e88ed44266758b5b920dd80267", "/updates/0004001000022A00.cia"));
        items.push_back(UpdateItem("96ea147011408c7f6c32099d424d1cd3", "/updates/0004001000022B00.cia"));
	items.push_back(UpdateItem("a5e49ac7a128432a3221c7a78f5e2d68", "/updates/0004001000022D00.cia"));
	items.push_back(UpdateItem("4b4bae8fd6da2069513c1a8ea0ffcc5a", "/updates/0004001000022E00.cia"));
	items.push_back(UpdateItem("a031110b7f9cf856f7d8c59ddde59d0c", "/updates/0004001000022F00.cia"));
	items.push_back(UpdateItem("52f2ff1a14ae7677ef6bc5cd08358418", "/updates/0004001000025000.cia"));
	items.push_back(UpdateItem("e8cae7dd5c8c4d5a7d453f1a1e806ab1", "/updates/0004001B00010002.cia"));
	items.push_back(UpdateItem("bb801599797b606f7e06ff135a3f41de", "/updates/0004003000008A02.cia"));
	items.push_back(UpdateItem("4302c1686da2314ee370be48fbb8ba97", "/updates/0004003000008A03.cia"));
	items.push_back(UpdateItem("e676f73948061b25378d825af53f5a15", "/updates/0004003000009802.cia"));
	items.push_back(UpdateItem("9a9da1f492bb80a6208ae9daeebbe7e8", "/updates/0004003000009902.cia"));
	items.push_back(UpdateItem("136fb59422f81c34b9f5d087cdb9afef", "/updates/0004003000009B02.cia"));
	items.push_back(UpdateItem("0013a9a02e33cd87e70acfb543ce53d9", "/updates/0004003000009C02.cia"));
	items.push_back(UpdateItem("248f74ae300b9bc9d8aa4faff1321a13", "/updates/0004003000009D02.cia"));
	items.push_back(UpdateItem("bbcd426bcd0053af9dc29b6dee1a56e3", "/updates/0004003000009F02.cia"));
	items.push_back(UpdateItem("ec5a0448cb15b1424d2ab09b4f573930", "/updates/000400300000A002.cia"));
	items.push_back(UpdateItem("48dfad4d2a5370a4c61054106110dd63", "/updates/000400300000C502.cia"));
	items.push_back(UpdateItem("6e06f9f68b216866de6110883fd5b6af", "/updates/000400300000C503.cia"));
	items.push_back(UpdateItem("239bee1d3808fbe959c810b86f404e83", "/updates/000400300000D002.cia"));
	items.push_back(UpdateItem("3600eb9631290a559076c40d08adb81f", "/updates/000400300000D003.cia"));
	items.push_back(UpdateItem("fbaa5c1a216d27e1fea16e9cafc64564", "/updates/000400300000D102.cia"));
	items.push_back(UpdateItem("7610acfed0e98b0b335e89f3957b1484", "/updates/000400300000D302.cia"));
	items.push_back(UpdateItem("929345f7c07a99d9c051b22fe5e3c5db", "/updates/000400300000D402.cia"));
	items.push_back(UpdateItem("b36876609c4362ae28211c0c3da46045", "/updates/0004009B00010202.cia"));
	items.push_back(UpdateItem("86377211d8425336d87e0233c47e74bc", "/updates/0004009B00010402.cia"));
	items.push_back(UpdateItem("04757c3d842dc2850dc7eef8fb4ef502", "/updates/0004009B00010602.cia"));
	items.push_back(UpdateItem("a83e208e6a0bb25b68b713c33ac51323", "/updates/0004009B00011202.cia"));
	items.push_back(UpdateItem("5e0bab239742ba9459d78d639b5b9d21", "/updates/0004009B00011302.cia"));
	items.push_back(UpdateItem("de32921f1117aafec22960e6e3bd910d", "/updates/0004009B00011502.cia"));
	items.push_back(UpdateItem("14b1c122d2f02fc3c618648e61b1064f", "/updates/0004009B00011702.cia"));
	items.push_back(UpdateItem("2df4e9315d5d51d6ce2a14e673cc2866", "/updates/0004009B00011802.cia"));
	items.push_back(UpdateItem("bf23a6beb8f31a3bcfd314bc9d839da3", "/updates/0004009B00011B02.cia"));
	items.push_back(UpdateItem("a3dcbd6c72740be3a772d37adaa97e9a", "/updates/0004009B00011C02.cia"));
	items.push_back(UpdateItem("039260bc53ab2a6ff11f3725501a1446", "/updates/0004009B00011D02.cia"));
	items.push_back(UpdateItem("406ed53efb2484a3f7639010aaf95509", "/updates/0004009B00012102.cia"));
	items.push_back(UpdateItem("632a130c93794b0cf726af8d80ff8286", "/updates/0004009B00013102.cia"));
	items.push_back(UpdateItem("7970c352474532e7b1738e9988b5f09a", "/updates/0004009B00014002.cia"));
	items.push_back(UpdateItem("c11ccd5c2045bfd8785f05ac7b63eac5", "/updates/0004009B00014102.cia"));
	items.push_back(UpdateItem("b47dfa2283cb3ece2b65e39d23cacc2a", "/updates/0004009B00014202.cia"));
	items.push_back(UpdateItem("35426b2868ad37c5aa70b269756d1d38", "/updates/0004009B00014302.cia"));
	items.push_back(UpdateItem("86a201d5d13be4528828135ad9f54b7f", "/updates/0004009B00015102.cia"));
	items.push_back(UpdateItem("19f63a2994a8b140d2e05e2e29246e9a", "/updates/000400DB00010302.cia"));
	items.push_back(UpdateItem("0b1940b58dafe4dae7dc7c294ef39b59", "/updates/000400DB00010502.cia"));
	items.push_back(UpdateItem("02894e3ec82a92e96939a92f23931290", "/updates/000400DB00016102.cia"));
	items.push_back(UpdateItem("393132963eb044abcf3c36ccf9704bd2", "/updates/000400DB00017102.cia"));
	items.push_back(UpdateItem("5974e0d1f62cf44eb7d3f7247b4fea67", "/updates/0004013000001502.cia"));
	items.push_back(UpdateItem("69d36484ad3b32ea6179cbe00423b937", "/updates/0004013000001503.cia"));
	items.push_back(UpdateItem("e929f6173ce15083ff1d3c6951c47f30", "/updates/0004013000001602.cia"));
	items.push_back(UpdateItem("445d1a888d992a20aaa0bdd7882446f0", "/updates/0004013000001702.cia"));
	items.push_back(UpdateItem("d091987acd5bfeb60778e1a1f36ac07d", "/updates/0004013000001703.cia"));
	items.push_back(UpdateItem("07e6545ba8961509ea24b97a20a19d06", "/updates/0004013000001802.cia"));
	items.push_back(UpdateItem("7d9b40bdfdb0e21cb920df026c560c3f", "/updates/0004013000001803.cia"));
	items.push_back(UpdateItem("648ec2148faa77dbda1f0c56dfa83329", "/updates/0004013000001A02.cia"));
	items.push_back(UpdateItem("94cd6bb6efb2ce35f279fa5c3af0f4ca", "/updates/0004013000001A03.cia"));
	items.push_back(UpdateItem("b0befb8d1000fd0d39347a365fc9aaf8", "/updates/0004013000001B02.cia"));
	items.push_back(UpdateItem("9fb5c904cad65a87fb6720bf4730af8b", "/updates/0004013000001B03.cia"));
	items.push_back(UpdateItem("3f9836de937d195eaab058712284a8cc", "/updates/0004013000001C02.cia"));
	items.push_back(UpdateItem("1cd5c8bb84097198ee83b832b14ccc99", "/updates/0004013000001C03.cia"));
	items.push_back(UpdateItem("59778c9884a7bc20921614aec0f95db9", "/updates/0004013000001D02.cia"));
	items.push_back(UpdateItem("6e4dc80cbf34824b584208b57c97d3cc", "/updates/0004013000001D03.cia"));
	items.push_back(UpdateItem("e2cef3eb4e4d74713828e75914d32a35", "/updates/0004013000001E02.cia"));
	items.push_back(UpdateItem("5b41ffc08dac696aa7bdde15485f9067", "/updates/0004013000001E03.cia"));
	items.push_back(UpdateItem("01718e0d787853af02c6232165a97d7e", "/updates/0004013000001F02.cia"));
	items.push_back(UpdateItem("9c98936d8ba02db18fea0a4cfe203220", "/updates/0004013000001F03.cia"));
	items.push_back(UpdateItem("c0f8d036b0fe7457470a194b9d9eaded", "/updates/0004013000002002.cia"));
	items.push_back(UpdateItem("111bbd681f0950206a9fcc21e25bab89", "/updates/0004013000002102.cia"));
	items.push_back(UpdateItem("22db18022cd83f0696bb8ec594eb9958", "/updates/0004013000002103.cia"));
	items.push_back(UpdateItem("28f07576789b44713bb646e5b04f2ffd", "/updates/0004013000002202.cia"));
	items.push_back(UpdateItem("370090ef93b810585f20d6fb57ec6d9d", "/updates/0004013000002203.cia"));
	items.push_back(UpdateItem("b3527b5626afaf2f265916cfb010da5d", "/updates/0004013000002302.cia"));		items.push_back(UpdateItem("88e8d05c03c8abe7f90488ffcdc4542c", "/updates/0004013000002303.cia"));
	items.push_back(UpdateItem("4f9f66934955a7adbd93e97edadc1bb5", "/updates/0004013000002402.cia"));
	items.push_back(UpdateItem("51fdb8536eb83762b4dd57800cde08a0", "/updates/0004013000002403.cia"));
	items.push_back(UpdateItem("49bdab680c5ef513fd1ce51628c799ba", "/updates/0004013000002602.cia"));
	items.push_back(UpdateItem("7309a0b3377ba1369b5ed88e0814307c", "/updates/0004013000002702.cia"));
	items.push_back(UpdateItem("f4992a20462a4a41aef37d897aea9b08", "/updates/0004013000002703.cia"));
	items.push_back(UpdateItem("9187a625a883820d02266bc09999277a", "/updates/0004013000002802.cia"));
	items.push_back(UpdateItem("bd042aedf12eba60471276e7ea9c3aee", "/updates/0004013000002902.cia"));
	items.push_back(UpdateItem("fca89ddc17e3e892516b0f81b8958743", "/updates/0004013000002903.cia"));
	items.push_back(UpdateItem("56df1365f74ab590e01998b59b8f3d6e", "/updates/0004013000002A02.cia"));
	items.push_back(UpdateItem("65b0a9ae7d7b27bdeebb6433b6b838f4", "/updates/0004013000002A03.cia"));
	items.push_back(UpdateItem("aa084ade84fba71754d2f400080461e4", "/updates/0004013000002B02.cia"));
	items.push_back(UpdateItem("a7921f40bd9cdd84dee849a5f9587e28", "/updates/0004013000002C02.cia"));
	items.push_back(UpdateItem("0616e72ccc3132a6b78bca6356caafc5", "/updates/0004013000002C03.cia"));
	items.push_back(UpdateItem("8b8b762282fa11064dbbdf62c955b5d7", "/updates/0004013000002D02.cia"));
	items.push_back(UpdateItem("e4241db05b381a418c9946ccb6544880", "/updates/0004013000002D03.cia"));
	items.push_back(UpdateItem("64b50be151513052186a6e9b5d33e09e", "/updates/0004013000002E02.cia"));
	items.push_back(UpdateItem("14f24e1ba6f840680ca4fa7d9b69b6f1", "/updates/0004013000002E03.cia"));
	items.push_back(UpdateItem("a1634c4ebde169c55c976670899a5792", "/updates/0004013000002F02.cia"));
	items.push_back(UpdateItem("14d067ecb8fa9180e59ee839a1fb83b0", "/updates/0004013000002F03.cia"));
	items.push_back(UpdateItem("8288b9dffd5094a15ea30b572ed3514e", "/updates/0004013000003102.cia"));
	items.push_back(UpdateItem("d85788aefb07b6c07b1da9b84ee017b1", "/updates/0004013000003103.cia"));
	items.push_back(UpdateItem("7f78c61ac21874bd667574ad6424c660", "/updates/0004013000003202.cia"));
	items.push_back(UpdateItem("69e1981acea2949da61ec2612ef5a6c8", "/updates/0004013000003203.cia"));
	items.push_back(UpdateItem("482ccac6d2d2bff5c9f5aa557c033b3a", "/updates/0004013000003302.cia"));
	items.push_back(UpdateItem("59050620268e9409d8678ab04b366288", "/updates/0004013000003303.cia"));
	items.push_back(UpdateItem("a25a603442ea0ea5fca0ec2d922d2633", "/updates/0004013000003402.cia"));
	items.push_back(UpdateItem("91c5ee12c288575e1bedba509b241eb7", "/updates/0004013000003502.cia"));
	items.push_back(UpdateItem("3fac9782cc5bf6c53059edd6be4f0f97", "/updates/0004013000003702.cia"));
	items.push_back(UpdateItem("bbded37267cc61288db5a67da653ef52", "/updates/0004013000008002.cia"));
	items.push_back(UpdateItem("a020ed9d40dd8b592551ce98edefac9f", "/updates/0004013000008003.cia"));
	items.push_back(UpdateItem("dade4902c849a48208c459b792f80aad", "/updates/0004013800000002.cia"));
	items.push_back(UpdateItem("cbe759d0fe2407e821cf16acf00d012d", "/updates/0004013800000003.cia"));
	items.push_back(UpdateItem("066a5ce2db86494a078b4820a0d94a9b", "/updates/0004013800000102.cia"));
        
    } else {

        this->model = "o3DS";

        items.push_back( UpdateItem("7d9e073a6349ddef77e67b2102b4eea5", "/updates/0004001000022000.cia") );
        items.push_back( UpdateItem("d94061a7387a3a2438895d10523ff9c2", "/updates/0004001000022100.cia") );
        items.push_back( UpdateItem("f460448f3482fbd153ecb555c337a6de", "/updates/0004001000022200.cia") );
        items.push_back( UpdateItem("f52fa30987432dc65b6dae551965ce95", "/updates/0004001000022300.cia") );
        items.push_back( UpdateItem("eb506a019b83caea2155a3592d6c9652", "/updates/0004001000022400.cia") );
        items.push_back( UpdateItem("5ce934e33d63ada02f4cedd7d28cee11", "/updates/0004001000022500.cia") );
        items.push_back( UpdateItem("45fc957da2121aad34db2f7b127e9f89", "/updates/0004001000022700.cia") );
        items.push_back( UpdateItem("e33148da0504180812d6a3c1a0cc8e29", "/updates/0004001000022800.cia") );
        items.push_back( UpdateItem("94b0d7152bab79b299dcfe062935ba87", "/updates/0004001000022900.cia") );
        items.push_back( UpdateItem("d3ba8936dbe7c32c91621df44beaad72", "/updates/0004001000022A00.cia") );
        items.push_back( UpdateItem("4385b58e5a8c85ffe879d8f0f5cd07bd", "/updates/0004001000022B00.cia") );
        items.push_back( UpdateItem("18913d7e10870db621a25d5217b68b50", "/updates/0004001000022D00.cia") );
        items.push_back( UpdateItem("347c62dc065c7887fa111c5ca504e1bc", "/updates/0004001000022E00.cia") );
        items.push_back( UpdateItem("fbce1dfec5ad92681e57b276ac8890c5", "/updates/0004001000022F00.cia") );
        items.push_back( UpdateItem("52f2ff1a14ae7677ef6bc5cd08358418", "/updates/0004001000025000.cia") );
        items.push_back( UpdateItem("e8cae7dd5c8c4d5a7d453f1a1e806ab1", "/updates/0004001B00010002.cia") );
        items.push_back( UpdateItem("3bd5e62beebe124ea662f9fc89815dcf", "/updates/0004001B00010702.cia") );
        items.push_back( UpdateItem("be1820ae45e830f8fd7e116b2335b8ca", "/updates/0004001B00010802.cia") );
        items.push_back( UpdateItem("2986460040199c56b59675dc605bdbb6", "/updates/0004001B00018002.cia") );
        items.push_back( UpdateItem("8a52dabcf88911638995a615c8e5c6d0", "/updates/0004001B00018102.cia") );
        items.push_back( UpdateItem("8a91c3c61d3ed0d6ff2d50708d709334", "/updates/0004001B00018202.cia") );
        items.push_back( UpdateItem("c4b629e3b29772b01c027e0271e6e351", "/updates/0004003000008A02.cia") );
        items.push_back( UpdateItem("4302c1686da2314ee370be48fbb8ba97", "/updates/0004003000008A03.cia") );
        items.push_back( UpdateItem("ef39ef454aff24ae079e232c065f2518", "/updates/0004003000009802.cia") );
        items.push_back( UpdateItem("4d0f2d9e67967c4f2199c1738c699873", "/updates/0004003000009902.cia") );
        items.push_back( UpdateItem("2853cafc2d474470fc40ef57937e150f", "/updates/0004003000009B02.cia") );
        items.push_back( UpdateItem("3b4ceee32b305d2da002df33e1393655", "/updates/0004003000009C02.cia") );
        items.push_back( UpdateItem("7b9207c958d998a699e1d0d76c0ba8a1", "/updates/0004003000009D02.cia") );
        items.push_back( UpdateItem("1459b4bc1c93c051f0b0377b2716c40d", "/updates/0004003000009F02.cia") );
        items.push_back( UpdateItem("b8465ae1c4e6eb2eb2fe67ebe30b1f04", "/updates/000400300000A002.cia") );
        items.push_back( UpdateItem("0160cc744d884c8a30a1bd2cae2767fa", "/updates/000400300000BE02.cia") );
        items.push_back( UpdateItem("cca7a8844b8a0f94c08b7bbe41a515ac", "/updates/000400300000C502.cia") );
        items.push_back( UpdateItem("6e06f9f68b216866de6110883fd5b6af", "/updates/000400300000C503.cia") );
        items.push_back( UpdateItem("7238145a566868a989f6f08305531679", "/updates/000400300000CD02.cia") );
        items.push_back( UpdateItem("4146e665716b5f3ae9199578148c81c6", "/updates/000400300000D002.cia") );
        items.push_back( UpdateItem("3600eb9631290a559076c40d08adb81f", "/updates/000400300000D003.cia") );
        items.push_back( UpdateItem("96723409316d1acbfb7b3fa917ad12ec", "/updates/000400300000D102.cia") );
        items.push_back( UpdateItem("be827724afdcaf73eb8444e1e62a5837", "/updates/000400300000D302.cia") );
        items.push_back( UpdateItem("1a00f5e0600b59a974c2e20d9737f2e3", "/updates/000400300000D402.cia") );
        items.push_back( UpdateItem("1850c363b1a176e884cfa410ec812008", "/updates/000400300000D602.cia") );
        items.push_back( UpdateItem("82a3c23a561eb942614d5ff325d77f0a", "/updates/000400300000F602.cia") );
        items.push_back( UpdateItem("b36876609c4362ae28211c0c3da46045", "/updates/0004009B00010202.cia") );
        items.push_back( UpdateItem("5c1a500ee012c0c417f4f44dfbd1f79c", "/updates/0004009B00010402.cia") );
        items.push_back( UpdateItem("6d7673c8487dc231002f1ddc6ee79bf3", "/updates/0004009B00010602.cia") );
        items.push_back( UpdateItem("a83e208e6a0bb25b68b713c33ac51323", "/updates/0004009B00011202.cia") );
        items.push_back( UpdateItem("de32921f1117aafec22960e6e3bd910d", "/updates/0004009B00011502.cia") );
        items.push_back( UpdateItem("14b1c122d2f02fc3c618648e61b1064f", "/updates/0004009B00011702.cia") );
        items.push_back( UpdateItem("2df4e9315d5d51d6ce2a14e673cc2866", "/updates/0004009B00011802.cia") );
        items.push_back( UpdateItem("bf23a6beb8f31a3bcfd314bc9d839da3", "/updates/0004009B00011B02.cia") );
        items.push_back( UpdateItem("a3dcbd6c72740be3a772d37adaa97e9a", "/updates/0004009B00011C02.cia") );
        items.push_back( UpdateItem("039260bc53ab2a6ff11f3725501a1446", "/updates/0004009B00011D02.cia") );
        items.push_back( UpdateItem("e9766c7dcbae33a7bdefb0027a1c9aeb", "/updates/0004009B00012102.cia") );
        items.push_back( UpdateItem("1c382fd53103d72a65ead3c5fa0bc371", "/updates/0004009B00013102.cia") );
        items.push_back( UpdateItem("7970c352474532e7b1738e9988b5f09a", "/updates/0004009B00014002.cia") );
        items.push_back( UpdateItem("4eb03910a44a5e25978c7ffaf6a84a03", "/updates/0004009B00014102.cia") );
        items.push_back( UpdateItem("aa170b789a51bd4cf310d815178d53fc", "/updates/0004009B00014202.cia") );
        items.push_back( UpdateItem("10c1345669c8f1fe0ab4b1cad605d6c2", "/updates/0004009B00014302.cia") );
        items.push_back( UpdateItem("8abf178052056e72d107e8d9a89f9483", "/updates/0004009B00015102.cia") );
        items.push_back( UpdateItem("519490e51735812d57ec1fa928c2768e", "/updates/000400DB00010302.cia") );
        items.push_back( UpdateItem("023230096f1ad2e13d2d07da8f966f7e", "/updates/000400DB00010502.cia") );
        items.push_back( UpdateItem("910e88f01b30a3638cf83eaa728817c3", "/updates/000400100002C100.cia") );
        items.push_back( UpdateItem("4e5eb42898e2a06b9795b291e99f0e0b", "/updates/000400300000BA02.cia") );
        items.push_back( UpdateItem("5e0bab239742ba9459d78d639b5b9d21", "/updates/0004009B00011302.cia") );
        items.push_back( UpdateItem("78fdd0a1f0bdc77fdc1da93a50c7879c", "/updates/000400DB00016102.cia") );
        items.push_back( UpdateItem("6e4dc80cbf34824b584208b57c97d3cc", "/updates/0004013000001D03.cia") );
        items.push_back( UpdateItem("f4992a20462a4a41aef37d897aea9b08", "/updates/0004013000002703.cia") );
        items.push_back( UpdateItem("d85788aefb07b6c07b1da9b84ee017b1", "/updates/0004013000003103.cia") );
        items.push_back( UpdateItem("7942a0449307b32e8c2c1904b9bc887e", "/updates/000400DB00017102.cia") );
        items.push_back( UpdateItem("d54e05f09eefdb2acdd9aad5b5f3fda9", "/updates/0004013000001502.cia") );
        items.push_back( UpdateItem("69d36484ad3b32ea6179cbe00423b937", "/updates/0004013000001503.cia") );
        items.push_back( UpdateItem("fd8fe9fbf0594870f7049c4ba74260f3", "/updates/0004013000001602.cia") );
        items.push_back( UpdateItem("bf0a655e9e58a129d9dbb1f600b9ef54", "/updates/0004013000001702.cia") );
        items.push_back( UpdateItem("d091987acd5bfeb60778e1a1f36ac07d", "/updates/0004013000001703.cia") );
        items.push_back( UpdateItem("0545e69671b600f7729a6cb3bf9f663d", "/updates/0004013000001802.cia") );
        items.push_back( UpdateItem("7d9b40bdfdb0e21cb920df026c560c3f", "/updates/0004013000001803.cia") );
        items.push_back( UpdateItem("8492940cb04220a4df48bd4879df9475", "/updates/0004013000001A02.cia") );
        items.push_back( UpdateItem("94cd6bb6efb2ce35f279fa5c3af0f4ca", "/updates/0004013000001A03.cia") );
        items.push_back( UpdateItem("878087f71e996fe9084ba1aa3d05caf8", "/updates/0004013000001B02.cia") );
        items.push_back( UpdateItem("9fb5c904cad65a87fb6720bf4730af8b", "/updates/0004013000001B03.cia") );
        items.push_back( UpdateItem("45a946555a865ee9e5b49e9bf45adab1", "/updates/0004013000001C02.cia") );
        items.push_back( UpdateItem("1cd5c8bb84097198ee83b832b14ccc99", "/updates/0004013000001C03.cia") );
        items.push_back( UpdateItem("70fcaa9466840f77198cfc3af26cb1e4", "/updates/0004013000001D02.cia") );
        items.push_back( UpdateItem("bd38b3217b6e98eeb5e4c2550bce6a8d", "/updates/0004013000001E02.cia") );
        items.push_back( UpdateItem("5b41ffc08dac696aa7bdde15485f9067", "/updates/0004013000001E03.cia") );
        items.push_back( UpdateItem("2af675dc5740bac0407a49b2a665f55d", "/updates/0004013000001F02.cia") );
        items.push_back( UpdateItem("9c98936d8ba02db18fea0a4cfe203220", "/updates/0004013000001F03.cia") );
        items.push_back( UpdateItem("e8e9886d6e301548a8e292ec39685218", "/updates/0004013000002002.cia") );
        items.push_back( UpdateItem("6fcf72e818cfeb4057b253898acc3b57", "/updates/0004013000002102.cia") );
        items.push_back( UpdateItem("22db18022cd83f0696bb8ec594eb9958", "/updates/0004013000002103.cia") );
        items.push_back( UpdateItem("09674bde37d6ab4ad0187538d6b1fc7a", "/updates/0004013000002202.cia") );
        items.push_back( UpdateItem("370090ef93b810585f20d6fb57ec6d9d", "/updates/0004013000002203.cia") );
        items.push_back( UpdateItem("65479e968105ea60ab01ac63cb51cd87", "/updates/0004013000002302.cia") );
        items.push_back( UpdateItem("88e8d05c03c8abe7f90488ffcdc4542c", "/updates/0004013000002303.cia") );
        items.push_back( UpdateItem("d709c39abd711bc96d00b4ffc236adfb", "/updates/0004013000002402.cia") );
        items.push_back( UpdateItem("51fdb8536eb83762b4dd57800cde08a0", "/updates/0004013000002403.cia") );
        items.push_back( UpdateItem("7cf379b8438556cf756b50519090f071", "/updates/0004013000002602.cia") );
        items.push_back( UpdateItem("c242661cb22b900bb8095c0f86a628aa", "/updates/0004013000002702.cia") );
        items.push_back( UpdateItem("00f4911db404e70360b742807d6cef47", "/updates/0004013000002802.cia") );
        items.push_back( UpdateItem("594027a3693ff4b3cb8d5aa33cbb8759", "/updates/0004013000002902.cia") );
        items.push_back( UpdateItem("fca89ddc17e3e892516b0f81b8958743", "/updates/0004013000002903.cia") );
        items.push_back( UpdateItem("1a8c61842c88471640265149544018d8", "/updates/0004013000002A02.cia") );
        items.push_back( UpdateItem("65b0a9ae7d7b27bdeebb6433b6b838f4", "/updates/0004013000002A03.cia") );
        items.push_back( UpdateItem("c708ee846a01e78ce33f1df1dc063b93", "/updates/0004013000002B02.cia") );
        items.push_back( UpdateItem("24e23a86b66a69559357566470f3cc94", "/updates/0004013000002C02.cia") );
        items.push_back( UpdateItem("0616e72ccc3132a6b78bca6356caafc5", "/updates/0004013000002C03.cia") );
        items.push_back( UpdateItem("bbaf00da95bcd48ba30db9c29bc5d710", "/updates/0004013000002D02.cia") );
        items.push_back( UpdateItem("7bc4adecfccb8cc5665daef4dec20836", "/updates/0004013000002D03.cia") );
        items.push_back( UpdateItem("53e56a11ad82534142f4c2aff65b8ce0", "/updates/0004013000002E02.cia") );
        items.push_back( UpdateItem("14f24e1ba6f840680ca4fa7d9b69b6f1", "/updates/0004013000002E03.cia") );
        items.push_back( UpdateItem("562309cbd256b299f394ed4bbde703c6", "/updates/0004013000002F02.cia") );
        items.push_back( UpdateItem("14d067ecb8fa9180e59ee839a1fb83b0", "/updates/0004013000002F03.cia") );
        items.push_back( UpdateItem("fad6e0d994045889b406b8564111c26d", "/updates/0004013000003102.cia") );
        items.push_back( UpdateItem("903fcca30e252a558339ba9be36e64b8", "/updates/0004013000003202.cia") );
        items.push_back( UpdateItem("69e1981acea2949da61ec2612ef5a6c8", "/updates/0004013000003203.cia") );
        items.push_back( UpdateItem("3d2060ebae7152ec7df3dcfc0d5ad4ee", "/updates/0004013000003302.cia") );
        items.push_back( UpdateItem("59050620268e9409d8678ab04b366288", "/updates/0004013000003303.cia") );
        items.push_back( UpdateItem("f40fd755269c4150b84978b41d5abf7b", "/updates/0004013000003402.cia") );
        items.push_back( UpdateItem("772bc9a97125e76d3183cb127786579a", "/updates/0004013000003502.cia") );
        items.push_back( UpdateItem("70d9f078c0728c72b2311e6a2a234f68", "/updates/0004013000003702.cia") );
        items.push_back( UpdateItem("0b875a3aaae9f46248c67d1171843f58", "/updates/0004013000003802.cia") );
        items.push_back( UpdateItem("fef73419d4bed8f6db6a3fae29a7ef71", "/updates/0004013000008002.cia") );
        items.push_back( UpdateItem("a020ed9d40dd8b592551ce98edefac9f", "/updates/0004013000008003.cia") );
        items.push_back( UpdateItem("31d985acb216c8540ad17a9cd1cbb69a", "/updates/0004013800000002.cia") );
        items.push_back( UpdateItem("4d284baac2a26b504a7380b53bca02e0", "/updates/0004013800000003.cia") );
        items.push_back( UpdateItem("f36757b1070f0c7d2321915a82b5da92", "/updates/0004013800000102.cia") );
        items.push_back( UpdateItem("e32824752ab08d57532fed8d37dbf242", "/updates/0004013800000202.cia") );
        items.push_back( UpdateItem("40ea1a5aab4c6260a8513606bbec67f0", "/updates/0004800542383841.cia") );
        items.push_back( UpdateItem("488f4ec7d3686042de8d3537d24f8ec1", "/updates/00048005484E4441.cia") );
        items.push_back( UpdateItem("b2b788d315eb4633bc3a0258dd3b1015", "/updates/0004800F484E4841.cia") );
        items.push_back( UpdateItem("19208ad79ec6c262573448e10a754e5e", "/updates/0004800F484E4C41.cia") );
    }
}
