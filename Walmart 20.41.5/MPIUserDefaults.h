//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPIUserDefaults : NSObject
{
}

+ (id)stringFromDeviceToken:(id)arg1;
+ (id)standardUserDefaults;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)currentConfigurationParameters;
- (_Bool)isConfigurationParametersOutdated;
- (_Bool)isConfigurationExpired;
- (_Bool)isExistingUserId:(id)arg1;
- (void)resetDefaults;
- (void)deleteConfiguration;
- (void)migrateConfiguration;
- (void)setConfiguration:(id)arg1 eTag:(id)arg2 requestTimestamp:(double)arg3 currentAge:(id)arg4 maxAge:(id)arg5;
- (id)getKitConfigurations;
- (id)getConfiguration;
- (void)migrateFromSharedGroupIdentifier;
- (void)migrateToSharedGroupIdentifier:(id)arg1;
- (void)setSharedGroupIdentifier:(id)arg1;
- (void)migrateFirstLastSeenUsers;
- (void)migrateUserKeysWithUserId:(id)arg1;
- (void)synchronize;
- (void)removeMPObjectForKey:(id)arg1;
- (void)removeMPObjectForKey:(id)arg1 userId:(id)arg2;
- (void)setMPObject:(id)arg1 forKey:(id)arg2 userId:(id)arg3;
- (id)mpObjectForKey:(id)arg1 userId:(id)arg2;
- (id)customUserDefaults;
- (id)prefixedKey:(id)arg1 userId:(id)arg2;
- (_Bool)isUserSpecificKey:(id)arg1;
- (id)userIDsInUserDefaults;
- (id)userKeyForKey:(id)arg1 userId:(id)arg2;
- (id)globalKeyForKey:(id)arg1;
- (id)extensionExcludedKeys;
- (id)userSpecificKeys;

@end
