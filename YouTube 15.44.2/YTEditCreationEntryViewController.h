//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSString, YTCommandResponderEvent, YTICommand;
@protocol YTRendererController, YTResponder;

@interface YTEditCreationEntryViewController : UIViewController <YTGraftingViewController, YTPageStyleProvider, YTTopController>
{
    YTICommand *_model;
    UIViewController<YTRendererController> *_buttonSheetViewController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)dismiss;
@property(readonly, nonatomic) long long pageStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)navEndpoint;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

