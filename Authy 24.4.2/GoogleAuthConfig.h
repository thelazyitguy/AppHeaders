//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainStorage, NSString, NSUserDefaults;

@interface GoogleAuthConfig : NSObject
{
    _Bool _needsEnrollment;
    KeychainStorage *_keychainStorage;
    NSUserDefaults *_userDefaults;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) KeychainStorage *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
@property(nonatomic) _Bool needsEnrollment; // @synthesize needsEnrollment=_needsEnrollment;
- (void)syncTokensConfigWithCompletion:(CDUnknownBlockType)arg1;
- (id)tokenConfigWithAccountType:(id)arg1;
- (id)tokensConfig;
- (void)setTimestampPasswordToNow;
@property(retain, nonatomic) NSString *timestampPassword;
- (id)description;
- (_Bool)hasCorrectPassword;
- (void)resetData;
- (void)changeBackupKeyEnrollment:(_Bool)arg1;
- (_Bool)isBackupsEnabled;
- (void)disableBackups;
- (void)enableBackups;
@property(retain, nonatomic) NSString *password;
- (id)init;

@end

