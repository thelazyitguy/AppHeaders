//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/FNWaterfallThumbsViewDelegate-Protocol.h>
#import <Funny/FNWaterfallThumbsViewProtocol-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/UICollectionViewDelegate-Protocol.h>

@class FNROContent, FNWaterfallThumbsView, IFBaseRouter, NSString, UIView;
@protocol FNWaterfallThumbsModelProtocol, IFModelProtocol, IFViewProtocol;

@interface IFSelectMyMemeViewController : UIViewController <FNWaterfallThumbsViewDelegate, FNWaterfallThumbsViewProtocol, UICollectionViewDelegate, IFControllerProtocol>
{
    id <IFModelProtocol> model;
    IFBaseRouter *_router;
    FNWaterfallThumbsView *_collectionView;
    id <FNWaterfallThumbsModelProtocol> _waterfallData;
    long long _numberOfColumns;
    CDUnknownBlockType _itemSelected;
    FNROContent *_selectedItem;
    UIView *_emptyCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyCollectionView; // @synthesize emptyCollectionView=_emptyCollectionView;
@property(retain, nonatomic) FNROContent *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy, nonatomic) CDUnknownBlockType itemSelected; // @synthesize itemSelected=_itemSelected;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) id <FNWaterfallThumbsModelProtocol> waterfallData; // @synthesize waterfallData=_waterfallData;
@property(retain, nonatomic) FNWaterfallThumbsView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IFBaseRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
- (void)waterfallModelReset:(CDUnknownBlockType)arg1;
- (void)waterfallModelError:(id)arg1;
- (void)waterfallModelDidAddItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waterfallModelDidUpdatedWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isNeedNewData;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)loadDataAsNew:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadCollectionView;
- (void)updateNumberOfColumnsByDeviceOrientation:(long long)arg1;
- (void)setupView;
- (void)loadNextData;
- (id)initWidthWaterfallData:(id)arg1 itemSelected:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isOnTopController;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end
