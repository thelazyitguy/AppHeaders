//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GoogleAuthConfig, NSMutableArray, _TtC5Authy19BackupKeyEnrollment;

@interface TokensManager : NSObject
{
    _Bool _authyTokensUpdate;
    NSMutableArray *_tokens;
    NSMutableArray *_decryptedTokens;
    NSMutableArray *_encryptedTokens;
    NSMutableArray *_deletedTokens;
    NSMutableArray *_hiddenTokens;
    GoogleAuthConfig *_gaConfig;
    _TtC5Authy19BackupKeyEnrollment *_backupKeyEnrollment;
}

+ (id)sharedTokensManager;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC5Authy19BackupKeyEnrollment *backupKeyEnrollment; // @synthesize backupKeyEnrollment=_backupKeyEnrollment;
@property _Bool authyTokensUpdate; // @synthesize authyTokensUpdate=_authyTokensUpdate;
@property(retain, nonatomic) GoogleAuthConfig *gaConfig; // @synthesize gaConfig=_gaConfig;
@property(retain, nonatomic) NSMutableArray *hiddenTokens; // @synthesize hiddenTokens=_hiddenTokens;
@property(retain, nonatomic) NSMutableArray *deletedTokens; // @synthesize deletedTokens=_deletedTokens;
@property(retain, nonatomic) NSMutableArray *encryptedTokens; // @synthesize encryptedTokens=_encryptedTokens;
@property(retain, nonatomic) NSMutableArray *decryptedTokens; // @synthesize decryptedTokens=_decryptedTokens;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
- (void)sendEventToAnalyticsWhenAccountIsMadeVisible:(id)arg1;
- (void)sendEventToAnalyticsWhenAccountIsDeleted:(id)arg1;
- (void)sendEventToAnalyticsWhenAccountIsMadeInvisible:(id)arg1;
- (void)sendEventToAnalyticsWhenAccountIsCopied:(id)arg1;
- (void)sendEventToAnalyticsWhenAccountIsSelected:(id)arg1 inRow:(int)arg2 andColumn:(int)arg3;
- (void)sendEventToAnalyticsWhenAccountIsAdded:(id)arg1;
- (void)sendEventToAnalyticsWhenKeychainItemIsNotFoundForToken:(id)arg1 keychainError:(id)arg2 callStack:(id)arg3;
- (void)uploadPublicKeyForApps;
- (void)restoreBackupTokens;
- (void)saveTokensBackup:(id)arg1;
- (id)backupTokens;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)visibleTokens;
- (id)authyVisibleTokens;
- (id)authyTokens;
- (id)decryptedAuthenticatorTokens;
- (id)authenticatorTokens;
- (id)allAuthyTokenIds;
- (id)googleAuthIds;
- (id)findTokenByOrderIndex:(int)arg1;
- (id)getLogoImageForOneTouchRequest:(id)arg1;
- (id)getSidebarImageForOneTouchRequest:(id)arg1;
- (id)getAuthyTokenForOneTouchRequest:(id)arg1;
- (id)findAuthyTokenBySerialId:(long long)arg1 orAppId:(id)arg2;
- (id)findAuthyTokenById:(id)arg1;
- (id)findAuthyTokenBySerialId:(long long)arg1;
- (id)findAuthenticatorTokenById:(id)arg1;
- (id)findTokenById:(id)arg1;
- (id)findTokenByName:(id)arg1;
- (id)findTokenByTypeOrName:(id)arg1;
- (id)tokenAtIndex:(unsigned long long)arg1 mode:(int)arg2;
- (id)hiddenTokenAtIndex:(unsigned long long)arg1;
- (id)deletedTokenAtIndex:(unsigned long long)arg1;
- (id)encryptedTokenAtIndex:(unsigned long long)arg1;
- (id)decryptedTokenAtIndex:(unsigned long long)arg1;
- (_Bool)configureLastTokenSelectedWhenTokenIsDeleted:(id)arg1;
- (void)resetLastTokenSelected;
- (_Bool)tokenSelectedIsTokenToDelete:(id)arg1;
- (void)saveLastTokenSelected:(id)arg1;
- (id)lastTokenSelected;
- (void)uploadPublicKeyForNewToken:(id)arg1;
- (_Bool)downloadAuthyTokens;
- (_Bool)downloadGATokens;
- (_Bool)downloadTokens;
- (void)setOrderIndexForTokens:(id)arg1;
- (void)setNewOrderIndex:(int)arg1 token:(id)arg2;
- (void)configureNewTokensAfterDownload:(int)arg1;
- (_Bool)passwordWasChanged;
- (_Bool)allAuthenticatorAppsAreSynced;
- (void)syncAuthenticatorTokensWithAPI:(id)arg1 forceSync:(_Bool)arg2;
- (void)migrateAuthenticatorAccountsForNewPasswordEncoding:(_Bool)arg1;
- (void)syncAllAuthenticatorTokensWithAPI:(_Bool)arg1;
- (_Bool)passwordIsUpdated;
- (id)getSha256OfAllTokens;
- (_Bool)decryptTokens:(id)arg1;
- (_Bool)decryptAllTokens:(id)arg1;
- (_Bool)decryptToken:(id)arg1 password:(id)arg2 needsToMigrateAccount:(CDUnknownBlockType)arg3;
- (void)updateAccountType:(id)arg1 forAuthenticatorToken:(id)arg2;
- (_Bool)syncNewTokenTypeAfterGAConfigUpdateForToken:(id)arg1;
- (_Bool)syncNewTokenTypesAfterGAConfigUpdate;
- (id)loadTokensFromConfig;
- (void)changeOrderIndexWithSortedTokens:(id)arg1;
- (void)sortTokens;
- (void)saveConfigTokens;
- (_Bool)isSomeAccountDamaged;
- (id)firstTokenAvailable;
- (void)addOrderIndexForOldVersions;
- (void)showApplication:(id)arg1;
- (void)hideApplication:(id)arg1;
- (void)unmarkForDeletion:(id)arg1;
- (void)markForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeToken:(id)arg1;
- (void)addTokens:(id)arg1;
- (void)addToken:(id)arg1;
- (void)reset;
- (id)init;

@end
