//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class BFDrawImageView, NSArray, NSString, UICollectionView, UILabel;

@interface BFBetaFeedbackSnapshotViewer : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    NSArray *_images;
    BFDrawImageView *_imageView;
    UILabel *_screenTitle;
    double _aspectRatio;
    NSString *_imageKey;
}

@property(retain, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UILabel *screenTitle; // @synthesize screenTitle=_screenTitle;
@property(retain, nonatomic) BFDrawImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismiss;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

