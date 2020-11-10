//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1UnifiedCardComponentView-Protocol.h>

@class NSString, T1UserView, TFNTappableHighlightView, TFNTwitterAccount, TFNTwitterUnifiedCard, TFSTwitterScribeContext, TIPImagePipeline, UIView;
@protocol T1UnifiedCardComponentViewEventDelegate, TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardProfileComponentView : TFNLayoutableView <T1UnifiedCardComponentView>
{
    TFNTwitterUnifiedCard *unifiedCard;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    id <T1UnifiedCardComponentViewEventDelegate> eventDelegate;
    TIPImagePipeline *imagePipeline;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    TFNTappableHighlightView *_userHighlightView;
    T1UserView *_userView;
}

+ (id)_t1_cardLayoutMetricsForLayoutMetrics:(id)arg1;
+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) T1UserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) TFNTappableHighlightView *userHighlightView; // @synthesize userHighlightView=_userHighlightView;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;
@property(nonatomic) __weak id <T1UnifiedCardComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate;
@property(retain, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard;
- (id)calculatedLayoutMetrics;
- (void)_t1_didTapUser;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)t1_accessibilityCustomActions;
- (id)accessibilityLabel;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
@property(readonly, nonatomic) _Bool shouldDelayContainerTouchDownHighlighting;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
