//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class CommentTreeNode;

@interface _TtC6Reddit19ChatPostContentNode : BaseFeedDisplayNode
{
    // Error parsing type: , name: kAvatarImageSize
    // Error parsing type: , name: kAwardPadding
    // Error parsing type: , name: viewContext
    // Error parsing type: , name: $__lazy_storage_$_textNode
    // Error parsing type: , name: avatarNode
    // Error parsing type: , name: predictionNode
    // Error parsing type: , name: awardImageNode
    // Error parsing type: , name: awardBackgroundNode
    // Error parsing type: , name: headerNode
    // Error parsing type: , name: options
    // Error parsing type: , name: commentNode
    // Error parsing type: , name: parentCommentNode
    // Error parsing type: , name: votingNode
    // Error parsing type: , name: delegate
    // Error parsing type: , name: liveStream
    // Error parsing type: , name: isReplyFeatureEnabled
    // Error parsing type: , name: shouldShowDownvote
    // Error parsing type: , name: isGroupAwardingEnabled
    // Error parsing type: , name: subredditMentionsHandler
    // Error parsing type: , name: shouldShowVotingNodeBlock
    // Error parsing type: , name: singleTapGesture
    // Error parsing type: , name: predictionInfo
    // Error parsing type: , name: observations
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didTapContentNode:(id)arg1;
- (void)configureNodes;
- (void)addKeyValueObservations;
- (void)didLoad;
- (id)initWith:(id)arg1 subredditMentionsHandler:(id)arg2 commentNode:(id)arg3 liveStream:(id)arg4 options:(id)arg5 predictionInfo:(id)arg6 delegate:(id)arg7 isReplyFeatureEnabled:(_Bool)arg8 shouldShowDownvote:(_Bool)arg9 isGroupAwardingEnabled:(_Bool)arg10 shouldShowVotingNodeBlock:(CDUnknownBlockType)arg11;
@property(nonatomic, retain) CommentTreeNode *commentNode; // @synthesize commentNode;

@end

