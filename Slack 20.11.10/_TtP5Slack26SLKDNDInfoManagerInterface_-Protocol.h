//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, OS_dispatch_queue, _TtC15SlackFoundation10Disposable;

@protocol _TtP5Slack26SLKDNDInfoManagerInterface_
- (_TtC15SlackFoundation10Disposable *)addObserverWithCallbackQueue:(OS_dispatch_queue *)arg1 callback:(void (^)(NSSet *))arg2;
- (_Bool)userIsDNDWithUserId:(NSString *)arg1;
- (void)resetCache;
@end
