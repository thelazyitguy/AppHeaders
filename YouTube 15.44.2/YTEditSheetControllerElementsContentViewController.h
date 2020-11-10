//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTEditSheetControllerContent-Protocol.h>
#import <Module_Framework/YTEditSheetControllerDelegate-Protocol.h>
#import <Module_Framework/YTEditSheetControllerHeaderConfiguration-Protocol.h>

@class GIMMe, NSString, YTIElementRenderer;
@protocol ELMContext, YTEditSheetControllerElementsContentViewControllerDelegate, YTEditSheetControllerState, YTResponder;

@interface YTEditSheetControllerElementsContentViewController : YTStyledViewController <YTEditSheetControllerContent, YTEditSheetControllerHeaderConfiguration, YTEditSheetControllerDelegate>
{
    YTIElementRenderer *_renderer;
    NSString *_title;
    id <ELMContext> _elementsContext;
    id <YTResponder> _parentResponder;
    id <YTEditSheetControllerElementsContentViewControllerDelegate> _elementContentViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTEditSheetControllerElementsContentViewControllerDelegate> elementContentViewDelegate; // @synthesize elementContentViewDelegate=_elementContentViewDelegate;
- (id)parentResponder;
- (id)elementsContext;
- (void)sheetControllerDidDismiss:(id)arg1;
- (_Bool)automaticallyResizesContentView;
- (id)style;
- (_Bool)useRoundedCorners;
- (id)contentHeaderConfiguration;
- (double)preferredContentHeight;
- (id)contentScrollView;
- (long long)closeStyle;
- (id)title;
- (void)loadView;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2 title:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <YTEditSheetControllerState> stateDelegate;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleRect;

@end
