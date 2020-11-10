//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAFlowSection-Protocol.h>
#import <Module_Framework/GWASummaryViewDelegate-Protocol.h>

@class GWAComponentGroup, GWASummaryView, NSArray, NSString, OrchComponentGroup, QTMColorGroup, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate, GWASummaryViewSectionDelegate;

@interface GWASummaryViewSection : NSObject <GWASummaryViewDelegate, GWAFlowSection>
{
    OrchComponentGroup *_proto;
    NSArray *_sections;
    QTMColorGroup *_colorGroup;
    GWASummaryView *_summaryView;
    GWASummaryView *_summaryTitleView;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    id <GWASummaryViewSectionDelegate> _summaryDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GWASummaryViewSectionDelegate> summaryDelegate; // @synthesize summaryDelegate=_summaryDelegate;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasSummaryTitle;
- (id)submittableFieldGroupSummaryView;
- (id)fieldGroupSummaryView;
- (id)sectionSummaryPrimaryTitleNewSectionStyleWithParams:(id)arg1 darkMode:(_Bool)arg2;
- (id)sectionSummaryViewNewSectionStyleWithParams:(id)arg1;
- (id)sectionSummarySecondaryTitleDefaultSectionStyleWithParams:(id)arg1 darkMode:(_Bool)arg2;
- (id)sectionSummaryPrimaryTitleDefaultSectionStyleWithParams:(id)arg1 darkMode:(_Bool)arg2;
- (id)sectionSummaryViewDefaultSectionStyleWithParams:(id)arg1;
- (id)titleSummaryView;
- (id)regularSummaryView;
- (void)summaryViewTap:(id)arg1;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, copy, nonatomic) NSArray *rows;
- (void)rowTapped:(unsigned long long)arg1;
- (void)applyDarkMode;
- (void)applyLightMode;
- (void)checkTraitCollection;
- (void)notifyDelegateSummaryTapped;
- (void)expandSummaryView;
- (id)initWithcomponentGroup:(id)arg1 sections:(id)arg2 colorGroup:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

