//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAAPIRequestMapping-Protocol.h>
#import <Funny/SMAUbApiRequestMapping-Protocol.h>

@class NSString;

@interface SMAAPIRequestMapper : NSObject <SMAUbApiRequestMapping, SMAAPIRequestMapping>
{
}

- (id)buildRequestBodyFromExplicitViolationReport:(id)arg1;
- (id)buildRequestBodyFromSSLViolationReport:(id)arg1;
- (id)networkRequestWithAPIViolationReport:(id)arg1 error:(id *)arg2;
- (id)networkRequestWithAPIAdRequest:(id)arg1 error:(id *)arg2;
- (id)networkRequestWithAPIUnifiedBiddingRequest:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
