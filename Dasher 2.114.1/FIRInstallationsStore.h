//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GULKeychainStorage, GULUserDefaults, NSString;
@protocol OS_dispatch_queue;

@interface FIRInstallationsStore : NSObject
{
    GULKeychainStorage *_secureStorage;
    NSString *_accessGroup;
    NSObject<OS_dispatch_queue> *_queue;
    GULUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GULUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) GULKeychainStorage *secureStorage; // @synthesize secureStorage=_secureStorage;
- (id)setInstallationExists:(_Bool)arg1 forItemWithIdentifier:(id)arg2;
- (id)installationExistsForAppID:(id)arg1 appName:(id)arg2;
- (id)removeInstallationForAppID:(id)arg1 appName:(id)arg2;
- (id)saveInstallation:(id)arg1;
- (id)installationForAppID:(id)arg1 appName:(id)arg2;
- (id)initWithSecureStorage:(id)arg1 accessGroup:(id)arg2;

@end
