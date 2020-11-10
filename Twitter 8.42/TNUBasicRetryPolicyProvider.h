//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLRequestRetryPolicyProvider-Protocol.h>

@class NSString, TNLRequestRetryPolicyConfiguration;

@interface TNUBasicRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>
{
    TNLRequestRetryPolicyConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TNLRequestRetryPolicyConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)tnl_requestOperation:(id)arg1 didStartRetryFromResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 afterDelay:(double)arg3;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (_Bool)tnl_shouldRetryRequestOperation:(id)arg1 withResponse:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

