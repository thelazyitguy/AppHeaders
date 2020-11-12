//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTIconButton.h"

#import "CMLAnchoredPopupDelegate-Protocol.h"
#import "GBTAddonsActionHandlerDataSource-Protocol.h"
#import "GBTAddonsActionHandlerDelegate-Protocol.h"
#import "GBTNetworkImageViewDelegate-Protocol.h"

@class CMLAnchoredPopup, CMLComponent, CMLViewFactory, GBTAddonsActionHandler, GBTConversationMessage, JAddOnsContextualAddOn, NSString, UIView;
@protocol GBTAddonButtonDelegate, GBTClient, JBTAddOnForMessage;

@interface GBTAddonButton : GBTIconButton <CMLAnchoredPopupDelegate, GBTAddonsActionHandlerDataSource, GBTAddonsActionHandlerDelegate, GBTNetworkImageViewDelegate>
{
    id <GBTClient> _client;
    id <JBTAddOnForMessage> _addon;
    UIView *_containerView;
    GBTConversationMessage *_conversationMessage;
    GBTAddonsActionHandler *_universalActionsHandler;
    CMLAnchoredPopup *_universalActionsAnchoredPopup;
    _Bool _formSubmissionInProgress;
    CMLComponent *_universalActionsComponent;
    CMLViewFactory *_cmlViewFactory;
    JAddOnsContextualAddOn *_contextualAddOn;
    id <GBTAddonButtonDelegate> _delegate;
    UIView *_normalImageView;
    UIView *_selectedImageView;
}

+ (id)errorIconImageViewForSelectedState:(_Bool)arg1;
+ (id)networkImageViewForUrl:(id)arg1 delegate:(id)arg2 client:(id)arg3;
+ (id)addonButtonWithFrame:(struct CGRect)arg1 addon:(id)arg2 contextualAddon:(id)arg3 conversationMessage:(id)arg4 delegate:(id)arg5 client:(id)arg6 parentVisualElement:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIView *normalImageView; // @synthesize normalImageView=_normalImageView;
@property(readonly, nonatomic) __weak id <GBTAddonButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) JAddOnsContextualAddOn *contextualAddOn; // @synthesize contextualAddOn=_contextualAddOn;
- (void)selectButtonWithRendererFailure:(id)arg1;
- (void)selectButton;
- (void)unselectButton;
- (void)buttonTapped:(id)arg1;
- (void)initializeUniversalActions;
- (void)setupButtonAction;
- (void)anchoredPopupDidDismissPopup:(id)arg1 cancelled:(_Bool)arg2;
- (void)addonsActionHandlerDidOpenSafeUrlWithOriginalLink:(id)arg1 safeLink:(id)arg2 reloadOnClose:(_Bool)arg3 showLoadingIndicator:(_Bool)arg4;
- (void)addonsActionHandlerFormSubmissionFailed;
- (void)addonsActionHandlerDidReceiveSubmitFormResponse:(id)arg1 persistFormValues:(_Bool)arg2 forAddOnWithId:(id)arg3;
- (void)addonsActionHandlerComposeEmailResponseFailed;
- (void)addonsActionHandlerDidReceiveComposeEmailResponse:(id)arg1;
- (void)addonsActionHandlerDidStartUniversalAction;
- (void)addonsActionHandlerDidStartFormSubmissionForAction:(id)arg1;
- (void)addonsActionHandlerDidStartComposeEmailRequest;
- (id)addOnForFormSubmission;
- (id)conversationMessageForAddOn;
- (void)imageViewDidFailToLoadImage:(id)arg1;
- (void)imageViewDidLoadImage:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicatorOnRefresh;
@property(readonly, nonatomic) _Bool needsRefresh;
- (void)setAddonId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *addonId;
- (void)notifyAddOnRefreshed;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 client:(id)arg2 addon:(id)arg3 conversationMessage:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
