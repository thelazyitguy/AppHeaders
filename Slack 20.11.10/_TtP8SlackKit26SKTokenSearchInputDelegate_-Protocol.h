//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSUUID, UIImage, UITextView, _TtC8SlackKit7SKToken;
@protocol _TtP8SlackKit11TokenObject_;

@protocol _TtP8SlackKit26SKTokenSearchInputDelegate_
- (long long)numberOfTokens;
- (void)resetSelectedCellIndexPath;
- (void)deleteBackwardsWithTextView:(UITextView *)arg1;
- (void)deleteWithTokenUUID:(NSUUID *)arg1 completion:(void (^)(void))arg2;
- (void)resolveWithToken:(_TtC8SlackKit7SKToken *)arg1 completion:(void (^)(void))arg2;
- (void)updateTokenDisplayImageForTokenObject:(id <_TtP8SlackKit11TokenObject_>)arg1 displayImage:(UIImage *)arg2;
- (void)hasRemovedFromTokenListWithTokenObjectId:(NSString *)arg1;
- (void)hasSelectedFromTokenListWithToken:(_TtC8SlackKit7SKToken *)arg1 completion:(void (^)(void))arg2;
@end
