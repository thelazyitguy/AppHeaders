//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GDKActionPanelVCDataProvidingDelegate-Protocol.h"
#import "GDKThemable-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GDKTheme, NICollectionViewActions, NSArray, NSString, UITraitCollection;
@protocol GDKActionPanelVCDataProviding, GDKActionPanelVCDelegate;

@interface GDKActionPanelVC : QTMCollectionViewController <GDKActionPanelVCDataProvidingDelegate, GDKThemable, UIScrollViewDelegate>
{
    id <GDKActionPanelVCDelegate> _delegate;
    NICollectionViewActions *_actions;
    NSString *_userID;
    NSArray *_sections;
    id <GDKActionPanelVCDataProviding> _dataSource;
    GDKTheme *_theme;
}

+ (id)footerViewObject;
+ (id)headerViewObjectWithTitle:(id)arg1 theme:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GDKActionPanelVCDataProviding> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NICollectionViewActions *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak id <GDKActionPanelVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)notify:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateSections:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)attachItem:(id)arg1;
- (id)sectionedArrayFromNestedItems:(id)arg1;
- (void)updateModel;
- (id)initWithParams:(id)arg1 dataSource:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end
