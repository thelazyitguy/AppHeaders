//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASButtonNode, MetaBadgePreviewLoaderNode, MetaBadgePreviewModalBadgePagerNode, UIColor;
@protocol MetaBadgePreviewActionDelegate;

@interface MetaBadgePreviewModalContentNode : ASDisplayNode
{
    MetaBadgePreviewLoaderNode *_spinnerNode;
    MetaBadgePreviewModalBadgePagerNode *_badgePagerNode;
    ASButtonNode *_closeButtonNode;
    UIColor *_contentColor;
    ASButtonNode *_actionButtonNode;
    id <MetaBadgePreviewActionDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MetaBadgePreviewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) ASButtonNode *actionButtonNode; // @synthesize actionButtonNode=_actionButtonNode;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) ASButtonNode *closeButtonNode; // @synthesize closeButtonNode=_closeButtonNode;
@property(retain, nonatomic) MetaBadgePreviewModalBadgePagerNode *badgePagerNode; // @synthesize badgePagerNode=_badgePagerNode;
@property(retain, nonatomic) MetaBadgePreviewLoaderNode *spinnerNode; // @synthesize spinnerNode=_spinnerNode;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)setBadges:(id)arg1 selectedBadgePK:(id)arg2 actionTitle:(id)arg3;
- (void)didTapActionButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)didLoad;
- (id)initWithContentColor:(id)arg1 actionDelegate:(id)arg2;

@end
