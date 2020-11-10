//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaAudioSessionActivationManagerFlagsProvider-Protocol.h"
#import "SPTGaiaLockScreenPlayerFlagsProvider-Protocol.h"

@class NSString, SPTGaiaFeatureProperties;

@interface SPTGaiaFeatureFlagsManager : NSObject <SPTGaiaLockScreenPlayerFlagsProvider, SPTGaiaAudioSessionActivationManagerFlagsProvider>
{
    SPTGaiaFeatureProperties *_remoteConfigProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTGaiaFeatureProperties *remoteConfigProperties; // @synthesize remoteConfigProperties=_remoteConfigProperties;
- (_Bool)audioSessionActivationManagerEnabled;
- (_Bool)lockScreenPlayerFeatureEnabled;
- (id)initWithRemoteConfigProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

