//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAForm-Protocol.h>

@class GWAFlowContext, GWAWebViewComponentForm, NSArray, NSString;

@interface GWAPage : NSObject <GWAForm>
{
    GWAFlowContext *_context;
    GWAWebViewComponentForm *_webViewComponentForm;
    _Bool _usesScreenComponentGroups;
    long long _currentScreenIndex;
    NSArray *_componentGroups;
    id _page;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id page; // @synthesize page=_page;
@property(readonly, nonatomic) NSArray *componentGroups; // @synthesize componentGroups=_componentGroups;
- (void)setComponentGroups:(id)arg1;
- (id)allSubComponentGroupsFromComponentGroup:(id)arg1;
- (id)allSubComponentGroups;
- (_Bool)componentGroupDidHandleErrorMessage:(id)arg1;
- (_Bool)pageUsesScreenTypeComponentGroup:(id)arg1;
- (void)componentGroupDidChangeFocusStatus:(id)arg1;
- (id)webViewComponentForm;
- (void)loadLabel:(id)arg1;
- (void)loadLink:(id)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (id)backgroundColor;
- (id)submitConfirmationDialog;
- (id)uiReferenceToComponentMetadataMap;
- (id)componentGroupProtos;
- (id)pageSections;
- (id)context;
- (id)webViewComponent;
- (unsigned long long)firstSectionToFocusWithExpandedSummary:(id)arg1;
- (void)prepareForNextScreen;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)cardComponentGroupFromProto:(id)arg1 metadataMap:(id)arg2 context:(id)arg3;
- (id)createComponentGroupsContext:(id)arg1;
- (void)dealloc;
- (id)initWithPage:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

