//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "GBTDynamicMailRedirectUtilityDelegate-Protocol.h"

@class NSString;

@interface GBTDynamicMailURLProtocol : NSURLProtocol <GBTDynamicMailRedirectUtilityDelegate>
{
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithTask:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)initialize;
- (void)didFailToRedirectRequest:(id)arg1 withError:(id)arg2;
- (void)didLoadData:(id)arg1 forRequest:(id)arg2 response:(id)arg3;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
