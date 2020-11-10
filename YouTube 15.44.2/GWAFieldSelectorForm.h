//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAFlowSection-Protocol.h>
#import <Module_Framework/GWAForm-Protocol.h>
#import <Module_Framework/GWAFormComponent-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>
#import <Module_Framework/GWAResultingComponent-Protocol.h>
#import <Module_Framework/GWASelectorOptionDelegate-Protocol.h>
#import <Module_Framework/GWATriggerComponent-Protocol.h>

@class GWAComponentGroup, GWADependencyGraph, GWAFieldSelectorOptionView, GWAFlowContext, GWAInfoMessageView, GWAMegalogsContext, GWASelectorHeaderView, NSArray, NSMutableArray, NSNumber, NSString, OrchUiField, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate, GWAFormComponentDelegate;

@interface GWAFieldSelectorForm : NSObject <GWAFlowSection, GWASelectorOptionDelegate, GWAForm, GWAFormComponent, GWATriggerComponent, GWAResultingComponent, GWAMegalogsSupportingComponent>
{
    OrchUiField *_uiField;
    GWAFlowContext *_context;
    _Bool _isExpanded;
    _Bool _isCollapsible;
    GWAFieldSelectorOptionView *_selectedOption;
    GWASelectorHeaderView *_expandedHeaderView;
    NSArray *_currentRows;
    GWAInfoMessageView *_errorView;
    NSArray *_allOptions;
    NSArray *_childUiReferences;
    _Bool _componentHidden;
    id <GWAFlowSectionDelegate> _delegate;
    id <GWAFormComponentDelegate> _formComponentDelegate;
    GWAComponentGroup *_parentComponentGroup;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_triggers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, nonatomic) GWADependencyGraph *dependencyGraph; // @synthesize dependencyGraph=_dependencyGraph;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFormComponentDelegate> formComponentDelegate; // @synthesize formComponentDelegate=_formComponentDelegate;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isComponentHidden) _Bool componentHidden; // @synthesize componentHidden=_componentHidden;
- (void)prepareMegalogsContexts;
- (id)expandedHeaderView;
- (id)allOptions;
- (_Bool)isInlineMultiSelect;
- (_Bool)isEmpty;
- (void)setSelectorWithOption:(id)arg1;
- (id)createErrorView;
- (_Bool)isOptional;
- (long long)initialOptionIndex;
- (id)firstNonHiddenOption;
- (id)visibleOptions;
- (void)headerTapped;
- (_Bool)hasHeader;
- (id)createAllOptions;
- (void)reload;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)rowTapped:(unsigned long long)arg1;
- (void)validate;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (id)sections;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (void)selectorOptionSelected:(id)arg1;
- (id)initWithFieldSelector:(id)arg1 context:(id)arg2;

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

