//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol IFNetworkContentListService
- (void)setContentIds:(NSString *)arg1;
- (void)setClusterId:(NSString *)arg1;
- (void)setIsTop:(_Bool)arg1;
- (void)setIsAbusedFilter:(unsigned long long)arg1;
- (void)setShotStatusFilter:(unsigned long long)arg1;
- (void)setDefaultLimit;
- (void)setBeforeAfterMiddleLimit;
- (void)setMiddleCommentId:(NSString *)arg1;
- (void)setParentContentId:(NSString *)arg1;
- (void)setUserId:(NSString *)arg1;
- (void)setChannelId:(NSString *)arg1;
- (void)cancel;
- (void)contentListWithQuery:(NSString *)arg1 notifyAboutNotifications:(_Bool)arg2 prevCursor:(NSString *)arg3 nextCursor:(NSString *)arg4 firstContentId:(NSString *)arg5 success:(void (^)(FNROContentList *))arg6 failure:(void (^)(NSError *))arg7;
@end
