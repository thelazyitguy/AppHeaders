//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWADependencyGraphComponent-Protocol.h>
#import <Module_Framework/GWAFlowSection-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAComponentGroup, GWAMegalogsContext, NSArray, NSNumber, NSString, QTMColorGroup, UIColor, UIFont, UIImage, UIStackView;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWAInfoMessageSection : NSObject <GWADependencyGraphComponent, GWAFlowSection, GWAMegalogsSupportingComponent>
{
    NSArray *_infoMessages;
    NSArray *_infoMessageViews;
    unsigned long long _displayType;
    QTMColorGroup *_colorGroup;
    UIColor *_linkColor;
    UIFont *_font;
    UIStackView *_emphasizedStackView;
    _Bool _needIndexedBulletPoint;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareMegalogsContexts;
- (id)emphasizedStackView;
- (id)infoMessageViews;
- (void)registerWithDependencyGraph:(id)arg1;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)initWithInfoMessage:(id)arg1 context:(id)arg2;
- (id)initWithInfoMessages:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

