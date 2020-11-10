//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCellViewControllerProtocol-Protocol.h>
#import <Module_Framework/YTCollectionDataSourceReloadBehavior-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTCellController, YTPersistentCreateCommentViewController;
@protocol YTInnerTubeSectionRenderer, YTResponder, YTSectionControllerDelegate;

@interface YTCommentSectionHeaderController : NSObject <YTCellViewControllerProtocol, YTResponder, YTCollectionDataSourceReloadBehavior>
{
    YTCellController *_cellController;
    id <YTInnerTubeSectionRenderer> _renderer;
    _Bool _didAttemptTriggerCreateDialog;
    id <YTResponder> _parentResponder;
    id <YTSectionControllerDelegate> sectionControllerDelegate;
    YTPersistentCreateCommentViewController *_persistentCreateCommentViewController;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTPersistentCreateCommentViewController *persistentCreateCommentViewController; // @synthesize persistentCreateCommentViewController=_persistentCreateCommentViewController;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)maybeTriggerCreateDialogOnce;
- (void)didReloadData;
- (void)viewDidBecomeHidden;
- (void)viewWillBecomeVisible;
- (void)updateView:(id)arg1;
- (void)updateRenderer:(id)arg1;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (CDUnknownBlockType)cellNodeBlock;
- (Class)viewClass;
- (void)dealloc;
- (id)initWithService:(id)arg1 sectionRenderer:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

