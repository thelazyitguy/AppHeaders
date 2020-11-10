//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber;
@protocol NCLUploadDelegate;

@protocol NCLDataDelegate <NSObject>
@property(nonatomic) __weak id <NCLUploadDelegate> uploadDelegate;
- (void)flushWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)addEventWithId:(NSNumber *)arg1 andContext:(NSDictionary *)arg2;
- (NSArray *)getOpenSessionIds;
- (NSDictionary *)endSession:(NSNumber *)arg1 endContext:(NSDictionary *)arg2;
- (NSDictionary *)getSession:(NSNumber *)arg1;
- (void)startSession:(NSNumber *)arg1 andContext:(NSDictionary *)arg2;
- (NSDictionary *)removeContext:(NSNumber *)arg1;
- (void)addContextWithId:(NSNumber *)arg1 andContext:(NSDictionary *)arg2;
- (void)configureWithState:(NSDictionary *)arg1;
- (NSDictionary *)currentState;
@end
