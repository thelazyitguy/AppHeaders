//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentFluentFuture.h"

#import "ComGoogleCommonUtilConcurrentAbstractFuture_Trusted-Protocol.h"

@class NSString;

@interface ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture : ComGoogleCommonUtilConcurrentFluentFuture <ComGoogleCommonUtilConcurrentAbstractFuture_Trusted>
{
}

- (_Bool)cancelWithBoolean:(_Bool)arg1;
- (void)addListenerWithJavaLangRunnable:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (_Bool)isCancelled;
- (_Bool)isDone;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
