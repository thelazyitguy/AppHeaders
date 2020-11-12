//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSReactFeatureInfo, NSArray, NSData, NSDictionary, NSString;

@protocol A9VSStyleSnapSearchModelDelegate <NSObject>
- (void)updateRegionsViewInResultSheetForBoundingBoxFrames:(NSArray *)arg1;
- (struct CGRect)getOriginalImageFrame;
- (void)didReceiveResponse:(NSData *)arg1;
- (void)addPropsToDebugVC:(NSDictionary *)arg1;
- (void)addSSNAPResultsViewWithFeature:(A9VSReactFeatureInfo *)arg1;
- (void)updateViewForReactResults:(NSArray *)arg1 defaultIndex:(unsigned long long)arg2;
- (void)addBoundingBoxViews:(NSArray *)arg1 queryId:(NSString *)arg2;
- (void)updateForResumeSearchState;
- (void)updateViewsForPhotoInitialState;
- (void)updateViewsForPhotoScanningState;
- (void)startSearchForImageFromHash:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)updateViewForNetworkFailureState;
- (void)updateViewsForPhotoErrorState;
- (void)searchDidStart;
@end
