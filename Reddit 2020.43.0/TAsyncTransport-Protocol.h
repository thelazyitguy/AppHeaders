//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnalyticsFramework/TTransport-Protocol.h>

@protocol TAsyncTransport <TTransport>
- (void)flushWithCompletion:(void (^)(id <TAsyncTransport>))arg1 failure:(void (^)(NSError *, NSHTTPURLResponse *))arg2;
@end
