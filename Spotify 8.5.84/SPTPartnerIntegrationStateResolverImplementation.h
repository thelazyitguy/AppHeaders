//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPartnerIntegrationStateResolver-Protocol.h"

@class NSString, SPTPartnerIntegrationStateLoader;

@interface SPTPartnerIntegrationStateResolverImplementation : NSObject <SPTPartnerIntegrationStateResolver>
{
    SPTPartnerIntegrationStateLoader *_stateLoader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTPartnerIntegrationStateLoader *stateLoader; // @synthesize stateLoader=_stateLoader;
- (void)resolveConnectedStateForIntegration:(id)arg1 withSuccessHandler:(CDUnknownBlockType)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (id)initWithStateLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
