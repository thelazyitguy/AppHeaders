//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1UnifiedCardComponentView-Protocol.h>

@class NSString, T1AvatarImageView, T1UserBadger, TFNAttributedTextView, TFNTappableHighlightView, TFNTwitterUnifiedCard, TFSTwitterScribeContext, TIPImagePipeline, UIImageView, UILabel, UIView;
@protocol T1ListCopyStringsProvider, T1UnifiedCardComponentViewEventDelegate, TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardTwitterListDetailsComponentView : TFNLayoutableView <T1UnifiedCardComponentView>
{
    TFNTwitterUnifiedCard *_unifiedCard;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    id <T1UnifiedCardComponentViewEventDelegate> _eventDelegate;
    id <T1ListCopyStringsProvider> _stringsProvider;
    T1UserBadger *_userBadger;
    TFSTwitterScribeContext *_scribeContext;
    TFNTappableHighlightView *_highlightView;
    UIImageView *_titleIconView;
    TFNAttributedTextView *_titleTextView;
    UILabel *_nameLabel;
    T1AvatarImageView *_userAvatarImageView;
    TFNAttributedTextView *_userTextView;
}

+ (id)_t1_nameLabelFont;
+ (id)sharedLayoutDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *userTextView; // @synthesize userTextView=_userTextView;
@property(retain, nonatomic) T1AvatarImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TFNAttributedTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(retain, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) T1UserBadger *userBadger; // @synthesize userBadger=_userBadger;
@property(retain, nonatomic) id <T1ListCopyStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(nonatomic) __weak id <T1UnifiedCardComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
- (void)_t1_didTapListDetails;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)updatedScribeContextForComponentViewEvent:(id)arg1 sourceScribeContext:(id)arg2;
- (id)supplementalParamsForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)setupActions;
- (id)t1_accessibilityCustomActions;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
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
