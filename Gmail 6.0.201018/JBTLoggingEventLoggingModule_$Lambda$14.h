//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilConcurrentCallable-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTLBigtopClientExtension_BigTopClientEntry, NSString;

@interface JBTLoggingEventLoggingModule_$Lambda$14 : NSObject <JavaUtilConcurrentCallable>
{
    ComGoogleCommonBaseOptional *val$accountInfo_;
    ComGoogleCommonBaseOptional *val$clientInfo_;
    ComGoogleCommonBaseOptional *val$clientState_;
    JBTLBigtopClientExtension_BigTopClientEntry *val$clientEntry_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
