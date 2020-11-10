//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationContextService-Protocol.h"

@class NSString, SPTAllocationContext, SPTRemoteConfigurationAppContext;

@interface SPTRemoteConfigurationContextServiceImplementation : NSObject <SPTRemoteConfigurationContextService>
{
    SPTRemoteConfigurationAppContext *_remoteConfigurationAppContext;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTRemoteConfigurationAppContext *remoteConfigurationAppContext; // @synthesize remoteConfigurationAppContext=_remoteConfigurationAppContext;
- (void)load;
- (void)configureWithServices:(id)arg1;
- (id)provideRemoteConfigurationContext;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

