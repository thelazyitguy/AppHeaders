//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ClientDelegate-Protocol.h"

@class BFTaskCompletionSource, CredLockerClient, NSString, WJ2Generator;

@interface WJ2AmazonCredentialLockerHelper : NSObject <ClientDelegate>
{
    CredLockerClient *_client;
    WJ2Generator *_generator;
    BFTaskCompletionSource *_getCredentialsCompletionTask;
    BFTaskCompletionSource *_saveWifiCredentialsCompletionTask;
}

@property(retain, nonatomic) BFTaskCompletionSource *saveWifiCredentialsCompletionTask; // @synthesize saveWifiCredentialsCompletionTask=_saveWifiCredentialsCompletionTask;
@property(retain, nonatomic) BFTaskCompletionSource *getCredentialsCompletionTask; // @synthesize getCredentialsCompletionTask=_getCredentialsCompletionTask;
@property(retain, nonatomic) WJ2Generator *generator; // @synthesize generator=_generator;
@property(retain, nonatomic) CredLockerClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)didDeleteWifiConfigurationsWithError:(id)arg1;
- (void)didGetWifiConfigurations:(id)arg1 error:(id)arg2;
- (void)didSaveWifiConfigurationsWithError:(id)arg1;
- (id)getWifiConfigurationFrom:(id)arg1;
- (id)getWJ2WifiConfigurationFrom:(id)arg1;
- (id)saveWifiCredentialsWithDeviceId:(id)arg1 andProductId:(id)arg2 wifiConfigurations:(id)arg3;
- (id)getCredentialsWithDevice:(id)arg1 targetVersion:(id)arg2 andTargetManufacturer:(id)arg3;
- (id)initWithAccessToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
