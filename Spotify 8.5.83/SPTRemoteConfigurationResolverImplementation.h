//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationResolver-Protocol.h"

@class NSString, SPTRemoteConfiguration;
@protocol SPTRemoteConfigurationIntegration;

@interface SPTRemoteConfigurationResolverImplementation : NSObject <SPTRemoteConfigurationResolver>
{
    SPTRemoteConfiguration *_remoteConfiguration;
    id <SPTRemoteConfigurationIntegration> _integration;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTRemoteConfigurationIntegration> integration; // @synthesize integration=_integration;
@property(retain, nonatomic) SPTRemoteConfiguration *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
- (id)getWithClass:(Class)arg1;
- (id)initWithRemoteConfiguration:(id)arg1 integration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

