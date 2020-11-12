//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol _TtP25FCFuncorpNetworkingiFunny22NetworkCommentsService_ <NSObject>
- (void)sendReplyWithCid:(NSString *)arg1 commentId:(NSString *)arg2 screen:(NSString *)arg3 text:(NSString *)arg4 attachmentId:(NSString *)arg5 userMentions:(NSString *)arg6 success:(void (^)(FNROComment *))arg7 failure:(void (^)(NSError *))arg8;
- (void)getRepliesWithCid:(NSString *)arg1 commentId:(NSString *)arg2 limit:(NSNumber *)arg3 nextCursor:(NSString *)arg4 prevCursor:(NSString *)arg5 show:(NSString *)arg6 screen:(NSString *)arg7 success:(void (^)(FNROComments *))arg8 failure:(void (^)(NSError *))arg9;
- (void)getCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROComment *))arg4 failure:(void (^)(NSError *))arg5;
- (void)editCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 commentParams:(NSDictionary *)arg3 fromScreen:(NSString *)arg4 success:(void (^)(FNROComment *))arg5 failure:(void (^)(NSError *))arg6;
- (void)sendCommentWithContentId:(NSString *)arg1 commentParams:(NSDictionary *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROComment *))arg4 failure:(void (^)(NSError *))arg5;
- (void)deleteCommentsPackWithContentId:(NSString *)arg1 commentIds:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(NSArray *))arg4 failure:(void (^)(NSError *))arg5;
- (void)deleteCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(IFNetworkStatusResponse *))arg4 failure:(void (^)(NSError *))arg5;
- (void)abuseCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 abuseType:(NSString *)arg3 fromScreen:(NSString *)arg4 success:(void (^)(IFNetworkStatusResponse *))arg5 failure:(void (^)(NSError *))arg6;
- (void)removeUnsmileFromCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROUnsmile *))arg4 failure:(void (^)(NSError *))arg5;
- (void)addUnsmileToCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROUnsmile *))arg4 failure:(void (^)(NSError *))arg5;
- (void)removeSmileFromCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROSmile *))arg4 failure:(void (^)(NSError *))arg5;
- (void)addSmileToCommentWithContentId:(NSString *)arg1 commentId:(NSString *)arg2 fromScreen:(NSString *)arg3 success:(void (^)(FNROSmile *))arg4 failure:(void (^)(NSError *))arg5;
- (void)getCommentsWithCommentWithCid:(NSString *)arg1 limit:(NSNumber *)arg2 state:(NSString *)arg3 showCommentId:(NSString *)arg4 fromScreen:(NSString *)arg5 success:(void (^)(FNROComments *))arg6 failure:(void (^)(NSError *))arg7;
- (void)getCommentsWithContentWithCid:(NSString *)arg1 limit:(NSNumber *)arg2 nextCursor:(NSString *)arg3 prevCursor:(NSString *)arg4 state:(NSString *)arg5 fromScreen:(NSString *)arg6 success:(void (^)(FNROComments *))arg7 failure:(void (^)(NSError *))arg8;
- (void)getMyCommentsWithLimit:(NSNumber *)arg1 nextCursor:(NSString *)arg2 prevCursor:(NSString *)arg3 fromScreen:(NSString *)arg4 success:(void (^)(FNROComments *))arg5 failure:(void (^)(NSError *))arg6;
@end
