//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class ASButtonNode, BaseButtonNode, CommentTreeNode, CommentTreeNodeCommandOptions, CommentTreeVisualDepthNode, NSString, StructuredStyle, VoteButtonNode;
@protocol CommentTreeCommandBarNodeDelegate, ViewContext;

@interface CommentTreeCommandBarNode : BaseFeedDisplayNode <ObjectObserverProtocol>
{
    _Bool _shouldUseNewIcons;
    ASButtonNode *_scoreTextNode;
    CommentTreeNode *_commentTreeNode;
    id <CommentTreeCommandBarNodeDelegate> _delegate;
    id <ViewContext> _viewContext;
    CommentTreeVisualDepthNode *_visualDepthNode;
    StructuredStyle *_subredditStyling;
    CommentTreeNodeCommandOptions *_options;
    VoteButtonNode *_upvoteButtonNode;
    VoteButtonNode *_downvoteButtonNode;
    BaseButtonNode *_replyButtonNode;
    BaseButtonNode *_editButtonNode;
    BaseButtonNode *_moderateButtonNode;
    BaseButtonNode *_awardButtonNode;
    BaseButtonNode *_overflowButtonNode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldUseNewIcons; // @synthesize shouldUseNewIcons=_shouldUseNewIcons;
@property(retain, nonatomic) BaseButtonNode *overflowButtonNode; // @synthesize overflowButtonNode=_overflowButtonNode;
@property(retain, nonatomic) BaseButtonNode *awardButtonNode; // @synthesize awardButtonNode=_awardButtonNode;
@property(retain, nonatomic) BaseButtonNode *moderateButtonNode; // @synthesize moderateButtonNode=_moderateButtonNode;
@property(retain, nonatomic) BaseButtonNode *editButtonNode; // @synthesize editButtonNode=_editButtonNode;
@property(retain, nonatomic) BaseButtonNode *replyButtonNode; // @synthesize replyButtonNode=_replyButtonNode;
@property(retain, nonatomic) VoteButtonNode *downvoteButtonNode; // @synthesize downvoteButtonNode=_downvoteButtonNode;
@property(retain, nonatomic) VoteButtonNode *upvoteButtonNode; // @synthesize upvoteButtonNode=_upvoteButtonNode;
@property(retain, nonatomic) CommentTreeNodeCommandOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) StructuredStyle *subredditStyling; // @synthesize subredditStyling=_subredditStyling;
@property(retain, nonatomic) CommentTreeVisualDepthNode *visualDepthNode; // @synthesize visualDepthNode=_visualDepthNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <CommentTreeCommandBarNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CommentTreeNode *commentTreeNode; // @synthesize commentTreeNode=_commentTreeNode;
@property(retain, nonatomic) ASButtonNode *scoreTextNode; // @synthesize scoreTextNode=_scoreTextNode;
- (void)updateContentViewsForData:(id)arg1;
@property(readonly, nonatomic) _Bool shouldApplySubredditStyling;
- (void)moderateButtonNodeTapped:(id)arg1;
- (void)replyButtonNodeTapped:(id)arg1;
- (void)editButtonNodeTapped:(id)arg1;
- (void)awardButtonNodeTapped:(id)arg1;
- (void)overflowButtonNodeTapped:(id)arg1;
- (void)downvoteButtonNodeTapped:(id)arg1;
- (void)upvoteButtonNodeTapped:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)showVoteTooltip;
- (void)configureVoteButtonNodes;
- (void)configureScoreTextNode;
- (id)scoreColorForComment:(id)arg1;
- (id)scoreTextForComment:(id)arg1;
- (void)configureNodes;
- (void)createNodes;
- (id)initWithViewContext:(id)arg1 commentTreeNode:(id)arg2 subredditStyling:(id)arg3 options:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
