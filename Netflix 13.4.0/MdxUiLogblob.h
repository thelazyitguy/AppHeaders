//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MdxUiLogblob : NSObject
{
}

+ (id)sanitizeFriendlyName:(id)arg1;
+ (id)dataFromConnection:(id)arg1;
+ (id)dataFromTarget:(id)arg1;
+ (id)errorDataFromError:(id)arg1;
+ (void)queueLogblobWithType:(id)arg1 delay:(double)arg2 data:(id)arg3 isError:(_Bool)arg4;
+ (void)queueLogblobWithType:(id)arg1 delay:(double)arg2 data:(id)arg3 errorCode:(id)arg4 error:(id)arg5 target:(id)arg6 connection:(id)arg7;
+ (void)queueLogblobWithType:(id)arg1 delay:(double)arg2 data:(id)arg3 target:(id)arg4 connection:(id)arg5;
+ (void)queueDisconnectWithDelay:(double)arg1 connection:(id)arg2 errorCode:(id)arg3 error:(id)arg4;
+ (void)queueDisconnectWithDelay:(double)arg1 connection:(id)arg2;
+ (void)queueConnectWithDelay:(double)arg1 launchOrigin:(id)arg2 target:(id)arg3 connection:(id)arg4 errorCode:(id)arg5 error:(id)arg6;
+ (void)queueConnectWithDelay:(double)arg1 launchOrigin:(id)arg2 target:(id)arg3 connection:(id)arg4;
+ (void)queueReconnectWithDelay:(double)arg1 target:(id)arg2 errorCode:(id)arg3 error:(id)arg4;
+ (void)queueReconnectWithDelay:(double)arg1 target:(id)arg2;
+ (void)queueMdxInitWithDelay:(double)arg1 errorCode:(id)arg2 error:(id)arg3;
+ (void)queueMdxInitWithDelay:(double)arg1;

@end
