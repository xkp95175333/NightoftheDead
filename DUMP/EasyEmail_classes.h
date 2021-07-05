// Class EasyEmail.Email
// Size: 0x198 (Inherited: 0x28)
struct UEmail : UObject {
	struct FMulticastInlineDelegate OnEmailSent; // 0x28(0x10)
	struct FMulticastInlineDelegate OnEmailError; // 0x38(0x10)
	char pad_48[0x150]; // 0x48(0x150)

	void SetSubject(struct FString Subject); // Function EasyEmail.Email.SetSubject // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a520
	void SetServerType(enum class ESmtpServerType Server); // Function EasyEmail.Email.SetServerType // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a4a0
	void SetServerPort(int32_t Port); // Function EasyEmail.Email.SetServerPort // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a410
	void SetServerAddress(struct FString Address); // Function EasyEmail.Email.SetServerAddress // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a370
	void SetSender(struct FString EmailSender); // Function EasyEmail.Email.SetSender // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a2d0
	void SetHeader(struct FString HeaderName, struct FString HeaderValue); // Function EasyEmail.Email.SetHeader // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a1d0
	void SetCredentials(struct FString InUsername, struct FString InPassword); // Function EasyEmail.Email.SetCredentials // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a0d0
	void SetContentCharset(enum class EEmailCharset Charset); // Function EasyEmail.Email.SetContentCharset // (Final|Native|Public|BlueprintCallable) // @ game+0xd0a050
	void SetContent(struct FString EmailContent, struct FString MimeType); // Function EasyEmail.Email.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0xd09f50
	void SetConnectionType(enum class ESmtpConnectionType Connection); // Function EasyEmail.Email.SetConnectionType // (Final|Native|Public|BlueprintCallable) // @ game+0xd09ed0
	void SetClientDomain(struct FString Domain); // Function EasyEmail.Email.SetClientDomain // (Final|Native|Public|BlueprintCallable) // @ game+0xd09e30
	void Send(); // Function EasyEmail.Email.Send // (Final|Native|Public|BlueprintCallable) // @ game+0xd08780
	void RemoveAttachmentFromCache(struct FString DisplayName); // Function EasyEmail.Email.RemoveAttachmentFromCache // (Final|Native|Public|BlueprintCallable) // @ game+0xd086e0
	void RemoveAttachment(struct FString DisplayName); // Function EasyEmail.Email.RemoveAttachment // (Final|Native|Public|BlueprintCallable) // @ game+0xd08640
	bool IsEmailSending(); // Function EasyEmail.Email.IsEmailSending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd08610
	struct UEmail* CreateInitializedEmail(enum class ESmtpServerType serverType, enum class ESmtpConnectionType Connection, struct FString ServerAddress, int32_t Port); // Function EasyEmail.Email.CreateInitializedEmail // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd080a0
	struct UEmail* CreateEmail(); // Function EasyEmail.Email.CreateEmail // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08070
	void AddReceiver(struct FString EmailReceiver); // Function EasyEmail.Email.AddReceiver // (Final|Native|Public|BlueprintCallable) // @ game+0xd07fd0
	bool AddFileAsAttachment(struct FString DisplayName, struct FString Path, struct FString MimeType); // Function EasyEmail.Email.AddFileAsAttachment // (Final|Native|Public|BlueprintCallable) // @ game+0xd07e70
	void AddDataAsAttachment(struct FString DisplayName, struct FString MimeType, struct FString data, enum class EContentTransfertEncoding Encoding); // Function EasyEmail.Email.AddDataAsAttachment // (Final|Native|Public|BlueprintCallable) // @ game+0xd07ce0
	void AddCopyCarbon(struct FString EmailAddress); // Function EasyEmail.Email.AddCopyCarbon // (Final|Native|Public|BlueprintCallable) // @ game+0xd07c40
	void AddBlindCopyCarbon(struct FString EmailAddress); // Function EasyEmail.Email.AddBlindCopyCarbon // (Final|Native|Public|BlueprintCallable) // @ game+0xd07ba0
};

// Class EasyEmail.EmailLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEmailLibrary : UBlueprintFunctionLibrary {

	struct FString GetYahooEmailSmtpAddress(); // Function EasyEmail.EmailLibrary.GetYahooEmailSmtpAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd084e0
	struct FString GetOutlookSmtpAddress(); // Function EasyEmail.EmailLibrary.GetOutlookSmtpAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08300
	struct FString GetOffice365SmtpAddress(); // Function EasyEmail.EmailLibrary.GetOffice365SmtpAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08460
	struct FString GetMimeTypeFromFileName(struct FString Filename); // Function EasyEmail.EmailLibrary.GetMimeTypeFromFileName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08380
	struct FString GetHotmailSmtpAddress(); // Function EasyEmail.EmailLibrary.GetHotmailSmtpAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08300
	struct FString GetGmailSmtpAddress(); // Function EasyEmail.EmailLibrary.GetGmailSmtpAddress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08280
	int32_t GetDefaultPortForConnection(enum class ESmtpConnectionType Connection); // Function EasyEmail.EmailLibrary.GetDefaultPortForConnection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd08200
};

