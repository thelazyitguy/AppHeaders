//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSArray, NSError, NSString, NSURL, SMALocation, SMAMraidAppOrientation, SMAMraidExpandProperties, SMAMraidExposureProperties, SMAMraidOrientationProperties;

@protocol SMAMraidInteractingDelegate <NSObject>
- (void)processOrientationChange:(SMAMraidOrientationProperties *)arg1;
- (void)processExpandChange:(SMAMraidExpandProperties *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processExposureChange:(SMAMraidExposureProperties *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processDefaultPositionChange:(struct CGRect)arg1 completion:(void (^)(_Bool))arg2;
- (void)processCurrentPositionChange:(struct CGRect)arg1 completion:(void (^)(_Bool))arg2;
- (void)processViewabilityChange:(_Bool)arg1 completion:(void (^)(_Bool))arg2;
- (void)processHtmlLoading:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processSupportedFeatures:(NSArray *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processPlacementType:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
- (void)processLocationChange:(SMALocation *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processMaxSizeChange:(struct CGSize)arg1 completion:(void (^)(_Bool))arg2;
- (void)processScreenSizeChange:(struct CGSize)arg1 completion:(void (^)(_Bool))arg2;
- (void)processCurrentAppOrientationChange:(SMAMraidAppOrientation *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processAudioVolumeChange:(double)arg1 completion:(void (^)(_Bool))arg2;
- (void)processStateChange:(long long)arg1 completion:(void (^)(_Bool))arg2;
- (void)processResizeWithCompletion:(void (^)(_Bool))arg1;
- (void)processPlayVideoWithURL:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processExpandWithURL:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processUnloadWithCompletion:(void (^)(_Bool))arg1;
- (void)processCloseWithCompletion:(void (^)(_Bool))arg1;
- (void)processIntentOpenURL:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (void)processScriptDidLoadWithCompletion:(void (^)(_Bool))arg1;

@optional
- (void)raiseError:(NSError *)arg1 inAction:(NSString *)arg2;
@end
