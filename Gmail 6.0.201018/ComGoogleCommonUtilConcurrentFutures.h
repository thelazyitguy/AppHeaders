//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentGwtFuturesCatchingSpecialization.h"

@interface ComGoogleCommonUtilConcurrentFutures : ComGoogleCommonUtilConcurrentGwtFuturesCatchingSpecialization
{
}

+ (id)waitQueue;
+ (void)waitForVoidFutureAndRaiseIfFails:(id)arg1;
+ (id)waitForObjectFuture:(id)arg1 error:(id *)arg2;
+ (_Bool)waitForVoidFuture:(id)arg1 error:(id *)arg2;
+ (void)addToFuture:(id)arg1 objectCallback:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
+ (void)addToFuture:(id)arg1 objectCallback:(CDUnknownBlockType)arg2;
+ (void)addToFuture:(id)arg1 voidCallback:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
+ (void)addToFuture:(id)arg1 voidCallback:(CDUnknownBlockType)arg2;

@end
