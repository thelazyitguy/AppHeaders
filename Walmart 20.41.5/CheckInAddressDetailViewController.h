//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MKMapView, MKPlacemark, NSArray, NSMutableArray, NSString, UICollectionView, UILabel, _TtC7Grocery18AniviaUsageAdapter;
@protocol _TtP7Grocery18CheckInImageLoader_;

@interface CheckInAddressDetailViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MKMapViewDelegate>
{
    NSString *_locationAddress;
    NSString *_locationDetails;
    NSArray *_locationPhotoURLs;
    MKPlacemark *_placemark;
    double _initialMapWidth;
    double _initialMapHeight;
    UILabel *_addressLabel;
    UILabel *_detailsLabel;
    MKMapView *_mapView;
    UICollectionView *_collectionView;
    UILabel *_storePhotos;
    NSArray *_orderLocationPhotoURLs;
    NSMutableArray *_orderLocationPhotos;
    _TtC7Grocery18AniviaUsageAdapter *_usageAnalytics;
    id <_TtP7Grocery18CheckInImageLoader_> _imageLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP7Grocery18CheckInImageLoader_> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) _TtC7Grocery18AniviaUsageAdapter *usageAnalytics; // @synthesize usageAnalytics=_usageAnalytics;
@property(retain, nonatomic) NSMutableArray *orderLocationPhotos; // @synthesize orderLocationPhotos=_orderLocationPhotos;
@property(copy, nonatomic) NSArray *orderLocationPhotoURLs; // @synthesize orderLocationPhotoURLs=_orderLocationPhotoURLs;
@property(nonatomic) __weak UILabel *storePhotos; // @synthesize storePhotos=_storePhotos;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(nonatomic) __weak UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) double initialMapHeight; // @synthesize initialMapHeight=_initialMapHeight;
@property(nonatomic) double initialMapWidth; // @synthesize initialMapWidth=_initialMapWidth;
@property(retain, nonatomic) MKPlacemark *placemark; // @synthesize placemark=_placemark;
@property(copy, nonatomic) NSArray *locationPhotoURLs; // @synthesize locationPhotoURLs=_locationPhotoURLs;
@property(copy, nonatomic) NSString *locationDetails; // @synthesize locationDetails=_locationDetails;
@property(copy, nonatomic) NSString *locationAddress; // @synthesize locationAddress=_locationAddress;
- (id)photosForFullScreenPhotoScene;
- (void)prepareForFullScreenPhotoSegue:(id)arg1 sender:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformFullScreenPhotoSegueWithSender:(id)arg1;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)orderLocationLoadingImage;
- (void)loadNextOrderLocationPhoto;
- (void)updateOrderLocationPhotoURLs;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)zoomTheMap:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)injectDependencies:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
