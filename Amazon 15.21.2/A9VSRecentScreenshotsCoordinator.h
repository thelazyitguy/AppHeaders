//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSRecentScreenshotsViewControllerDelegate-Protocol.h"
#import "A9VSStyleSnapContainerProtocol-Protocol.h"

@class A9VSImageFileIOManager, A9VSRecentScreenshotsViewController, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol A9VSStyleSnapContainerInterface, OS_dispatch_queue;

@interface A9VSRecentScreenshotsCoordinator : NSObject <A9VSRecentScreenshotsViewControllerDelegate, A9VSStyleSnapContainerProtocol>
{
    long long cellsPerRow;
    long long defaultDisplayRows;
    long long expandDisplayRows;
    long long maxImageCount;
    A9VSRecentScreenshotsViewController *_galleryVC;
    NSObject<A9VSStyleSnapContainerInterface> *_containerObj;
    unsigned long long _currentViewState;
    double _cellHeight;
    NSMutableDictionary *_dataSource;
    NSMutableOrderedSet *_imageFiles;
    A9VSImageFileIOManager *_imageManager;
    NSObject<OS_dispatch_queue> *_serialWriteQueueForImageFiles;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialWriteQueueForImageFiles; // @synthesize serialWriteQueueForImageFiles=_serialWriteQueueForImageFiles;
@property(retain, nonatomic) A9VSImageFileIOManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) NSMutableOrderedSet *imageFiles; // @synthesize imageFiles=_imageFiles;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) unsigned long long currentViewState; // @synthesize currentViewState=_currentViewState;
@property(nonatomic) __weak NSObject<A9VSStyleSnapContainerInterface> *containerObj; // @synthesize containerObj=_containerObj;
@property(retain, nonatomic) A9VSRecentScreenshotsViewController *galleryVC; // @synthesize galleryVC=_galleryVC;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount;
@property(nonatomic) long long expandDisplayRows; // @synthesize expandDisplayRows;
@property(nonatomic) long long defaultDisplayRows; // @synthesize defaultDisplayRows;
@property(nonatomic) long long cellsPerRow; // @synthesize cellsPerRow;
- (void).cxx_destruct;
- (double)cardHeightInExpandedState;
- (double)cardHeightInCollapsedState;
- (void)updateImageFilesIfRequiredWithResult:(id)arg1;
- (void)resetImageFiles;
- (id)imageFetchOptions;
- (_Bool)doesHaveScreenshotsToDisplay;
- (struct CGSize)imageSize;
- (void)updateScreenShotsWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetData;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (_Bool)isViewPreCollapsed;
- (void)setViewToPreCollapsedState;
- (void)setViewToExpandedState;
- (void)setViewToCollapsedState;
- (void)didSelectItemAtIndexPath:(id)arg1 screenPos:(struct CGPoint)arg2;
- (struct CGSize)cellSize;
- (void)refreshScreenshotsListWithCompletion:(CDUnknownBlockType)arg1;
- (id)screenShotAtIndexPath:(id)arg1;
- (long long)numberOfItemsInExpandedState;
- (long long)numberOfItemsInCollapsedState;
- (void)setupGalleryViews;
- (_Bool)shouldDisplayCard;
- (struct CGSize)contentViewSize;
- (id)contentViewController;
- (void)containerModelReference:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
