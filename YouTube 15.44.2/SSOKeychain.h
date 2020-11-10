//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSOKeychain : NSObject
{
}

+ (id)optionalDataForKey:(id)arg1 userID:(id)arg2;
+ (id)optionalDataForKey:(id)arg1 identity:(id)arg2;
+ (void)removeAllOptionalDataForIdentity:(id)arg1;
+ (void)cleanupOptionalDataForKey:(id)arg1;
+ (void)removeOptionalDataForKey:(id)arg1 userID:(id)arg2;
+ (void)removeOptionalDataForKey:(id)arg1 identity:(id)arg2;
+ (_Bool)setOptionalData:(id)arg1 forKey:(id)arg2 identity:(id)arg3 error:(id *)arg4;
+ (id)optionalDataServiceNameForKey:(id)arg1;
+ (_Bool)setAuthAdviceState:(id)arg1 error:(id *)arg2;
+ (id)authAdviceState;
+ (id)creationDateForIdentity:(id)arg1;
+ (_Bool)deleteIdentity:(id)arg1 restricted:(_Bool)arg2 error:(id *)arg3;
+ (_Bool)allIdentitiesRemoved;
+ (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;
+ (_Bool)writeIdentity:(id)arg1 restricted:(_Bool)arg2 error:(id *)arg3;
+ (_Bool)readKeychainItemForIdentity:(id)arg1 result:(id *)arg2 error:(id *)arg3;
+ (_Bool)writeSharedKeychain:(id)arg1 error:(id *)arg2;
+ (id)restrictedIdentitiesForConfiguration:(id)arg1 logger:(id)arg2 error:(id *)arg3;
+ (id)identitiesForConfiguration:(id)arg1 logger:(id)arg2 error:(id *)arg3;
+ (id)identitiesForConfiguration:(id)arg1 restricted:(_Bool)arg2 logger:(id)arg3 error:(id *)arg4;
+ (_Bool)removeGeneratedDeviceIdentifierError:(id *)arg1;
+ (id)generatedDeviceIdentifier;
+ (id)queryAllMatchingRestricted:(_Bool)arg1;
+ (id)queryAllMatching;
+ (id)queryMatchingID:(id)arg1 serviceName:(id)arg2;
+ (id)deleteQueryMatchingID:(id)arg1 serviceName:(id)arg2;
+ (id)queryForUpdatingKeychainItem:(id)arg1;
+ (id)updateQueryKeys;
+ (id)nonCreatableKeys;
+ (void)updateAccessibilityForKeychainItems:(id)arg1;
+ (id)accessGroup;
+ (id)sharedAccessGroup;
+ (id)computeAppIdentifierPrefix;
+ (id)keychainErrorWithStatus:(int)arg1;
+ (int)secItemUpdate:(id)arg1 value:(id)arg2;
+ (int)secItemDelete:(id)arg1;
+ (int)secItemAdd:(id)arg1 result:(id *)arg2;
+ (int)secItemCopyMatching:(id)arg1 result:(id *)arg2;
+ (id)keychainItemAccessibility;

@end

