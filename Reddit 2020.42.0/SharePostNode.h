//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASImageNode, FeedPostCellNode;
@protocol FeedPostCellNodeDelegate, ViewContext;

@interface SharePostNode : ASDisplayNode
{
    id <FeedPostCellNodeDelegate> _delegateVC;
    id <ViewContext> _viewContext;
    FeedPostCellNode *_postCellNode;
    ASDisplayNode *_attributionNode;
    ASImageNode *_logoImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASImageNode *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) ASDisplayNode *attributionNode; // @synthesize attributionNode=_attributionNode;
@property(retain, nonatomic) FeedPostCellNode *postCellNode; // @synthesize postCellNode=_postCellNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <FeedPostCellNodeDelegate> delegateVC; // @synthesize delegateVC=_delegateVC;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)imageWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithViewContext:(id)arg1 post:(id)arg2;

@end