// Class EasyEmail.SendEmailProxy
// Size: 0x60 (Inherited: 0x30)
struct USendEmailProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnEmailSent; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEmailError; // 0x40(0x10)
	struct UEmail* Email; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	struct USendEmailProxy* SendEmail(enum class ESmtpServerType serverType, enum class ESmtpConnectionType ConnectionType, struct FString ServerAddress, int32_t serverPort, struct FString UserName, struct FString Password, struct FString Subject, struct FString Sender, struct TArray<struct FString> Receivers, struct TArray<struct FString> CopyCarbon, struct TArray<struct FString> BlindCopyCarbon, struct FString MessageContent, struct TArray<struct FString> AttachedFiles); // Function EasyEmail.SendEmailProxy.SendEmail // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd087a0
	void InternalOnEmailSent(); // Function EasyEmail.SendEmailProxy.InternalOnEmailSent // (Final|Native|Private) // @ game+0xd085f0
	void InternalOnEmailError(int32_t ErrorCode); // Function EasyEmail.SendEmailProxy.InternalOnEmailError // (Final|Native|Private) // @ game+0xd08560
};

// Class EasyEmail.SimpleSendEmailProxy
// Size: 0x58 (Inherited: 0x30)
struct USimpleSendEmailProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnEmailSent; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEmailError; // 0x40(0x10)
	struct UEmail* Email; // 0x50(0x08)

	struct USimpleSendEmailProxy* SendEmail(struct UEmail* Email); // Function EasyEmail.SimpleSendEmailProxy.SendEmail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd08ce0
	void InternalOnEmailSent(); // Function EasyEmail.SimpleSendEmailProxy.InternalOnEmailSent // (Final|Native|Private) // @ game+0xd085f0
	void InternalOnEmailError(int32_t ErrorCode); // Function EasyEmail.SimpleSendEmailProxy.InternalOnEmailError // (Final|Native|Private) // @ game+0xd08560
};

// Class EasyEmail.SendEmailWithServerProxy
// Size: 0x108 (Inherited: 0x30)
struct USendEmailWithServerProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate EmailSent; // 0x30(0x10)
	struct FMulticastInlineDelegate FailedToSendEmail; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)
	struct UEmail* Email; // 0x100(0x08)

	void OnEmailSent(); // Function EasyEmail.SendEmailWithServerProxy.OnEmailSent // (Final|Native|Private) // @ game+0xd085f0
	void OnEmailFailedToSend(int32_t Error); // Function EasyEmail.SendEmailWithServerProxy.OnEmailFailedToSend // (Final|Native|Private) // @ game+0xd08560
};

// Class EasyEmail.SendEmailWithGmailProxy
// Size: 0x108 (Inherited: 0x108)
struct USendEmailWithGmailProxy : USendEmailWithServerProxy {

	struct USendEmailWithGmailProxy* SendEmailWithGmail(struct FString SenderEmailAddress, struct FString UserName, struct FString Password, struct TArray<struct FString> To, struct TArray<struct FString> CC, struct TArray<struct FString> BCC, struct FString Subject, struct FString Content, struct TArray<struct FString> AttachedFiles); // Function EasyEmail.SendEmailWithGmailProxy.SendEmailWithGmail // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd08d70
};

// Class EasyEmail.SendEmailWithYahooProxy
// Size: 0x108 (Inherited: 0x108)
struct USendEmailWithYahooProxy : USendEmailWithServerProxy {

	struct USendEmailWithYahooProxy* SendEmailWithYahoo(struct FString SenderEmailAddress, struct FString UserName, struct FString Password, struct TArray<struct FString> To, struct TArray<struct FString> CC, struct TArray<struct FString> BCC, struct FString Subject, struct FString Content, struct TArray<struct FString> AttachedFiles); // Function EasyEmail.SendEmailWithYahooProxy.SendEmailWithYahoo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd09a00
};

// Class EasyEmail.SendEmailWithOutlookProxy
// Size: 0x108 (Inherited: 0x108)
struct USendEmailWithOutlookProxy : USendEmailWithServerProxy {

	struct USendEmailWithOutlookProxy* SendEmailWithOutlook(struct FString SenderEmailAddress, struct FString UserName, struct FString Password, struct TArray<struct FString> To, struct TArray<struct FString> CC, struct TArray<struct FString> BCC, struct FString Subject, struct FString Content, struct TArray<struct FString> AttachedFiles); // Function EasyEmail.SendEmailWithOutlookProxy.SendEmailWithOutlook // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd095d0
};

// Class EasyEmail.SendEmailWithHotmailProxy
// Size: 0x108 (Inherited: 0x108)
struct USendEmailWithHotmailProxy : USendEmailWithServerProxy {

	struct USendEmailWithHotmailProxy* SendEmailWithHotmail(struct FString SenderEmailAddress, struct FString UserName, struct FString Password, struct TArray<struct FString> To, struct TArray<struct FString> CC, struct TArray<struct FString> BCC, struct FString Subject, struct FString Content, struct TArray<struct FString> AttachedFiles); // Function EasyEmail.SendEmailWithHotmailProxy.SendEmailWithHotmail // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd091a0
};

