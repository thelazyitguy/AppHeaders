//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTCallback-Protocol.h"

@class NSString;
@protocol JBTCallback, JBTCommandSuccess;

@interface ComGoogleAppsBigtopSyncClientImplItemsTransactionCommandSuccessFactory_2 : NSObject <JBTCallback>
{
    id <JBTCallback> val$callback_;
    id <JBTCommandSuccess> val$commandSuccess_;
}

- (void)dealloc;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
