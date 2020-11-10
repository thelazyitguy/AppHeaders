//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASNetworkImageNode, BaseButtonNode, NSObject;
@protocol Subscribable><Styleable, SubscribableNodeDelegate, ViewContext;

@interface SubscribableButtonNode : BaseFeedDisplayNode
{
    _Bool _shouldShowSubscribeButton;
    _Bool _shouldUseSafeBrowsingMode;
    ASNetworkImageNode *_subredditButtonNode;
    id <SubscribableNodeDelegate> _delegate;
    id <ViewContext> _viewContext;
    NSObject<Subscribable><Styleable> *_subscribable;
    BaseButtonNode *_subscribeButtonNode;
    struct CGSize _buttonNodeSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseSafeBrowsingMode; // @synthesize shouldUseSafeBrowsingMode=_shouldUseSafeBrowsingMode;
@property(nonatomic) struct CGSize buttonNodeSize; // @synthesize buttonNodeSize=_buttonNodeSize;
@property(retain, nonatomic) BaseButtonNode *subscribeButtonNode; // @synthesize subscribeButtonNode=_subscribeButtonNode;
@property(retain, nonatomic) NSObject<Subscribable><Styleable> *subscribable; // @synthesize subscribable=_subscribable;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <SubscribableNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASNetworkImageNode *subredditButtonNode; // @synthesize subredditButtonNode=_subredditButtonNode;
@property(nonatomic) _Bool shouldShowSubscribeButton; // @synthesize shouldShowSubscribeButton=_shouldShowSubscribeButton;
- (void)subscribeButtonTapped:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureSubscribeButton;
- (void)configureSubscribeButtonHiddenState;
- (void)configureNodes;
- (_Bool)shouldObscureIcon;
- (void)createSubscribeButtonNode;
- (void)didLoad;
- (id)initWithSubscribable:(id)arg1 viewContext:(id)arg2 buttonNodeSize:(struct CGSize)arg3 shouldUseSafeBrowsingMode:(_Bool)arg4;

@end
