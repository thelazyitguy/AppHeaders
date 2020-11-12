//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class CAShapeLayer, ChatMessage, ChatPostErrorNode, ChatPostSkeletonNode, FeedPostCellNode;
@protocol AccountContext, FeedPostCellNodeDelegate;

@interface ChatPostNode : ASDisplayNode
{
    id <FeedPostCellNodeDelegate> _delegateVC;
    id <AccountContext> _accountContext;
    ChatMessage *_chatMessage;
    ChatPostSkeletonNode *_skeletonNode;
    ChatPostErrorNode *_errorNode;
    FeedPostCellNode *_cellNode;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) FeedPostCellNode *cellNode; // @synthesize cellNode=_cellNode;
@property(retain, nonatomic) ChatPostErrorNode *errorNode; // @synthesize errorNode=_errorNode;
@property(retain, nonatomic) ChatPostSkeletonNode *skeletonNode; // @synthesize skeletonNode=_skeletonNode;
@property(retain, nonatomic) ChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <FeedPostCellNodeDelegate> delegateVC; // @synthesize delegateVC=_delegateVC;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)errorNodeTapped:(id)arg1;
- (void)layout;
- (void)didLoad;
- (void)configureWithMessage:(id)arg1;
- (id)initWithAccountContext:(id)arg1;

@end
