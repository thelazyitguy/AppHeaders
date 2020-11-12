//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppExtensionCredentialsManager-Protocol.h"

@class NSString;
@protocol SPTKeychainManager;

@interface SPTAppExtensionCredentialsManagerImplementation : NSObject <SPTAppExtensionCredentialsManager>
{
    NSString *_domain;
    NSString *_accessGroup;
    NSString *_accessAttr;
    id <SPTKeychainManager> _keychainManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
@property(copy, nonatomic) NSString *accessAttr; // @synthesize accessAttr=_accessAttr;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)accessGroup:(long long)arg1;
- (id)ESDKCredentials;
- (id)deleteESDKCredentials;
- (id)setESDKCredentials:(id)arg1;
- (id)storedLoginSession;
- (id)deleteStoredLoginSession;
- (id)setStoredLoginSession:(id)arg1;
- (id)coreCredentials;
- (id)deleteCoreCredentials;
- (id)setCoreCredentials:(id)arg1;
- (id)initWithAccessGroup:(long long)arg1;
- (id)initWithAccessGroup:(long long)arg1 keychainManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
