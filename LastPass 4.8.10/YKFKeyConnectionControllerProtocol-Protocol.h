//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, YKFKeyCommandConfiguration;

@protocol YKFKeyConnectionControllerProtocol
- (void)cancelAllCommands;
- (void)closeConnectionWithCompletion:(void (^)(void))arg1;
- (void)dispatchOnSequentialQueue:(void (^)(void))arg1;
- (void)dispatchOnSequentialQueue:(void (^)(void))arg1 delay:(double)arg2;
- (void)execute:(NSData *)arg1 configuration:(YKFKeyCommandConfiguration *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)execute:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end

