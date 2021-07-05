// Enum EasyEmail.ESmtpConnectionType
enum class ESmtpConnectionType : uint8 {
	NoEncryption,
	SSL,
	StartTLS,
	ESmtpConnectionType_MAX,
};

// Enum EasyEmail.ESmtpServerType
enum class ESmtpServerType : uint8 {
	SMTP,
	ESMTP,
	ESmtpServerType_MAX,
};

// Enum EasyEmail.EContentTransfertEncoding
enum class EContentTransfertEncoding : uint8 {
	BASE64,
	QUOTED_PRINTABLE,
	_8BIT,
	_7BIT,
	BINARY,
	xtoken,
	EContentTransfertEncoding_MAX,
};

// Enum EasyEmail.EEmailCharset
enum class EEmailCharset : uint8 {
	big5,
	euc_kr,
	iso_8859_2,
	iso_8859_3,
	iso_8859_4,
	iso_8859_5,
	iso_8859_6,
	iso_8859_7,
	iso_8859_8,
	iso_8859_9,
	koi8_r,
	shift_jis,
	x_euc,
	utf_9,
	windows_1251,
	windows_1252,
	windows_1253,
	windows_1254,
	windows_1255,
	windows_1256,
	windows_1257,
	windows_1258,
	windows_1259,
	windows_875,
	EEmailCharset_MAX,
};

