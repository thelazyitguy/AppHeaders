//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OAStackView.h>

#import <Module_Framework/GWACollectionViewCell-Protocol.h>
#import <Module_Framework/GWAFormComponent-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/GWAResultingComponent-Protocol.h>
#import <Module_Framework/GWATriggerComponent-Protocol.h>

@class GWADependencyGraph, GWAMegalogsContext, NSArray, NSMutableArray, NSNumber, NSString, OrchButton, QTMColorGroup, UIButton;
@protocol GWAButtonViewDelegate, GWAFormComponentDelegate;

@interface GWAButtonView : OAStackView <GWACollectionViewCell, GWAResultingComponent, GWATriggerComponent, GWAFormComponent, GWAMegalogsSupportingComponent>
{
    UIButton *_buttonView;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_clickTriggers;
    NSMutableArray *_secondaryTriggers;
    long long _secondaryButtonUIReference;
    double _minHeight;
    _Bool _triggerByDependencyGraph;
    QTMColorGroup *_colorGroup;
    _Bool componentHidden;
    _Bool _multilineTitleAllowed;
    id <GWAFormComponentDelegate> formComponentDelegate;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    OrchButton *_proto;
    long long _style;
    id <GWAButtonViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GWAButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isMultilineTitleAllowed) _Bool multilineTitleAllowed; // @synthesize multilineTitleAllowed=_multilineTitleAllowed;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) OrchButton *proto; // @synthesize proto=_proto;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(nonatomic) __weak id <GWAFormComponentDelegate> formComponentDelegate; // @synthesize formComponentDelegate;
@property(nonatomic, getter=isComponentHidden) _Bool componentHidden; // @synthesize componentHidden;
- (void)prepareMegalogsContexts;
- (id)accessibilityElements;
- (id)secondaryTriggers;
- (id)clickTriggers;
- (id)colorGroup;
- (id)button;
- (_Bool)isTriggeredByDependencyGraph;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)updateButtonStateAfterTapped;
- (void)secondaryActionTapped:(id)arg1;
- (void)tapped:(id)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (_Bool)checkTrigger:(id)arg1;
- (void)removeTriggers:(id)arg1;
- (void)addTriggers:(id)arg1;
- (long long)triggerType;
- (void)unRegisterWithDependencyGraph:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)setCellAlignment:(unsigned long long)arg1;
- (double)heightWithConstrainedToWidth:(double)arg1;
- (void)updateButtonWithChipStyle:(long long)arg1 secondaryButtonUIReference:(long long)arg2 secondaryButtonAccessibilityText:(id)arg3;
- (double)buttonViewLayoutMarginOffset;
- (void)setFieldGroupingStyle;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setMinHeight:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithButton:(id)arg1 style:(long long)arg2 delegate:(id)arg3 colorGroup:(id)arg4;
- (id)initWithButton:(id)arg1 delegate:(id)arg2 colorGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
