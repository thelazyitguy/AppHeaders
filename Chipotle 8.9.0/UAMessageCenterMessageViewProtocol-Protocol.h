//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UAInboxMessage, UIView;

@protocol UAMessageCenterMessageViewProtocol
@property(copy, nonatomic) CDUnknownBlockType closeBlock;
@property(readonly, nonatomic) UAInboxMessage *message;
- (void)loadMessageForID:(NSString *)arg1 onlyIfChanged:(_Bool)arg2 onError:(void (^)(void))arg3;

@optional
- (void)setLoadingIndicatorView:(UIView *)arg1 animations:(void (^)(void))arg2;
@end
